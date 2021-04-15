use studentgradingsystem;

-- MySQL dump 10.13  Distrib 8.0.22, for macos10.15 (x86_64)
--
-- Host: 127.0.0.1    Database: testtest
-- ------------------------------------------------------
-- Server version	8.0.22

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!50503 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `academicProgram`
--

DROP TABLE IF EXISTS `academicProgram`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `academicProgram` (
  `id` int NOT NULL AUTO_INCREMENT,
  `name` varchar(255) DEFAULT NULL,
  `facaulty` varchar(255) DEFAULT NULL,
  `code` varchar(255) DEFAULT NULL,
  PRIMARY KEY (`id`),
  CONSTRAINT `academicprogram_ibfk` FOREIGN KEY (`id`) REFERENCES `programSequence` (`academicProgramId`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `academicProgram`
--

LOCK TABLES `academicProgram` WRITE;
/*!40000 ALTER TABLE `academicProgram` DISABLE KEYS */;
/*!40000 ALTER TABLE `academicProgram` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `courseComments`
--

DROP TABLE IF EXISTS `courseComments`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `courseComments` (
  `courseId` int DEFAULT NULL,
  `timestamp` timestamp NULL DEFAULT NULL,
  `comment` text,
  `lecturerId` int DEFAULT NULL,
  KEY `courseId` (`courseId`),
  KEY `lecturerId` (`lecturerId`),
  CONSTRAINT `coursecomments_ibfk_1` FOREIGN KEY (`courseId`) REFERENCES `courses` (`id`),
  CONSTRAINT `coursecomments_ibfk_2` FOREIGN KEY (`lecturerId`) REFERENCES `lecturer` (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `courseComments`
--

LOCK TABLES `courseComments` WRITE;
/*!40000 ALTER TABLE `courseComments` DISABLE KEYS */;
/*!40000 ALTER TABLE `courseComments` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `courses`
--

DROP TABLE IF EXISTS `courses`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `courses` (
  `id` int NOT NULL AUTO_INCREMENT,
  `name` varchar(255) DEFAULT NULL,
  `semester` varchar(255) DEFAULT NULL,
  `creditHours` int DEFAULT NULL,
  `courseCode` varchar(255) DEFAULT NULL,
  PRIMARY KEY (`id`),
  CONSTRAINT `courses_ibfk` FOREIGN KEY (`id`) REFERENCES `studentCourses` (`courseId`),
  CONSTRAINT `courses_ibpk` FOREIGN KEY (`id`) REFERENCES `lecturerCourses` (`courseId`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `courses`
--

LOCK TABLES `courses` WRITE;
/*!40000 ALTER TABLE `courses` DISABLE KEYS */;
/*!40000 ALTER TABLE `courses` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `institutions`
--

DROP TABLE IF EXISTS `institutions`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `institutions` (
  `id` int NOT NULL AUTO_INCREMENT,
  `name` varchar(255) DEFAULT NULL,
  `district` varchar(255) DEFAULT NULL,
  PRIMARY KEY (`id`),
  CONSTRAINT `institutions_ibfk_1` FOREIGN KEY (`id`) REFERENCES `studentInstitutions` (`institutionId`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `institutions`
--

LOCK TABLES `institutions` WRITE;
/*!40000 ALTER TABLE `institutions` DISABLE KEYS */;
/*!40000 ALTER TABLE `institutions` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `lecturer`
--

DROP TABLE IF EXISTS `lecturer`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `lecturer` (
  `id` int NOT NULL AUTO_INCREMENT,
  PRIMARY KEY (`id`),
  CONSTRAINT `lecturer_ibfk` FOREIGN KEY (`id`) REFERENCES `lecturerCourses` (`lecturerId`),
  CONSTRAINT `lecturer_ibfk_1` FOREIGN KEY (`id`) REFERENCES `lecturerCourses` (`lecturerId`),
  CONSTRAINT `lecturer_ibfk_2` FOREIGN KEY (`id`) REFERENCES `lecturerCourses` (`lecturerId`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `lecturer`
--

LOCK TABLES `lecturer` WRITE;
/*!40000 ALTER TABLE `lecturer` DISABLE KEYS */;
/*!40000 ALTER TABLE `lecturer` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `lecturerCourses`
--

DROP TABLE IF EXISTS `lecturerCourses`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `lecturerCourses` (
  `courseId` int DEFAULT NULL,
  `lecturerId` int DEFAULT NULL,
  UNIQUE KEY `idx_lecturerCourses_courseId` (`courseId`),
  UNIQUE KEY `idx_lecturerCourses_lecturerId` (`lecturerId`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `lecturerCourses`
--

LOCK TABLES `lecturerCourses` WRITE;
/*!40000 ALTER TABLE `lecturerCourses` DISABLE KEYS */;
/*!40000 ALTER TABLE `lecturerCourses` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `loginStatus`
--

DROP TABLE IF EXISTS `loginStatus`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `loginStatus` (
  `id` int NOT NULL AUTO_INCREMENT,
  `lastLogin` date DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `loginStatus`
--

LOCK TABLES `loginStatus` WRITE;
/*!40000 ALTER TABLE `loginStatus` DISABLE KEYS */;
/*!40000 ALTER TABLE `loginStatus` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `person`
--

DROP TABLE IF EXISTS `person`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `person` (
  `id` int NOT NULL AUTO_INCREMENT,
  `firstname` varchar(255) DEFAULT NULL,
  `middlename` varchar(255) DEFAULT NULL,
  `lastname` varchar(255) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `person`
--

LOCK TABLES `person` WRITE;
/*!40000 ALTER TABLE `person` DISABLE KEYS */;
/*!40000 ALTER TABLE `person` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `prerequisites`
--

DROP TABLE IF EXISTS `prerequisites`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `prerequisites` (
  `courseId` int DEFAULT NULL,
  `prerequisite` int DEFAULT NULL,
  KEY `courseId` (`courseId`),
  KEY `prerequisite` (`prerequisite`),
  CONSTRAINT `prerequisites_ibfk_1` FOREIGN KEY (`courseId`) REFERENCES `courses` (`id`),
  CONSTRAINT `prerequisites_ibfk_2` FOREIGN KEY (`prerequisite`) REFERENCES `courses` (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `prerequisites`
--

LOCK TABLES `prerequisites` WRITE;
/*!40000 ALTER TABLE `prerequisites` DISABLE KEYS */;
/*!40000 ALTER TABLE `prerequisites` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `programSequence`
--

DROP TABLE IF EXISTS `programSequence`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `programSequence` (
  `id` int NOT NULL AUTO_INCREMENT,
  `code` varchar(255) DEFAULT NULL,
  `year` int DEFAULT NULL,
  `academicProgramId` int DEFAULT NULL,
  PRIMARY KEY (`id`),
  KEY `idx_programSequence_academicProgramId` (`academicProgramId`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `programSequence`
--

LOCK TABLES `programSequence` WRITE;
/*!40000 ALTER TABLE `programSequence` DISABLE KEYS */;
/*!40000 ALTER TABLE `programSequence` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `programSequenceCourses`
--

DROP TABLE IF EXISTS `programSequenceCourses`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `programSequenceCourses` (
  `programSequenceId` int DEFAULT NULL,
  `courseId` int DEFAULT NULL,
  KEY `programSequenceId` (`programSequenceId`),
  KEY `courseId` (`courseId`),
  CONSTRAINT `programsequencecourses_ibfk_1` FOREIGN KEY (`programSequenceId`) REFERENCES `programSequence` (`id`),
  CONSTRAINT `programsequencecourses_ibfk_2` FOREIGN KEY (`courseId`) REFERENCES `courses` (`id`),
  CONSTRAINT `programsequencecourses_ibfk_3` FOREIGN KEY (`courseId`) REFERENCES `courses` (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `programSequenceCourses`
--

LOCK TABLES `programSequenceCourses` WRITE;
/*!40000 ALTER TABLE `programSequenceCourses` DISABLE KEYS */;
/*!40000 ALTER TABLE `programSequenceCourses` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `questions`
--

DROP TABLE IF EXISTS `questions`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `questions` (
  `id` int NOT NULL AUTO_INCREMENT,
  `quetions` varchar(255) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `questions`
--

LOCK TABLES `questions` WRITE;
/*!40000 ALTER TABLE `questions` DISABLE KEYS */;
/*!40000 ALTER TABLE `questions` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `role`
--

DROP TABLE IF EXISTS `role`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `role` (
  `id` int NOT NULL AUTO_INCREMENT,
  `name` varchar(255) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `role`
--

LOCK TABLES `role` WRITE;
/*!40000 ALTER TABLE `role` DISABLE KEYS */;
/*!40000 ALTER TABLE `role` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `securityQuestions`
--

DROP TABLE IF EXISTS `securityQuestions`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `securityQuestions` (
  `userId` int DEFAULT NULL,
  `quetionId` int DEFAULT NULL,
  `answer` varchar(255) DEFAULT NULL,
  KEY `userId` (`userId`),
  KEY `quetionId` (`quetionId`),
  CONSTRAINT `securityquestions_ibfk_1` FOREIGN KEY (`userId`) REFERENCES `users` (`id`),
  CONSTRAINT `securityquestions_ibfk_2` FOREIGN KEY (`quetionId`) REFERENCES `questions` (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `securityQuestions`
--

LOCK TABLES `securityQuestions` WRITE;
/*!40000 ALTER TABLE `securityQuestions` DISABLE KEYS */;
/*!40000 ALTER TABLE `securityQuestions` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `student`
--

DROP TABLE IF EXISTS `student`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `student` (
  `userId` int DEFAULT NULL,
  `code` int DEFAULT NULL,
  `programSequenceId` int DEFAULT NULL,
  `admissionYear` int DEFAULT NULL,
  `advisorId` int DEFAULT NULL,
  `institutionId` int DEFAULT NULL,
  KEY `userId` (`userId`),
  KEY `student_id_1FK` (`institutionId`),
  KEY `programSequenceId` (`programSequenceId`),
  CONSTRAINT `student_ibfk_1` FOREIGN KEY (`userId`) REFERENCES `users` (`id`),
  CONSTRAINT `student_ibfk_2` FOREIGN KEY (`programSequenceId`) REFERENCES `programSequence` (`id`),
  CONSTRAINT `student_id_1FK` FOREIGN KEY (`institutionId`) REFERENCES `studentInstitutions` (`studentId`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `student`
--

LOCK TABLES `student` WRITE;
/*!40000 ALTER TABLE `student` DISABLE KEYS */;
/*!40000 ALTER TABLE `student` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `studentCourses`
--

DROP TABLE IF EXISTS `studentCourses`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `studentCourses` (
  `studentId` int DEFAULT NULL,
  `courseId` int DEFAULT NULL,
  `courseGrade` varchar(255) DEFAULT NULL,
  `courseRating` int DEFAULT NULL,
  `isTransferred` tinyint(1) DEFAULT NULL,
  UNIQUE KEY `idx_studentCourses_courseId` (`courseId`),
  KEY `studentId` (`studentId`),
  CONSTRAINT `studentcourses_ibfk_1` FOREIGN KEY (`studentId`) REFERENCES `student` (`userId`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `studentCourses`
--

LOCK TABLES `studentCourses` WRITE;
/*!40000 ALTER TABLE `studentCourses` DISABLE KEYS */;
/*!40000 ALTER TABLE `studentCourses` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `studentInstitutions`
--

DROP TABLE IF EXISTS `studentInstitutions`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `studentInstitutions` (
  `studentId` int DEFAULT NULL,
  `institutionId` int DEFAULT NULL,
  UNIQUE KEY `idx_studentInstitutions_studentId_institutionId` (`studentId`,`institutionId`),
  UNIQUE KEY `idx_studentInstitutions_institutionId` (`institutionId`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `studentInstitutions`
--

LOCK TABLES `studentInstitutions` WRITE;
/*!40000 ALTER TABLE `studentInstitutions` DISABLE KEYS */;
/*!40000 ALTER TABLE `studentInstitutions` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `users`
--

DROP TABLE IF EXISTS `users`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `users` (
  `id` int NOT NULL AUTO_INCREMENT,
  `personId` int DEFAULT NULL,
  `username` varchar(255) DEFAULT NULL,
  `password` varchar(255) DEFAULT NULL,
  `email` varchar(255) DEFAULT NULL,
  `createdAt` timestamp NULL DEFAULT NULL,
  `loginStatusId` int DEFAULT NULL,
  `statusId` int DEFAULT NULL,
  `roleId` int DEFAULT NULL,
  PRIMARY KEY (`id`),
  KEY `student_idFK` (`personId`),
  KEY `loginStatusId` (`loginStatusId`),
  KEY `statusId` (`statusId`),
  KEY `roleId` (`roleId`),
  CONSTRAINT `lecturer_idFK` FOREIGN KEY (`id`) REFERENCES `lecturer` (`id`),
  CONSTRAINT `student_idFK` FOREIGN KEY (`personId`) REFERENCES `person` (`id`),
  CONSTRAINT `users_ibfk_1` FOREIGN KEY (`loginStatusId`) REFERENCES `loginStatus` (`id`),
  CONSTRAINT `users_ibfk_2` FOREIGN KEY (`statusId`) REFERENCES `userStatus` (`id`),
  CONSTRAINT `users_ibfk_3` FOREIGN KEY (`roleId`) REFERENCES `role` (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `users`
--

LOCK TABLES `users` WRITE;
/*!40000 ALTER TABLE `users` DISABLE KEYS */;
/*!40000 ALTER TABLE `users` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `userStatus`
--

DROP TABLE IF EXISTS `userStatus`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `userStatus` (
  `id` int NOT NULL AUTO_INCREMENT,
  `status` varchar(255) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `userStatus`
--

LOCK TABLES `userStatus` WRITE;
/*!40000 ALTER TABLE `userStatus` DISABLE KEYS */;
/*!40000 ALTER TABLE `userStatus` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2021-04-12 15:40:58
