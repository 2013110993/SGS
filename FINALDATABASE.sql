-- --------------------------------------------------------
-- Host:                         127.0.0.1
-- Server version:               10.4.18-MariaDB - mariadb.org binary distribution
-- Server OS:                    Win64
-- HeidiSQL Version:             11.2.0.6213
-- --------------------------------------------------------

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET NAMES utf8 */;
/*!50503 SET NAMES utf8mb4 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;


-- Dumping database structure for studentgradingsystem
DROP DATABASE IF EXISTS `studentgradingsystem`;
CREATE DATABASE IF NOT EXISTS `studentgradingsystem` /*!40100 DEFAULT CHARACTER SET utf8mb4 */;
USE `studentgradingsystem`;

-- Dumping structure for table studentgradingsystem.academicprogram
DROP TABLE IF EXISTS `academicprogram`;
CREATE TABLE IF NOT EXISTS `academicprogram` (
  `id` varchar(255) NOT NULL,
  `name` varchar(255) DEFAULT NULL,
  `faculty` varchar(255) DEFAULT NULL,
  `code` varchar(255) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- Dumping data for table studentgradingsystem.academicprogram: ~0 rows (approximately)
DELETE FROM `academicprogram`;
/*!40000 ALTER TABLE `academicprogram` DISABLE KEYS */;
INSERT INTO `academicprogram` (`id`, `name`, `faculty`, `code`) VALUES
	('AINT', 'Associate In Information Technology', 'FST', 'AINT'),
	('AINT-1', 'Associate In Information Technology', 'FST', NULL),
	('AINT-2', 'Associate In Information Technology', 'FST', NULL),
	('AINT-3', 'Associate In Information Texh', 'FST', NULL),
	('AINT3', 'Associate In information', 'FST', NULL);
/*!40000 ALTER TABLE `academicprogram` ENABLE KEYS */;

-- Dumping structure for table studentgradingsystem.coursecomments
DROP TABLE IF EXISTS `coursecomments`;
CREATE TABLE IF NOT EXISTS `coursecomments` (
  `courseid` varchar(11) NOT NULL,
  `timeStamp` timestamp NOT NULL DEFAULT current_timestamp() ON UPDATE current_timestamp(),
  `comment` text DEFAULT NULL,
  `lecturerid` int(11) DEFAULT NULL,
  `studentID` int(12) DEFAULT NULL,
  `courseRating` varchar(10) CHARACTER SET utf8 DEFAULT NULL,
  KEY `lecturerid` (`lecturerid`),
  KEY `courseid` (`courseid`),
  KEY `studentID` (`studentID`),
  CONSTRAINT `coursecomments_ibfk_1` FOREIGN KEY (`lecturerid`) REFERENCES `lecturer` (`id`),
  CONSTRAINT `coursecomments_ibfk_2` FOREIGN KEY (`courseid`) REFERENCES `courses` (`id`),
  CONSTRAINT `coursecomments_ibfk_3` FOREIGN KEY (`studentID`) REFERENCES `student` (`userid`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- Dumping data for table studentgradingsystem.coursecomments: ~0 rows (approximately)
DELETE FROM `coursecomments`;
/*!40000 ALTER TABLE `coursecomments` DISABLE KEYS */;
/*!40000 ALTER TABLE `coursecomments` ENABLE KEYS */;

-- Dumping structure for table studentgradingsystem.courses
DROP TABLE IF EXISTS `courses`;
CREATE TABLE IF NOT EXISTS `courses` (
  `id` varchar(11) NOT NULL,
  `name` varchar(255) DEFAULT NULL,
  `semester` varchar(255) DEFAULT NULL,
  `creditHour` int(11) DEFAULT NULL,
  `courseCode` varchar(11) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- Dumping data for table studentgradingsystem.courses: ~0 rows (approximately)
DELETE FROM `courses`;
/*!40000 ALTER TABLE `courses` DISABLE KEYS */;
INSERT INTO `courses` (`id`, `name`, `semester`, `creditHour`, `courseCode`) VALUES
	('CMPS1131', 'Principles of Programming I', '1', 3, 'CMPS1131'),
	('CMPS1134', 'Fundamentals of Computing', '1', 3, 'CMPS1134'),
	('CMPS1232', 'Principles of Programming II', '2', 3, 'CMPS1232'),
	('ENGL1014', 'College English I', '1', 3, 'ENGL1014'),
	('MATH1151', 'Algebra', '1', 3, 'MATH1151'),
	('MATH1201', 'Trigonometry', '1', 3, 'MATH1201'),
	('PHIL1014', 'Ethics', '1', 3, 'PHIL1014');
/*!40000 ALTER TABLE `courses` ENABLE KEYS */;

-- Dumping structure for table studentgradingsystem.lecturer
DROP TABLE IF EXISTS `lecturer`;
CREATE TABLE IF NOT EXISTS `lecturer` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `name` varchar(50) DEFAULT NULL,
  PRIMARY KEY (`id`),
  CONSTRAINT `lecturer_ibfk_1` FOREIGN KEY (`id`) REFERENCES `users` (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- Dumping data for table studentgradingsystem.lecturer: ~0 rows (approximately)
DELETE FROM `lecturer`;
/*!40000 ALTER TABLE `lecturer` DISABLE KEYS */;
/*!40000 ALTER TABLE `lecturer` ENABLE KEYS */;

-- Dumping structure for table studentgradingsystem.lecturercourses
DROP TABLE IF EXISTS `lecturercourses`;
CREATE TABLE IF NOT EXISTS `lecturercourses` (
  `id` varchar(255) NOT NULL,
  `courseID` varchar(11) DEFAULT NULL,
  `lecturerID` int(11) DEFAULT NULL,
  `Year` varchar(10) DEFAULT NULL,
  KEY `courseID` (`courseID`),
  KEY `lecturerID` (`lecturerID`),
  CONSTRAINT `lecturercourses_ibfk_1` FOREIGN KEY (`courseID`) REFERENCES `courses` (`id`),
  CONSTRAINT `lecturercourses_ibfk_2` FOREIGN KEY (`lecturerID`) REFERENCES `lecturer` (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- Dumping data for table studentgradingsystem.lecturercourses: ~0 rows (approximately)
DELETE FROM `lecturercourses`;
/*!40000 ALTER TABLE `lecturercourses` DISABLE KEYS */;
/*!40000 ALTER TABLE `lecturercourses` ENABLE KEYS */;

-- Dumping structure for table studentgradingsystem.person
DROP TABLE IF EXISTS `person`;
CREATE TABLE IF NOT EXISTS `person` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `firstname` varchar(255) DEFAULT NULL,
  `middlename` varchar(255) DEFAULT NULL,
  `lastname` varchar(255) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=2 DEFAULT CHARSET=utf8mb4;

-- Dumping data for table studentgradingsystem.person: ~1 rows (approximately)
DELETE FROM `person`;
/*!40000 ALTER TABLE `person` DISABLE KEYS */;
INSERT INTO `person` (`id`, `firstname`, `middlename`, `lastname`) VALUES
	(1, 'Admin', 'Admin', 'Admin');
/*!40000 ALTER TABLE `person` ENABLE KEYS */;

-- Dumping structure for table studentgradingsystem.prequisites
DROP TABLE IF EXISTS `prequisites`;
CREATE TABLE IF NOT EXISTS `prequisites` (
  `id` varchar(255) NOT NULL,
  `prequisite` varchar(255) DEFAULT NULL,
  PRIMARY KEY (`id`),
  CONSTRAINT `prequisites_ibfk_1` FOREIGN KEY (`id`) REFERENCES `courses` (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- Dumping data for table studentgradingsystem.prequisites: ~0 rows (approximately)
DELETE FROM `prequisites`;
/*!40000 ALTER TABLE `prequisites` DISABLE KEYS */;
INSERT INTO `prequisites` (`id`, `prequisite`) VALUES
	('CMPS1131', 'NONE'),
	('CMPS1134', 'NONE'),
	('CMPS1232', 'CMPS1131'),
	('ENGL1014', 'NONE'),
	('MATH1151', 'NONE'),
	('MATH1201', 'NONE'),
	('PHIL1014', 'NONE');
/*!40000 ALTER TABLE `prequisites` ENABLE KEYS */;

-- Dumping structure for table studentgradingsystem.programsequence
DROP TABLE IF EXISTS `programsequence`;
CREATE TABLE IF NOT EXISTS `programsequence` (
  `id` varchar(255) NOT NULL,
  `code` varchar(255) DEFAULT NULL,
  `pSYear` varchar(4) DEFAULT NULL,
  `academicProgramID` varchar(255) DEFAULT NULL,
  PRIMARY KEY (`id`),
  KEY `academicProgramID` (`academicProgramID`),
  CONSTRAINT `programsequence_ibfk_1` FOREIGN KEY (`academicProgramID`) REFERENCES `academicprogram` (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- Dumping data for table studentgradingsystem.programsequence: ~0 rows (approximately)
DELETE FROM `programsequence`;
/*!40000 ALTER TABLE `programsequence` DISABLE KEYS */;
INSERT INTO `programsequence` (`id`, `code`, `pSYear`, `academicProgramID`) VALUES
	('AINT', 'AINT', '2016', 'AINT'),
	('AINT-1', 'AINT-1', '2019', 'AINT-1'),
	('AINT-2', 'AINT-2', '2019', 'AINT-2'),
	('AINT-3', 'AINT-3', '2021', 'AINT-3'),
	('AINT3', 'AINT3', '2021', 'AINT3');
/*!40000 ALTER TABLE `programsequence` ENABLE KEYS */;

-- Dumping structure for table studentgradingsystem.programsequencecourses
DROP TABLE IF EXISTS `programsequencecourses`;
CREATE TABLE IF NOT EXISTS `programsequencecourses` (
  `programSequenceid` varchar(255) NOT NULL,
  `courseID` varchar(255) DEFAULT NULL,
  KEY `programSequenceid` (`programSequenceid`),
  KEY `courseID` (`courseID`),
  CONSTRAINT `programsequencecourses_ibfk_1` FOREIGN KEY (`programSequenceid`) REFERENCES `programsequence` (`id`),
  CONSTRAINT `programsequencecourses_ibfk_2` FOREIGN KEY (`courseID`) REFERENCES `courses` (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- Dumping data for table studentgradingsystem.programsequencecourses: ~0 rows (approximately)
DELETE FROM `programsequencecourses`;
/*!40000 ALTER TABLE `programsequencecourses` DISABLE KEYS */;
INSERT INTO `programsequencecourses` (`programSequenceid`, `courseID`) VALUES
	('AINT', 'CMPS1134'),
	('AINT', 'CMPS1131'),
	('AINT-3', 'CMPS1134'),
	('AINT-3', 'CMPS1131'),
	('AINT-3', 'MATH1151'),
	('AINT-3', 'MATH1201'),
	('AINT-3', 'ENGL1014'),
	('AINT-3', 'PHIL1014'),
	('AINT-3', 'CMPS1232');
/*!40000 ALTER TABLE `programsequencecourses` ENABLE KEYS */;

-- Dumping structure for table studentgradingsystem.questions
DROP TABLE IF EXISTS `questions`;
CREATE TABLE IF NOT EXISTS `questions` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `questions` varchar(255) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- Dumping data for table studentgradingsystem.questions: ~0 rows (approximately)
DELETE FROM `questions`;
/*!40000 ALTER TABLE `questions` DISABLE KEYS */;
/*!40000 ALTER TABLE `questions` ENABLE KEYS */;

-- Dumping structure for table studentgradingsystem.role
DROP TABLE IF EXISTS `role`;
CREATE TABLE IF NOT EXISTS `role` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `name` varchar(255) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=4 DEFAULT CHARSET=utf8mb4;

-- Dumping data for table studentgradingsystem.role: ~3 rows (approximately)
DELETE FROM `role`;
/*!40000 ALTER TABLE `role` DISABLE KEYS */;
INSERT INTO `role` (`id`, `name`) VALUES
	(1, 'Student'),
	(2, 'Lecture'),
	(3, 'Admin');
/*!40000 ALTER TABLE `role` ENABLE KEYS */;

-- Dumping structure for table studentgradingsystem.securityquestions
DROP TABLE IF EXISTS `securityquestions`;
CREATE TABLE IF NOT EXISTS `securityquestions` (
  `userId` int(11) NOT NULL,
  `questionId` int(11) DEFAULT NULL,
  `answer` varchar(255) DEFAULT NULL,
  KEY `questionId` (`questionId`),
  KEY `userId` (`userId`),
  CONSTRAINT `securityquestions_ibfk_1` FOREIGN KEY (`userId`) REFERENCES `users` (`id`),
  CONSTRAINT `securityquestions_ibfk_2` FOREIGN KEY (`questionId`) REFERENCES `questions` (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- Dumping data for table studentgradingsystem.securityquestions: ~0 rows (approximately)
DELETE FROM `securityquestions`;
/*!40000 ALTER TABLE `securityquestions` DISABLE KEYS */;
/*!40000 ALTER TABLE `securityquestions` ENABLE KEYS */;

-- Dumping structure for table studentgradingsystem.student
DROP TABLE IF EXISTS `student`;
CREATE TABLE IF NOT EXISTS `student` (
  `userid` int(11) NOT NULL AUTO_INCREMENT,
  `id` int(11) DEFAULT NULL,
  `programSequenceid` varchar(255) DEFAULT NULL,
  `admissionYear` int(11) DEFAULT NULL,
  PRIMARY KEY (`userid`),
  KEY `programSequenceid` (`programSequenceid`),
  CONSTRAINT `student_ibfk_1` FOREIGN KEY (`programSequenceid`) REFERENCES `programsequence` (`id`),
  CONSTRAINT `student_ibfk_3` FOREIGN KEY (`userid`) REFERENCES `users` (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- Dumping data for table studentgradingsystem.student: ~0 rows (approximately)
DELETE FROM `student`;
/*!40000 ALTER TABLE `student` DISABLE KEYS */;
/*!40000 ALTER TABLE `student` ENABLE KEYS */;

-- Dumping structure for table studentgradingsystem.studentcourses
DROP TABLE IF EXISTS `studentcourses`;
CREATE TABLE IF NOT EXISTS `studentcourses` (
  `studentid` int(11) NOT NULL,
  `courseid` varchar(11) DEFAULT NULL,
  `courseGrade` varchar(11) DEFAULT NULL,
  `courseRating` varchar(11) DEFAULT NULL,
  `isTransferred` varchar(11) DEFAULT NULL,
  KEY `courseid` (`courseid`),
  KEY `studentcourses_ibfk_1` (`studentid`),
  CONSTRAINT `studentcourses_ibfk_1` FOREIGN KEY (`studentid`) REFERENCES `student` (`userid`),
  CONSTRAINT `studentcourses_ibfk_2` FOREIGN KEY (`courseid`) REFERENCES `courses` (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- Dumping data for table studentgradingsystem.studentcourses: ~0 rows (approximately)
DELETE FROM `studentcourses`;
/*!40000 ALTER TABLE `studentcourses` DISABLE KEYS */;
/*!40000 ALTER TABLE `studentcourses` ENABLE KEYS */;

-- Dumping structure for table studentgradingsystem.users
DROP TABLE IF EXISTS `users`;
CREATE TABLE IF NOT EXISTS `users` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `personId` int(11) DEFAULT NULL,
  `username` varchar(255) DEFAULT NULL,
  `password` varchar(255) DEFAULT NULL,
  `email` varchar(255) DEFAULT NULL,
  `createdAt` timestamp NULL DEFAULT NULL,
  `roleId` int(11) DEFAULT NULL,
  `activeUser` tinyint(4) NOT NULL,
  PRIMARY KEY (`id`),
  KEY `personId` (`personId`),
  KEY `roleId` (`roleId`),
  CONSTRAINT `users_ibfk_2` FOREIGN KEY (`personId`) REFERENCES `person` (`id`),
  CONSTRAINT `users_ibfk_3` FOREIGN KEY (`roleId`) REFERENCES `role` (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=2 DEFAULT CHARSET=utf8mb4;

-- Dumping data for table studentgradingsystem.users: ~1 rows (approximately)
DELETE FROM `users`;
/*!40000 ALTER TABLE `users` DISABLE KEYS */;
INSERT INTO `users` (`id`, `personId`, `username`, `password`, `email`, `createdAt`, `roleId`, `activeUser`) VALUES
	(1, 1, 'admin', 'admin', 'admin@gmail.com', '2021-05-12 22:37:32', 3, 1);
/*!40000 ALTER TABLE `users` ENABLE KEYS */;

/*!40101 SET SQL_MODE=IFNULL(@OLD_SQL_MODE, '') */;
/*!40014 SET FOREIGN_KEY_CHECKS=IFNULL(@OLD_FOREIGN_KEY_CHECKS, 1) */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40111 SET SQL_NOTES=IFNULL(@OLD_SQL_NOTES, 1) */;
