-- phpMyAdmin SQL Dump
-- version 5.1.0
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Apr 15, 2021 at 07:11 PM
-- Server version: 10.4.18-MariaDB
-- PHP Version: 8.0.3

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `studentgradingsystem`
--
CREATE DATABASE IF NOT EXISTS `studentgradingsystem` DEFAULT CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci;
USE `studentgradingsystem`;

-- --------------------------------------------------------

--
-- Table structure for table `academicprogram`
--

CREATE TABLE `academicprogram` (
  `id` int(11) NOT NULL,
  `name` varchar(255) DEFAULT NULL,
  `facaulty` varchar(255) DEFAULT NULL,
  `code` varchar(255) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- --------------------------------------------------------

--
-- Table structure for table `coursecomments`
--

CREATE TABLE `coursecomments` (
  `courseId` int(11) DEFAULT NULL,
  `timestamp` timestamp NULL DEFAULT NULL,
  `comment` text DEFAULT NULL,
  `lecturerId` int(11) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- --------------------------------------------------------

--
-- Table structure for table `courses`
--

CREATE TABLE `courses` (
  `id` int(11) NOT NULL,
  `name` varchar(255) DEFAULT NULL,
  `semester` varchar(255) DEFAULT NULL,
  `creditHours` int(11) DEFAULT NULL,
  `courseCode` varchar(255) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- --------------------------------------------------------

--
-- Table structure for table `institutions`
--

CREATE TABLE `institutions` (
  `id` int(11) NOT NULL,
  `name` varchar(255) DEFAULT NULL,
  `district` varchar(255) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- --------------------------------------------------------

--
-- Table structure for table `lecturer`
--

CREATE TABLE `lecturer` (
  `id` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- --------------------------------------------------------

--
-- Table structure for table `lecturercourses`
--

CREATE TABLE `lecturercourses` (
  `courseId` int(11) DEFAULT NULL,
  `lecturerId` int(11) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- --------------------------------------------------------

--
-- Table structure for table `loginstatus`
--

CREATE TABLE `loginstatus` (
  `id` int(11) NOT NULL,
  `lastLogin` date DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- --------------------------------------------------------

--
-- Table structure for table `person`
--

CREATE TABLE `person` (
  `id` int(11) NOT NULL,
  `firstname` varchar(255) DEFAULT NULL,
  `middlename` varchar(255) DEFAULT NULL,
  `lastname` varchar(255) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `person`
--

INSERT INTO `person` (`id`, `firstname`, `middlename`, `lastname`) VALUES
(1, 'Admin', 'Admin', 'Admin'),
(201745678, 'federico', NULL, 'Rosado'),
(777777777, 'Test', NULL, 'test'),
(2018219412, 'Miguel', NULL, 'Avila');

-- --------------------------------------------------------

--
-- Table structure for table `prerequisites`
--

CREATE TABLE `prerequisites` (
  `courseId` int(11) DEFAULT NULL,
  `prerequisite` int(11) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- --------------------------------------------------------

--
-- Table structure for table `programsequence`
--

CREATE TABLE `programsequence` (
  `id` int(11) NOT NULL,
  `code` varchar(255) DEFAULT NULL,
  `year` int(11) DEFAULT NULL,
  `academicProgramId` int(11) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- --------------------------------------------------------

--
-- Table structure for table `programsequencecourses`
--

CREATE TABLE `programsequencecourses` (
  `programSequenceId` int(11) DEFAULT NULL,
  `courseId` int(11) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- --------------------------------------------------------

--
-- Table structure for table `questions`
--

CREATE TABLE `questions` (
  `id` int(11) NOT NULL,
  `questions` varchar(255) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `questions`
--

INSERT INTO `questions` (`id`, `questions`) VALUES
(1, 'What is your favorite food? '),
(2, 'What is your hobby? '),
(3, 'What is you dog/cat name? ');

-- --------------------------------------------------------

--
-- Table structure for table `role`
--

CREATE TABLE `role` (
  `id` int(11) NOT NULL,
  `name` varchar(255) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `role`
--

INSERT INTO `role` (`id`, `name`) VALUES
(1, 'Student'),
(2, 'Lecture'),
(3, 'Admin');

-- --------------------------------------------------------

--
-- Table structure for table `securityquestions`
--

CREATE TABLE `securityquestions` (
  `userId` int(11) DEFAULT NULL,
  `questionId` int(11) DEFAULT NULL,
  `answer` varchar(255) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `securityquestions`
--

INSERT INTO `securityquestions` (`userId`, `questionId`, `answer`) VALUES
(2, 1, 'pizza'),
(2, 2, 'gamming'),
(2, 3, 'boyan'),
(3, 1, 'Unknown'),
(3, 2, 'Coding'),
(3, 3, 'Unknown'),
(4, 1, 'test@gmail.com'),
(4, 2, 'test@gmail.com'),
(4, 3, 'test@gmail.com');

-- --------------------------------------------------------

--
-- Table structure for table `student`
--

CREATE TABLE `student` (
  `userId` int(11) DEFAULT NULL,
  `code` int(11) DEFAULT NULL,
  `programSequenceId` int(11) DEFAULT NULL,
  `admissionYear` int(11) DEFAULT NULL,
  `advisorId` int(11) DEFAULT NULL,
  `institutionId` int(11) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- --------------------------------------------------------

--
-- Table structure for table `studentcourses`
--

CREATE TABLE `studentcourses` (
  `studentId` int(11) DEFAULT NULL,
  `courseId` int(11) DEFAULT NULL,
  `courseGrade` varchar(255) DEFAULT NULL,
  `courseRating` int(11) DEFAULT NULL,
  `isTransferred` tinyint(1) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- --------------------------------------------------------

--
-- Table structure for table `studentinstitutions`
--

CREATE TABLE `studentinstitutions` (
  `studentId` int(11) DEFAULT NULL,
  `institutionId` int(11) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- --------------------------------------------------------

--
-- Table structure for table `users`
--

CREATE TABLE `users` (
  `id` int(11) NOT NULL,
  `personId` int(11) DEFAULT NULL,
  `username` varchar(255) DEFAULT NULL,
  `password` varchar(255) DEFAULT NULL,
  `email` varchar(255) DEFAULT NULL,
  `createdAt` timestamp NULL DEFAULT NULL,
  `loginStatusId` int(11) DEFAULT NULL,
  `statusId` int(11) DEFAULT NULL,
  `roleId` int(11) DEFAULT NULL,
  `activeUser` tinyint(4) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `users`
--

INSERT INTO `users` (`id`, `personId`, `username`, `password`, `email`, `createdAt`, `loginStatusId`, `statusId`, `roleId`, `activeUser`) VALUES
(1, 1, 'Admin', 'Admin', 'Admin@test.com', '2021-04-15 16:02:27', NULL, NULL, 3, 1),
(2, 2018219412, 'mavila', 'test', 'mavila@yahoo.com', '2021-04-15 15:54:53', NULL, NULL, 1, 1),
(3, 201745678, 'federico', 'federico', 'federico@gmail.com', '2021-04-15 16:01:07', NULL, NULL, 1, 1),
(4, 777777777, 'test', 'test', 'test@gmail.com', '2021-04-15 16:01:07', NULL, NULL, 1, 1);

-- --------------------------------------------------------

--
-- Table structure for table `userstatus`
--

CREATE TABLE `userstatus` (
  `id` int(11) NOT NULL,
  `status` varchar(255) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `userstatus`
--

INSERT INTO `userstatus` (`id`, `status`) VALUES
(1, NULL),
(2, NULL),
(3, NULL),
(4, NULL),
(5, NULL),
(6, NULL);

--
-- Indexes for dumped tables
--

--
-- Indexes for table `academicprogram`
--
ALTER TABLE `academicprogram`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `coursecomments`
--
ALTER TABLE `coursecomments`
  ADD KEY `courseId` (`courseId`),
  ADD KEY `lecturerId` (`lecturerId`);

--
-- Indexes for table `courses`
--
ALTER TABLE `courses`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `institutions`
--
ALTER TABLE `institutions`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `lecturer`
--
ALTER TABLE `lecturer`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `lecturercourses`
--
ALTER TABLE `lecturercourses`
  ADD UNIQUE KEY `idx_lecturerCourses_courseId` (`courseId`),
  ADD UNIQUE KEY `idx_lecturerCourses_lecturerId` (`lecturerId`);

--
-- Indexes for table `loginstatus`
--
ALTER TABLE `loginstatus`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `person`
--
ALTER TABLE `person`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `prerequisites`
--
ALTER TABLE `prerequisites`
  ADD KEY `courseId` (`courseId`),
  ADD KEY `prerequisite` (`prerequisite`);

--
-- Indexes for table `programsequence`
--
ALTER TABLE `programsequence`
  ADD PRIMARY KEY (`id`),
  ADD KEY `idx_programSequence_academicProgramId` (`academicProgramId`);

--
-- Indexes for table `programsequencecourses`
--
ALTER TABLE `programsequencecourses`
  ADD KEY `programSequenceId` (`programSequenceId`),
  ADD KEY `courseId` (`courseId`);

--
-- Indexes for table `questions`
--
ALTER TABLE `questions`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `role`
--
ALTER TABLE `role`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `securityquestions`
--
ALTER TABLE `securityquestions`
  ADD KEY `userId` (`userId`),
  ADD KEY `questionId` (`questionId`);

--
-- Indexes for table `student`
--
ALTER TABLE `student`
  ADD KEY `userId` (`userId`),
  ADD KEY `student_id_1FK` (`institutionId`),
  ADD KEY `programSequenceId` (`programSequenceId`);

--
-- Indexes for table `studentcourses`
--
ALTER TABLE `studentcourses`
  ADD UNIQUE KEY `idx_studentCourses_courseId` (`courseId`),
  ADD KEY `studentId` (`studentId`);

--
-- Indexes for table `studentinstitutions`
--
ALTER TABLE `studentinstitutions`
  ADD UNIQUE KEY `idx_studentInstitutions_studentId_institutionId` (`studentId`,`institutionId`),
  ADD UNIQUE KEY `idx_studentInstitutions_institutionId` (`institutionId`);

--
-- Indexes for table `users`
--
ALTER TABLE `users`
  ADD PRIMARY KEY (`id`),
  ADD KEY `student_idFK` (`personId`),
  ADD KEY `loginStatusId` (`loginStatusId`),
  ADD KEY `statusId` (`statusId`),
  ADD KEY `roleId` (`roleId`);

--
-- Indexes for table `userstatus`
--
ALTER TABLE `userstatus`
  ADD PRIMARY KEY (`id`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `academicprogram`
--
ALTER TABLE `academicprogram`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT for table `courses`
--
ALTER TABLE `courses`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT for table `institutions`
--
ALTER TABLE `institutions`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT for table `lecturer`
--
ALTER TABLE `lecturer`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT for table `loginstatus`
--
ALTER TABLE `loginstatus`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT for table `person`
--
ALTER TABLE `person`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=2018219413;

--
-- AUTO_INCREMENT for table `programsequence`
--
ALTER TABLE `programsequence`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT for table `questions`
--
ALTER TABLE `questions`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=4;

--
-- AUTO_INCREMENT for table `role`
--
ALTER TABLE `role`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=4;

--
-- AUTO_INCREMENT for table `users`
--
ALTER TABLE `users`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=5;

--
-- AUTO_INCREMENT for table `userstatus`
--
ALTER TABLE `userstatus`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=7;

--
-- Constraints for dumped tables
--

--
-- Constraints for table `academicprogram`
--
ALTER TABLE `academicprogram`
  ADD CONSTRAINT `academicprogram_ibfk` FOREIGN KEY (`id`) REFERENCES `programsequence` (`academicProgramId`);

--
-- Constraints for table `coursecomments`
--
ALTER TABLE `coursecomments`
  ADD CONSTRAINT `coursecomments_ibfk_1` FOREIGN KEY (`courseId`) REFERENCES `courses` (`id`),
  ADD CONSTRAINT `coursecomments_ibfk_2` FOREIGN KEY (`lecturerId`) REFERENCES `lecturer` (`id`);

--
-- Constraints for table `courses`
--
ALTER TABLE `courses`
  ADD CONSTRAINT `courses_ibfk` FOREIGN KEY (`id`) REFERENCES `studentcourses` (`courseId`),
  ADD CONSTRAINT `courses_ibpk` FOREIGN KEY (`id`) REFERENCES `lecturercourses` (`courseId`);

--
-- Constraints for table `institutions`
--
ALTER TABLE `institutions`
  ADD CONSTRAINT `institutions_ibfk_1` FOREIGN KEY (`id`) REFERENCES `studentinstitutions` (`institutionId`);

--
-- Constraints for table `lecturer`
--
ALTER TABLE `lecturer`
  ADD CONSTRAINT `lecturer_ibfk` FOREIGN KEY (`id`) REFERENCES `lecturercourses` (`lecturerId`),
  ADD CONSTRAINT `lecturer_ibfk_1` FOREIGN KEY (`id`) REFERENCES `lecturercourses` (`lecturerId`),
  ADD CONSTRAINT `lecturer_ibfk_2` FOREIGN KEY (`id`) REFERENCES `lecturercourses` (`lecturerId`);

--
-- Constraints for table `prerequisites`
--
ALTER TABLE `prerequisites`
  ADD CONSTRAINT `prerequisites_ibfk_1` FOREIGN KEY (`courseId`) REFERENCES `courses` (`id`),
  ADD CONSTRAINT `prerequisites_ibfk_2` FOREIGN KEY (`prerequisite`) REFERENCES `courses` (`id`);

--
-- Constraints for table `programsequencecourses`
--
ALTER TABLE `programsequencecourses`
  ADD CONSTRAINT `programsequencecourses_ibfk_1` FOREIGN KEY (`programSequenceId`) REFERENCES `programsequence` (`id`),
  ADD CONSTRAINT `programsequencecourses_ibfk_2` FOREIGN KEY (`courseId`) REFERENCES `courses` (`id`),
  ADD CONSTRAINT `programsequencecourses_ibfk_3` FOREIGN KEY (`courseId`) REFERENCES `courses` (`id`);

--
-- Constraints for table `securityquestions`
--
ALTER TABLE `securityquestions`
  ADD CONSTRAINT `securityquestions_ibfk_1` FOREIGN KEY (`userId`) REFERENCES `users` (`id`),
  ADD CONSTRAINT `securityquestions_ibfk_2` FOREIGN KEY (`questionId`) REFERENCES `questions` (`id`);

--
-- Constraints for table `student`
--
ALTER TABLE `student`
  ADD CONSTRAINT `student_ibfk_1` FOREIGN KEY (`userId`) REFERENCES `users` (`id`),
  ADD CONSTRAINT `student_ibfk_2` FOREIGN KEY (`programSequenceId`) REFERENCES `programsequence` (`id`),
  ADD CONSTRAINT `student_id_1FK` FOREIGN KEY (`institutionId`) REFERENCES `studentinstitutions` (`studentId`);

--
-- Constraints for table `studentcourses`
--
ALTER TABLE `studentcourses`
  ADD CONSTRAINT `studentcourses_ibfk_1` FOREIGN KEY (`studentId`) REFERENCES `student` (`userId`);

--
-- Constraints for table `users`
--
ALTER TABLE `users`
  ADD CONSTRAINT `student_idFK` FOREIGN KEY (`personId`) REFERENCES `person` (`id`),
  ADD CONSTRAINT `users_ibfk_1` FOREIGN KEY (`loginStatusId`) REFERENCES `loginstatus` (`id`),
  ADD CONSTRAINT `users_ibfk_2` FOREIGN KEY (`statusId`) REFERENCES `userstatus` (`id`),
  ADD CONSTRAINT `users_ibfk_3` FOREIGN KEY (`roleId`) REFERENCES `role` (`id`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
