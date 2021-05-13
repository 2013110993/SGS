-- phpMyAdmin SQL Dump
-- version 5.0.4
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: May 13, 2021 at 08:07 AM
-- Server version: 10.4.17-MariaDB
-- PHP Version: 8.0.1

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

-- --------------------------------------------------------

--
-- Table structure for table `academicprogram`
--

CREATE TABLE `academicprogram` (
  `id` varchar(255) NOT NULL,
  `name` varchar(255) DEFAULT NULL,
  `faculty` varchar(255) DEFAULT NULL,
  `code` varchar(255) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `academicprogram`
--

INSERT INTO `academicprogram` (`id`, `name`, `faculty`, `code`) VALUES
('AINT', 'Associate In Information Technology', 'FST', 'AINT'),
('AINT-1', 'Associate In Information Technology', 'FST', NULL),
('AINT-2', 'Associate In Information Technology', 'FST', NULL),
('AINT-3', 'Associate In Information Texh', 'FST', NULL),
('AINT3', 'Associate In information', 'FST', NULL);

-- --------------------------------------------------------

--
-- Table structure for table `coursecomments`
--

CREATE TABLE `coursecomments` (
  `courseid` varchar(11) NOT NULL,
  `timeStamp` timestamp NOT NULL DEFAULT current_timestamp() ON UPDATE current_timestamp(),
  `comment` text DEFAULT NULL,
  `lecturerid` int(11) DEFAULT NULL,
  `studentID` int(12) DEFAULT NULL,
  `courseRating` varchar(10) CHARACTER SET utf8 DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- --------------------------------------------------------

--
-- Table structure for table `courses`
--

CREATE TABLE `courses` (
  `id` varchar(11) NOT NULL,
  `name` varchar(255) DEFAULT NULL,
  `semester` varchar(255) DEFAULT NULL,
  `creditHour` int(11) DEFAULT NULL,
  `courseCode` varchar(11) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `courses`
--

INSERT INTO `courses` (`id`, `name`, `semester`, `creditHour`, `courseCode`) VALUES
('CMPS1131', 'Principles of Programming I', '1', 3, 'CMPS1131'),
('CMPS1134', 'Fundamentals of Computing', '1', 3, 'CMPS1134'),
('CMPS1232', 'Principles of Programming II', '2', 3, 'CMPS1232'),
('ENGL1014', 'College English I', '1', 3, 'ENGL1014'),
('MATH1151', 'Algebra', '1', 3, 'MATH1151'),
('MATH1201', 'Trigonometry', '1', 3, 'MATH1201'),
('PHIL1014', 'Ethics', '1', 3, 'PHIL1014');

-- --------------------------------------------------------

--
-- Table structure for table `lecturer`
--

CREATE TABLE `lecturer` (
  `id` int(11) NOT NULL,
  `name` varchar(50) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `lecturer`
--

INSERT INTO `lecturer` (`id`, `name`) VALUES
(2, 'Lecturer Lecturer');

-- --------------------------------------------------------

--
-- Table structure for table `lecturercourses`
--

CREATE TABLE `lecturercourses` (
  `id` varchar(255) NOT NULL,
  `courseID` varchar(11) DEFAULT NULL,
  `lecturerID` int(11) DEFAULT NULL,
  `Year` varchar(10) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `lecturercourses`
--

INSERT INTO `lecturercourses` (`id`, `courseID`, `lecturerID`, `Year`) VALUES
('cmps1134', 'cmps1134', 2, '2021-1'),
('MATH1151', 'MATH1151', 2, '2021-1'),
('MATH1201', 'MATH1201', 2, '2021-1'),
('ENGL1014', 'ENGL1014', 2, '2021-1'),
('PHIL1014', 'PHIL1014', 2, '2021-1'),
('CMPS1232', 'CMPS1232', 2, '2021-1');

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
(2, 'Lecturer', '', 'Lecturer');

-- --------------------------------------------------------

--
-- Table structure for table `prequisites`
--

CREATE TABLE `prequisites` (
  `id` varchar(255) NOT NULL,
  `prequisite` varchar(255) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `prequisites`
--

INSERT INTO `prequisites` (`id`, `prequisite`) VALUES
('CMPS1131', 'NONE'),
('CMPS1134', 'NONE'),
('CMPS1232', 'CMPS1131'),
('ENGL1014', 'NONE'),
('MATH1151', 'NONE'),
('MATH1201', 'NONE'),
('PHIL1014', 'NONE');

-- --------------------------------------------------------

--
-- Table structure for table `programsequence`
--

CREATE TABLE `programsequence` (
  `id` varchar(255) NOT NULL,
  `code` varchar(255) DEFAULT NULL,
  `pSYear` varchar(4) DEFAULT NULL,
  `academicProgramID` varchar(255) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `programsequence`
--

INSERT INTO `programsequence` (`id`, `code`, `pSYear`, `academicProgramID`) VALUES
('AINT', 'AINT', '2016', 'AINT'),
('AINT-1', 'AINT-1', '2019', 'AINT-1'),
('AINT-2', 'AINT-2', '2019', 'AINT-2'),
('AINT-3', 'AINT-3', '2021', 'AINT-3'),
('AINT3', 'AINT3', '2021', 'AINT3');

-- --------------------------------------------------------

--
-- Table structure for table `programsequencecourses`
--

CREATE TABLE `programsequencecourses` (
  `programSequenceid` varchar(255) NOT NULL,
  `courseID` varchar(255) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `programsequencecourses`
--

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
(1, ' What is your favorite food? '),
(2, ' What is your hobby? '),
(3, ' What is you dog/cat name? ');

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
  `userId` int(11) NOT NULL,
  `questionId` int(11) DEFAULT NULL,
  `answer` varchar(255) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `securityquestions`
--

INSERT INTO `securityquestions` (`userId`, `questionId`, `answer`) VALUES
(2, 1, 'pizza'),
(2, 2, 'pizza'),
(2, 3, 'pizza');

-- --------------------------------------------------------

--
-- Table structure for table `student`
--

CREATE TABLE `student` (
  `userid` int(11) NOT NULL,
  `id` int(11) DEFAULT NULL,
  `programSequenceid` varchar(255) DEFAULT NULL,
  `admissionYear` int(11) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- --------------------------------------------------------

--
-- Table structure for table `studentcourses`
--

CREATE TABLE `studentcourses` (
  `studentid` int(11) NOT NULL,
  `courseid` varchar(11) DEFAULT NULL,
  `courseGrade` varchar(11) DEFAULT NULL,
  `courseRating` varchar(11) DEFAULT NULL,
  `isTransferred` varchar(11) DEFAULT NULL
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
  `roleId` int(11) DEFAULT NULL,
  `activeUser` tinyint(4) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `users`
--

INSERT INTO `users` (`id`, `personId`, `username`, `password`, `email`, `createdAt`, `roleId`, `activeUser`) VALUES
(1, 1, 'admin', 'admin', 'admin@gmail.com', '2021-05-13 04:37:32', 3, 1),
(2, 2, 'lecturer', 'lecturer', 'lecturer@ub.edu.bz', '2021-05-13 05:56:28', 2, 1);

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
  ADD KEY `lecturerid` (`lecturerid`),
  ADD KEY `courseid` (`courseid`),
  ADD KEY `studentID` (`studentID`);

--
-- Indexes for table `courses`
--
ALTER TABLE `courses`
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
  ADD KEY `courseID` (`courseID`),
  ADD KEY `lecturerID` (`lecturerID`);

--
-- Indexes for table `person`
--
ALTER TABLE `person`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `prequisites`
--
ALTER TABLE `prequisites`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `programsequence`
--
ALTER TABLE `programsequence`
  ADD PRIMARY KEY (`id`),
  ADD KEY `academicProgramID` (`academicProgramID`);

--
-- Indexes for table `programsequencecourses`
--
ALTER TABLE `programsequencecourses`
  ADD KEY `programSequenceid` (`programSequenceid`),
  ADD KEY `courseID` (`courseID`);

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
  ADD KEY `questionId` (`questionId`),
  ADD KEY `userId` (`userId`);

--
-- Indexes for table `student`
--
ALTER TABLE `student`
  ADD PRIMARY KEY (`userid`),
  ADD KEY `programSequenceid` (`programSequenceid`);

--
-- Indexes for table `studentcourses`
--
ALTER TABLE `studentcourses`
  ADD KEY `courseid` (`courseid`),
  ADD KEY `studentcourses_ibfk_1` (`studentid`);

--
-- Indexes for table `users`
--
ALTER TABLE `users`
  ADD PRIMARY KEY (`id`),
  ADD KEY `personId` (`personId`),
  ADD KEY `roleId` (`roleId`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `lecturer`
--
ALTER TABLE `lecturer`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=3;

--
-- AUTO_INCREMENT for table `person`
--
ALTER TABLE `person`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=3;

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
-- AUTO_INCREMENT for table `student`
--
ALTER TABLE `student`
  MODIFY `userid` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT for table `users`
--
ALTER TABLE `users`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=3;

--
-- Constraints for dumped tables
--

--
-- Constraints for table `coursecomments`
--
ALTER TABLE `coursecomments`
  ADD CONSTRAINT `coursecomments_ibfk_1` FOREIGN KEY (`lecturerid`) REFERENCES `lecturer` (`id`),
  ADD CONSTRAINT `coursecomments_ibfk_2` FOREIGN KEY (`courseid`) REFERENCES `courses` (`id`),
  ADD CONSTRAINT `coursecomments_ibfk_3` FOREIGN KEY (`studentID`) REFERENCES `student` (`userid`);

--
-- Constraints for table `lecturer`
--
ALTER TABLE `lecturer`
  ADD CONSTRAINT `lecturer_ibfk_1` FOREIGN KEY (`id`) REFERENCES `users` (`id`);

--
-- Constraints for table `lecturercourses`
--
ALTER TABLE `lecturercourses`
  ADD CONSTRAINT `lecturercourses_ibfk_1` FOREIGN KEY (`courseID`) REFERENCES `courses` (`id`),
  ADD CONSTRAINT `lecturercourses_ibfk_2` FOREIGN KEY (`lecturerID`) REFERENCES `lecturer` (`id`);

--
-- Constraints for table `prequisites`
--
ALTER TABLE `prequisites`
  ADD CONSTRAINT `prequisites_ibfk_1` FOREIGN KEY (`id`) REFERENCES `courses` (`id`);

--
-- Constraints for table `programsequence`
--
ALTER TABLE `programsequence`
  ADD CONSTRAINT `programsequence_ibfk_1` FOREIGN KEY (`academicProgramID`) REFERENCES `academicprogram` (`id`);

--
-- Constraints for table `programsequencecourses`
--
ALTER TABLE `programsequencecourses`
  ADD CONSTRAINT `programsequencecourses_ibfk_1` FOREIGN KEY (`programSequenceid`) REFERENCES `programsequence` (`id`),
  ADD CONSTRAINT `programsequencecourses_ibfk_2` FOREIGN KEY (`courseID`) REFERENCES `courses` (`id`);

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
  ADD CONSTRAINT `student_ibfk_1` FOREIGN KEY (`programSequenceid`) REFERENCES `programsequence` (`id`),
  ADD CONSTRAINT `student_ibfk_3` FOREIGN KEY (`userid`) REFERENCES `users` (`id`);

--
-- Constraints for table `studentcourses`
--
ALTER TABLE `studentcourses`
  ADD CONSTRAINT `studentcourses_ibfk_1` FOREIGN KEY (`studentid`) REFERENCES `student` (`userid`),
  ADD CONSTRAINT `studentcourses_ibfk_2` FOREIGN KEY (`courseid`) REFERENCES `courses` (`id`);

--
-- Constraints for table `users`
--
ALTER TABLE `users`
  ADD CONSTRAINT `users_ibfk_2` FOREIGN KEY (`personId`) REFERENCES `person` (`id`),
  ADD CONSTRAINT `users_ibfk_3` FOREIGN KEY (`roleId`) REFERENCES `role` (`id`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
