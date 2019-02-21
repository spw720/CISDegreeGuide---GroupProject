-- MySQL dump 10.13  Distrib 8.0.15, for macos10.14 (x86_64)
--
-- Host: localhost    Database: classes
-- ------------------------------------------------------
-- Server version	8.0.15

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
 SET NAMES utf8mb4 ;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `core`
--

DROP TABLE IF EXISTS `core`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
 SET character_set_client = utf8mb4 ;
CREATE TABLE `core` (
  `subject` varchar(5) DEFAULT NULL,
  `num` int(11) DEFAULT NULL,
  `name` varchar(45) DEFAULT NULL,
  `term1` varchar(2) DEFAULT NULL,
  `term2` varchar(2) DEFAULT NULL,
  `term3` varchar(2) DEFAULT NULL,
  `prereq1` varchar(7) DEFAULT NULL,
  `prereq2` varchar(7) DEFAULT NULL,
  `prereq3` varchar(7) DEFAULT NULL,
  `division` varchar(5) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `core`
--

LOCK TABLES `core` WRITE;
/*!40000 ALTER TABLE `core` DISABLE KEYS */;
INSERT INTO `core` VALUES ('CIS',210,'Computer Science I','f','w',NULL,'M 112',NULL,NULL,'l'),('CIS',211,'Computer Science II','w','s',NULL,'CIS 210',NULL,NULL,'l'),('CIS',212,'Computer Science III','f','s',NULL,'CIS 211',NULL,NULL,'l'),('MATH',231,'Elem of Discrete Mathematics I','f','w','s','M 112',NULL,NULL,'l'),('MATH',232,'Elem  of Discrete Mathematics II','f','w','s','M 231',NULL,NULL,'l'),('CIS',313,'Intermediate Data Structures','f','w',NULL,'CIS 212','M 232',NULL,'u'),('CIS',314,'Computer Organization','f','w',NULL,'CIS 212','M 231',NULL,'u'),('CIS',315,'Intermediate Algorithms','w','s',NULL,'CIS 213',NULL,NULL,'u'),('CIS',330,'C/C++ and Unix','w','s',NULL,'CIS 314',NULL,NULL,'u'),('CIS',415,'Operating Systems','f','s',NULL,'CIS 313','CIS 330',NULL,'u'),('CIS',422,'Software Methodology I','f','s','w','CIS 313',NULL,NULL,'u'),('CIS',425,'Principles of Programming Languages','f','s',NULL,'CIS 315',NULL,NULL,'u');
/*!40000 ALTER TABLE `core` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2019-02-21 14:19:56
