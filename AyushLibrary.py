import pymysql
import sys
from PyQt5 import QtWidgets, uic

# for creating database
try:
    con = pymysql.connect(host="localhost", user="root", password="")
    con1 = con.cursor()
    txt1 = "create database AyushLibrary"
    con1.execute(txt1)
    con.close()
#
# for creating table
    con = pymysql.connect(host="localhost", user="root", password="", database="AyushLibrary")
    con2 = con.cursor()
    txt2 = "create table books(BOOK_ID integer primary key,Title text,Author text,Status text)"
    txt3 = "create table Issue(Book_ID integer, Isuue_TO text)"
    con2.execute(txt2)
    con2.execute(txt3)
    con.close()
except:
    print("Error related to connectivity or database or table")

con = pymysql.connect(host="localhost", user="root", password="", database="AyushLibrary")
con3 = con.cursor()

# close all window showing only add window
def add():
    home.close()
    view_book.close()
    issue_book.close()
    delete.close()
    return_book.close()
    add_book.show()


# close all window showing only del window
def delb():
    home.close()
    add_book.close()
    view_book.close()
    issue_book.close()
    return_book.close()
    delete.show()


# close all window showing only view window
def view():
    home.close()
    add_book.close()
    issue_book.close()
    delete.close()
    return_book.close()
    view_book.show()
    view_b_details()


# close all window showing only issue window
def issueb():
    home.close()
    add_book.close()
    view_book.close()
    delete.close()
    return_book.close()
    issue_book.show()


# close all window showing only return window
def returnb():
    home.close()
    add_book.close()
    view_book.close()
    issue_book.close()
    delete.close()
    return_book.show()


# close all window showing only main window and clear all text field and messages
def main_menu():
    add_book.close()
    view_book.close()
    issue_book.close()
    delete.close()
    return_book.close()
    home.show()
    add_book.txtbid.setText("")
    add_book.txttitle.setText("")
    add_book.txtauthor.setText("")
    add_book.msglabel.setText("")
    delete.deltxt.setText("")
    delete.delmsg.setText("")
    issue_book.issuebid.setText("")
    issue_book.issuetxt.setText("")
    issue_book.issuemsg.setText("")
    return_book.returntxt.setText("")
    return_book.msgreturn.setText("")


# function for add books
def add_b_details():
    try:
        b_id = add_book.txtbid.text()
        b_title = add_book.txttitle.text()
        b_author = add_book.txtauthor.text()
        add_book.txtstatus.setText("Avail")
        b_status = add_book.txtstatus.text()
        txt4 = "Insert into books (Book_ID, Title, Author, Status) values({}, '{}', '{}', '{}')".format\
            (b_id, b_title, b_author, b_status)
        con3.execute(txt4)
        con.commit()
        add_book.msglabel.setText("Book Added")
    except:
        add_book.msglabel.setText("Error On Storing Data")


# function for view books
def view_b_details():
    try:
        view1 = "select * from books"
        con3.execute(view1)
        d = con3.fetchall()
        view_book.table1.setRowCount(0)
        for row, rdata in enumerate(d):
            view_book.table1.insertRow(row)
            for col, cdata in enumerate(rdata):
                view_book.table1.setItem(row, col, QtWidgets.QTableWidgetItem(str(cdata)))
    except:
        print("Error while fetching data")


# function for delete books
def delete_book():
    try:
        b_id = delete.deltxt.text()
        txt5 = "Select Book_ID from books where Book_ID = {}".format(b_id)
        con3.execute(txt5)
        data = con3.fetchall()
        if data == ():
            delete.delmsg.setText("Book ID not exist")
        else:
            txt4 = "Delete from books where Book_ID = {}".format(b_id)
            con3.execute(txt4)
            con.commit()
            delete.delmsg.setText("Book Delete Successfully")
    except:
        delete.delmsg.setText("Error while deleting")


# function for issue books
def issue_b():
    try:
        b_id = issue_book.issuebid.text()
        issue_to = issue_book.issuetxt.text()
        check = "select status from books where Book_ID = {}".format(b_id)
        con3.execute(check)
        data = con3.fetchall()
        if data == ():
            issue_book.issuemsg.setText("Book is not available")
        elif data[0][0] == 'Avail':
            txt4 = "insert into Issue (Book_ID, Isuue_TO) values({}, '{}')".format(b_id, issue_to)
            con3.execute(txt4)
            con.commit()
            txt5 = "Update books SET Status = 'Issued' where Book_ID = {}".format(b_id)
            con3.execute(txt5)
            con.commit()
            issue_book.issuemsg.setText("Book Issued Successfully")
        elif data:
            issue_book.issuemsg.setText("Book Already Issued")
        else:
            print("error")
    except:
        issue_book.issuemsg.setText("Error on issuing")


# function for return books
def return_books():
    try:
        b_id = return_book.returntxt.text()
        txt5 = "Select Book_ID from Issue where Book_ID = {}".format(b_id)
        con3.execute(txt5)
        data = con3.fetchall()
        if data == ():
            return_book.msgreturn.setText("Book ID not exist")
        else:
            txt4 = "Delete from Issue where Book_ID = {}".format(b_id)
            con3.execute(txt4)
            con.commit()
            txt5 = "Update books SET Status = 'Avail' where Book_ID = {}".format(b_id)
            con3.execute(txt5)
            con.commit()
            return_book.msgreturn.setText("Book Return")
    except:
        return_book.msgreturn.setText("ID not Exist")


app = QtWidgets.QApplication([])

# load ui files
home = uic.loadUi("Library_Management/Home.ui")
add_book = uic.loadUi("Library_Management/Add_Books.ui")
view_book = uic.loadUi("Library_Management/View_Books.ui")
issue_book = uic.loadUi("Library_Management/Isuue_Book.ui")
delete = uic.loadUi("Library_Management/Delete.ui")
return_book = uic.loadUi("Library_Management/Return.ui")

home.show()

# action performed when button clicked
home.addb.clicked.connect(add)
home.delb.clicked.connect(delb)
home.viewb.clicked.connect(view)
home.issueb.clicked.connect(issueb)
home.returnb.clicked.connect(returnb)

# for main menu
add_book.mm.clicked.connect(main_menu)
view_book.viewmm.clicked.connect(main_menu)
issue_book.issuemm.clicked.connect(main_menu)
delete.delmm.clicked.connect(main_menu)
return_book.returnmm.clicked.connect(main_menu)

# different window button action performed
add_book.addb2.clicked.connect(add_b_details)
delete.delbook.clicked.connect(delete_book)
issue_book.issuebtn.clicked.connect(issue_b)
return_book.returnbtn.clicked.connect(return_books)


sys.exit(app.exec_())

con.close()
