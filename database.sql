-- phpMyAdmin SQL Dump
-- version 2.11.6
-- http://www.phpmyadmin.net
--
-- Host: localhost
-- Generation Time: Jun 29, 2022 at 10:57 PM
-- Server version: 5.0.51
-- PHP Version: 5.2.6


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;

--
-- Database: `ayushlibrary`
--

-- --------------------------------------------------------

--
-- Table structure for table `books`
--

DROP TABLE IF EXISTS `books`;
CREATE TABLE `books` (
  `BOOK_ID` int(11) NOT NULL,
  `Title` text,
  `Author` text,
  `Status` text,
  PRIMARY KEY  (`BOOK_ID`)
) TYPE=InnoDB;

--
-- Dumping data for table `books`
--

INSERT INTO `books` (`BOOK_ID`, `Title`, `Author`, `Status`) VALUES
(101, 'Java', 'Ayush', 'Avail'),
(102, 'Python', 'Rossem', 'Avail'),
(103, 'AI', 'Ayush', 'Avail');

-- --------------------------------------------------------

--
-- Table structure for table `issue`
--

DROP TABLE IF EXISTS `issue`;
CREATE TABLE `issue` (
  `Book_ID` int(11) default NULL,
  `Isuue_TO` text
) TYPE=InnoDB;

--
-- Dumping data for table `issue`
--

