#include <iostream> 

#include <GL/glut.h>


void renderDisplayTest() {
	glClearColor(255, 255, 255, 1);
	glClear(GL_COLOR_BUFFER_BIT);
	//background
	glColor3ub(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2f(100, 80);
	glVertex2f(0, 80);
	glEnd();

	glColor3ub(124, 252, 0);
	glBegin(GL_POLYGON);
	glVertex2f(100, 90);
	glVertex2f(0, 90);
	glVertex2f(0, 93);
	glVertex2f(100, 93);
	glEnd();

	glColor3ub(135, 206, 235);
	glBegin(GL_POLYGON);
	glVertex2f(100, 90);
	glVertex2f(0, 90);
	glVertex2f(0, 0);
	glVertex2f(100, 0);
	glEnd();

	//badan rumah
	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(10, 60);
	glVertex2f(10, 90);
	glVertex2f(40, 90);
	glVertex2f(40, 60);
	glEnd();

	glColor3ub(244, 164, 96);
	glBegin(GL_POLYGON);
	glVertex2f(10, 60);
	glVertex2f(10, 90);
	glVertex2f(40, 90);
	glVertex2f(40, 60);
	glEnd();

	glColor3ub(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2f(10, 62);
	glVertex2f(40, 62);
	glEnd();

	glColor3ub(205, 133, 63);
	glBegin(GL_POLYGON);
	glVertex2f(10, 62);
	glVertex2f(40, 62);
	glVertex2f(40, 60);
	glVertex2f(10, 60);
	glEnd();

	glColor3ub(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2f(40, 90);
	glVertex2f(35, 93);
	glEnd();

	glColor3ub(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2f(10, 90);
	glVertex2f(5, 93);
	glEnd();

	glColor3ub(128, 128, 128);
	glBegin(GL_POLYGON);
	glVertex2f(39.9, 90.1);
	glVertex2f(34.9, 92.9);
	glVertex2f(5.1, 92.9);
	glVertex2f(10.1, 90.1);
	glEnd();

	//tangki
	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(53, 90);
	glVertex2f(57, 60);
	glVertex2f(59, 60);
	glVertex2f(55, 90);
	glEnd();

	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(66, 90);
	glVertex2f(62, 60);
	glVertex2f(64, 60);
	glVertex2f(68, 90);
	glEnd();

	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(57, 60);
	glVertex2f(64, 60);
	glVertex2f(64.5, 62);
	glVertex2f(56.5, 62);
	glEnd();

	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(55.5, 70);
	glVertex2f(65.5, 70);
	glVertex2f(65.5, 72);
	glVertex2f(55.5, 72);
	glEnd();

	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(54.5, 80);
	glVertex2f(66.5, 80);
	glVertex2f(67, 82);
	glVertex2f(54, 82);
	glEnd();

	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(57, 60);
	glVertex2f(56.5, 62);
	glVertex2f(65.5, 72);
	glVertex2f(65.5, 70);
	glEnd();

	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(65.5, 72);
	glVertex2f(65.5, 70);
	glVertex2f(54.5, 80);
	glVertex2f(54, 82);
	glEnd();

	glColor3ub(105, 105, 105);
	glBegin(GL_POLYGON);
	glVertex2f(53, 90);
	glVertex2f(57, 60);
	glVertex2f(59, 60);
	glVertex2f(55, 90);
	glEnd();

	glColor3ub(105, 105, 105);
	glBegin(GL_POLYGON);
	glVertex2f(66, 90);
	glVertex2f(62, 60);
	glVertex2f(64, 60);
	glVertex2f(68, 90);
	glEnd();

	glColor3ub(105, 105, 105);
	glBegin(GL_POLYGON);
	glVertex2f(57, 60);
	glVertex2f(64, 60);
	glVertex2f(64.5, 62);
	glVertex2f(56.5, 62);
	glEnd();

	glColor3ub(105, 105, 105);
	glBegin(GL_POLYGON);
	glVertex2f(55.5, 70);
	glVertex2f(65.5, 70);
	glVertex2f(65.5, 72);
	glVertex2f(55.5, 72);
	glEnd();

	glColor3ub(105, 105, 105);
	glBegin(GL_POLYGON);
	glVertex2f(54.5, 80);
	glVertex2f(66.5, 80);
	glVertex2f(67, 82);
	glVertex2f(54, 82);
	glEnd();

	glColor3ub(105, 105, 105);
	glBegin(GL_POLYGON);
	glVertex2f(57, 60);
	glVertex2f(56.5, 62);
	glVertex2f(65.5, 72);
	glVertex2f(65.5, 70);
	glEnd();

	glColor3ub(105, 105, 105);
	glBegin(GL_POLYGON);
	glVertex2f(65.5, 72);
	glVertex2f(65.5, 70);
	glVertex2f(54.5, 80);
	glVertex2f(54, 82);
	glEnd();

	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(58, 60);
	glVertex2f(58, 55);
	glVertex2f(59, 53);
	glVertex2f(62, 53);
	glVertex2f(63, 55);
	glVertex2f(63, 60);
	glEnd();

	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_STRIP);
	glVertex2f(59.5, 53);
	glVertex2f(59.5, 52);
	glVertex2f(61.5, 52);
	glVertex2f(61.5, 53);
	glEnd();

	glColor3ub(255, 140, 0);
	glBegin(GL_POLYGON);
	glVertex2f(58.1, 60);
	glVertex2f(58.1, 55);
	glVertex2f(59.1, 53);
	glVertex2f(61.9, 53);
	glVertex2f(62.9, 55);
	glVertex2f(62.9, 60);
	glEnd();

	glColor3ub(255, 140, 0);
	glBegin(GL_POLYGON);
	glVertex2f(59.6, 53);
	glVertex2f(59.6, 52);
	glVertex2f(61.4, 52);
	glVertex2f(61.4, 53);
	glEnd();

	//balkon
	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_STRIP);
	glVertex2f(23, 74);
	glVertex2f(23, 66);
	glVertex2f(27, 66);
	glVertex2f(27, 74);
	glEnd();

	glColor3ub(0, 255, 255);
	glBegin(GL_POLYGON);
	glVertex2f(23, 74);
	glVertex2f(23, 66);
	glVertex2f(27, 66);
	glVertex2f(27, 74);
	glEnd();

	glColor3ub(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2f(25, 66);
	glVertex2f(25, 74);
	glEnd();

	glColor3ub(255, 0, 0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(20, 74);
	glVertex2f(20, 71);
	glVertex2f(30, 71);
	glVertex2f(30, 74);
	glEnd();

	glColor3ub(255, 0, 0);
	glBegin(GL_LINES);
	glVertex2f(20.5, 74);
	glVertex2f(20.5, 71);
	glEnd();

	glColor3ub(255, 0, 0);
	glBegin(GL_LINES);
	glVertex2f(22, 74);
	glVertex2f(22, 71);
	glEnd();

	glColor3ub(255, 0, 0);
	glBegin(GL_LINES);
	glVertex2f(23.5, 74);
	glVertex2f(23.5, 71);
	glEnd();

	glColor3ub(255, 0, 0);
	glBegin(GL_LINES);
	glVertex2f(25, 74);
	glVertex2f(25, 71);
	glEnd();

	glColor3ub(255, 0, 0);
	glBegin(GL_LINES);
	glVertex2f(26.5, 74);
	glVertex2f(26.5, 71);
	glEnd();

	glColor3ub(255, 0, 0);
	glBegin(GL_LINES);
	glVertex2f(28, 74);
	glVertex2f(28, 71);
	glEnd();

	glColor3ub(255, 0, 0);
	glBegin(GL_LINES);
	glVertex2f(29.5, 74);
	glVertex2f(29.5, 71);
	glEnd();

	//pintu
	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_STRIP);
	glVertex2f(22, 90);
	glVertex2f(22, 78);
	glVertex2f(28, 78);
	glVertex2f(28, 90);
	glEnd();

	glColor3ub(184, 134, 11);
	glBegin(GL_POLYGON);
	glVertex2f(22.1, 90);
	glVertex2f(22.1, 78.1);
	glVertex2f(27.9, 78.1);
	glVertex2f(27.9, 90);
	glEnd();

	//jendela kiri
	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(12, 82);
	glVertex2f(12, 76);
	glVertex2f(19, 76);
	glVertex2f(19, 82);
	glEnd();

	glColor3ub(0, 255, 255);
	glBegin(GL_POLYGON);
	glVertex2f(12, 82);
	glVertex2f(12, 76);
	glVertex2f(19, 76);
	glVertex2f(19, 82);
	glEnd();

	glColor3ub(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2f(12, 79);
	glVertex2f(19, 79);
	glEnd();

	glColor3ub(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2f(15.5, 82);
	glVertex2f(15.5, 76);
	glEnd();

	//jendela kanan
	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(31, 82);
	glVertex2f(31, 76);
	glVertex2f(38, 76);
	glVertex2f(38, 82);
	glEnd();

	glColor3ub(0, 255, 255);
	glBegin(GL_POLYGON);
	glVertex2f(31, 82);
	glVertex2f(31, 76);
	glVertex2f(38, 76);
	glVertex2f(38, 82);
	glEnd();

	glColor3ub(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2f(31, 79);
	glVertex2f(38, 79);
	glEnd();

	glColor3ub(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2f(34.5, 82);
	glVertex2f(34.5, 76);
	glEnd();

	//gagang
	glPointSize(3);
	glColor3ub(0, 0, 0);
	glBegin(GL_POINTS);
	glVertex2f(27.5, 84);
	glEnd();

	//cerobong
	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_STRIP);
	glVertex2f(13, 55);
	glVertex2f(13, 46);
	glVertex2f(17, 46);
	glVertex2f(17, 52);
	glEnd();

	glColor3ub(139, 69, 19);
	glBegin(GL_POLYGON);
	glVertex2f(13, 55);
	glVertex2f(13, 48);
	glVertex2f(17, 48);
	glVertex2f(17, 52);
	glEnd();

	glColor3ub(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2f(13, 48);
	glVertex2f(17, 48);
	glEnd();

	glColor3ub(205, 133, 63);
	glBegin(GL_POLYGON);
	glVertex2f(13, 46);
	glVertex2f(13, 48);
	glVertex2f(17, 48);
	glVertex2f(17, 46);
	glEnd();

	//pagar
	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_STRIP);
	glVertex2f(43, 93);
	glVertex2f(43, 86);
	glVertex2f(42, 85);
	glVertex2f(41, 86);
	glVertex2f(41, 93);
	glEnd();

	glColor3ub(139, 69, 19);
	glBegin(GL_POLYGON);
	glVertex2f(43, 93);
	glVertex2f(43, 86);
	glVertex2f(42, 85);
	glVertex2f(41.1, 86);
	glVertex2f(41.1, 93);
	glEnd();

	glColor3ub(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2f(41, 86);
	glVertex2f(39, 86);
	glEnd();

	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_STRIP);
	glVertex2f(39, 93);
	glVertex2f(39, 86);
	glVertex2f(38, 85);
	glVertex2f(37, 86);
	glVertex2f(37, 93);
	glEnd();

	glColor3ub(139, 69, 19);
	glBegin(GL_POLYGON);
	glVertex2f(38.9, 93);
	glVertex2f(38.9, 86);
	glVertex2f(38, 85);
	glVertex2f(37.1, 86);
	glVertex2f(37.1, 93);
	glEnd();

	glColor3ub(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2f(37, 86);
	glVertex2f(35, 86);
	glEnd();

	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_STRIP);
	glVertex2f(35, 93);
	glVertex2f(35, 86);
	glVertex2f(34, 85);
	glVertex2f(33, 86);
	glVertex2f(33, 93);
	glEnd();

	glColor3ub(139, 69, 19);
	glBegin(GL_POLYGON);
	glVertex2f(35, 93);
	glVertex2f(35, 86);
	glVertex2f(34, 85);
	glVertex2f(33, 86);
	glVertex2f(33, 93);
	glEnd();

	glColor3ub(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2f(33, 86);
	glVertex2f(31, 86);
	glEnd();

	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_STRIP);
	glVertex2f(31, 93);
	glVertex2f(31, 86);
	glVertex2f(30, 85);
	glVertex2f(29, 86);
	glVertex2f(29, 93);
	glEnd();

	glColor3ub(139, 69, 19);
	glBegin(GL_POLYGON);
	glVertex2f(31, 93);
	glVertex2f(31, 86);
	glVertex2f(30, 85);
	glVertex2f(29, 86);
	glVertex2f(29, 93);
	glEnd();

	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_STRIP);
	glVertex2f(19, 93);
	glVertex2f(19, 86);
	glVertex2f(18, 85);
	glVertex2f(17, 86);
	glVertex2f(17, 93);
	glEnd();

	glColor3ub(139, 69, 19);
	glBegin(GL_POLYGON);
	glVertex2f(19, 93);
	glVertex2f(19, 86);
	glVertex2f(18, 85);
	glVertex2f(17, 86);
	glVertex2f(17, 93);
	glEnd();

	glColor3ub(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2f(17, 86);
	glVertex2f(15, 86);
	glEnd();

	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_STRIP);
	glVertex2f(15, 93);
	glVertex2f(15, 86);
	glVertex2f(14, 85);
	glVertex2f(13, 86);
	glVertex2f(13, 93);
	glEnd();

	glColor3ub(139, 69, 19);
	glBegin(GL_POLYGON);
	glVertex2f(15, 93);
	glVertex2f(15, 86);
	glVertex2f(14, 85);
	glVertex2f(13, 86);
	glVertex2f(13, 93);
	glEnd();

	glColor3ub(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2f(13, 86);
	glVertex2f(11, 86);
	glEnd();

	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_STRIP);
	glVertex2f(11, 93);
	glVertex2f(11, 86);
	glVertex2f(10, 85);
	glVertex2f(9, 86);
	glVertex2f(9, 93);
	glEnd();

	glColor3ub(139, 69, 19);
	glBegin(GL_POLYGON);
	glVertex2f(11, 93);
	glVertex2f(11, 86);
	glVertex2f(10, 85);
	glVertex2f(9, 86);
	glVertex2f(9, 93);
	glEnd();

	glColor3ub(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2f(9, 86);
	glVertex2f(7, 86);
	glEnd();

	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_STRIP);
	glVertex2f(7, 93);
	glVertex2f(7, 86);
	glVertex2f(6, 85);
	glVertex2f(5, 86);
	glVertex2f(5, 93);
	glEnd();

	glColor3ub(139, 69, 19);
	glBegin(GL_POLYGON);
	glVertex2f(7, 93);
	glVertex2f(7, 86);
	glVertex2f(6, 85);
	glVertex2f(5, 86);
	glVertex2f(5, 93);
	glEnd();

	//atap kiri
	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_STRIP);
	glVertex2f(25, 45);
	glVertex2f(0, 65);
	glVertex2f(3, 65);
	glVertex2f(25, 48);
	glEnd();

	glColor3ub(210, 105, 30);
	glBegin(GL_POLYGON);
	glVertex2f(25, 45);
	glVertex2f(0.1, 65);
	glVertex2f(2.9, 65);
	glVertex2f(25, 47.9);
	glEnd();

	//atap kanan
	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_STRIP);
	glVertex2f(25, 45);
	glVertex2f(50, 65);
	glVertex2f(47, 65);
	glVertex2f(25, 48);
	glEnd();

	glColor3ub(210, 105, 30);
	glBegin(GL_POLYGON);
	glVertex2f(25, 45);
	glVertex2f(49.9, 65);
	glVertex2f(47.1, 65);
	glVertex2f(25, 47.9);
	glEnd();

	//plafon
	glColor3ub(160, 82, 45);
	glBegin(GL_POLYGON);
	glVertex2f(10, 60);
	glVertex2f(40, 60);
	glVertex2f(25, 48);
	glEnd();

	//jurang
	glColor3ub(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2f(0, 93);
	glVertex2f(100, 93);
	glEnd();

	glColor3ub(0, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2f(0, 93);
	glVertex2f(100, 93);
	glVertex2f(100, 100);
	glVertex2f(0, 100);
	glEnd();

	//payung
	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(89.5, 75);
	glVertex2f(80, 80);
	glVertex2f(100, 80);
	glEnd();

	glColor3ub(220, 20, 60);
	glBegin(GL_POLYGON);
	glVertex2f(89.5, 75);
	glVertex2f(80, 80);
	glVertex2f(100, 80);
	glEnd();

	glColor3ub(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2f(89.5, 75);
	glVertex2f(82, 80);
	glEnd();

	glColor3ub(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2f(89.5, 75);
	glVertex2f(84, 80);
	glEnd();

	glColor3ub(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2f(89.5, 75);
	glVertex2f(86, 80);
	glEnd();

	glColor3ub(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2f(89.5, 75);
	glVertex2f(88, 80);
	glEnd();

	glColor3ub(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2f(89.5, 75);
	glVertex2f(90, 80);
	glEnd();

	glColor3ub(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2f(89.5, 75);
	glVertex2f(92, 80);
	glEnd();

	glColor3ub(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2f(89.5, 75);
	glVertex2f(94, 80);
	glEnd();

	glColor3ub(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2f(89.5, 75);
	glVertex2f(96, 80);
	glEnd();

	glColor3ub(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2f(89.5, 75);
	glVertex2f(98, 80);
	glEnd();

	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(90, 92);
	glVertex2f(89, 92);
	glVertex2f(89, 80);
	glVertex2f(90, 80);
	glEnd();

	glColor3ub(105, 105, 105);
	glBegin(GL_POLYGON);
	glVertex2f(90, 92);
	glVertex2f(89, 92);
	glVertex2f(89, 80);
	glVertex2f(90, 80);
	glEnd();

	//kursi
	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(93, 89);
	glVertex2f(95, 91);
	glVertex2f(98, 91);
	glVertex2f(96, 89);
	glEnd();

	glColor3ub(255, 140, 0);
	glBegin(GL_POLYGON);
	glVertex2f(93.1, 89.1);
	glVertex2f(95.1, 90.9);
	glVertex2f(97.9, 90.9);
	glVertex2f(95.9, 89.1);
	glEnd();

	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(98, 91);
	glVertex2f(96, 89);
	glVertex2f(97, 87);
	glVertex2f(99, 89);
	glEnd();

	glColor3ub(255, 140, 0);
	glBegin(GL_POLYGON);
	glVertex2f(98.1, 91);
	glVertex2f(96.1, 89);
	glVertex2f(97.1, 87);
	glVertex2f(98.9, 89);
	glEnd();

	glColor3ub(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2f(98, 91);
	glVertex2f(98, 92);
	glEnd();

	glColor3ub(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2f(95, 91);
	glVertex2f(95, 92);
	glEnd();

	glColor3ub(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2f(93, 89);
	glVertex2f(93, 91);
	glEnd();

	//heli
	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(20, 10);
	glVertex2f(20, 20);
	glVertex2f(30, 20);
	glVertex2f(32, 17);
	glVertex2f(32, 13);
	glVertex2f(30, 10);
	glEnd();

	glColor3ub(112, 128, 144);
	glBegin(GL_POLYGON);
	glVertex2f(20, 10);
	glVertex2f(20, 20);
	glVertex2f(30, 20);
	glVertex2f(32, 17);
	glVertex2f(32, 13);
	glVertex2f(30, 10);
	glEnd();

	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(26, 14);
	glVertex2f(26, 11);
	glVertex2f(30, 11);
	glVertex2f(31, 13);
	glVertex2f(31, 14);
	glEnd();

	glColor3ub(176, 196, 222);
	glBegin(GL_POLYGON);
	glVertex2f(26, 14);
	glVertex2f(26, 11);
	glVertex2f(30, 11);
	glVertex2f(31, 13);
	glVertex2f(31, 14);
	glEnd();

	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(21, 14);
	glVertex2f(21, 11);
	glVertex2f(25, 11);
	glVertex2f(25, 14);
	glEnd();

	glColor3ub(176, 196, 222);
	glBegin(GL_POLYGON);
	glVertex2f(21, 14);
	glVertex2f(21, 11);
	glVertex2f(25, 11);
	glVertex2f(25, 14);
	glEnd();

	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_STRIP);
	glVertex2f(20, 14.5);
	glVertex2f(10, 14.5);
	glVertex2f(10, 15.5);
	glVertex2f(20, 15.5);
	glEnd();

	glColor3ub(112, 128, 144);
	glBegin(GL_POLYGON);
	glVertex2f(20, 14.5);
	glVertex2f(10, 14.5);
	glVertex2f(10, 15.5);
	glVertex2f(20, 15.5);
	glEnd();

	glColor3ub(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2f(25, 10);
	glVertex2f(25, 9);
	glEnd();

	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(35, 10);
	glVertex2f(35, 8);
	glVertex2f(25, 9);
	glVertex2f(15, 10);
	glVertex2f(15, 8);
	glEnd();

	glColor3ub(192, 192, 192);
	glBegin(GL_POLYGON);
	glVertex2f(34.9, 9.9);
	glVertex2f(34.9, 8.1);
	glVertex2f(25.1, 9);
	glEnd();

	glColor3ub(192, 192, 192);
	glBegin(GL_POLYGON);
	glVertex2f(24.9, 9);
	glVertex2f(15.1, 9.9);
	glVertex2f(15.1, 8.1);
	glEnd();

	glColor3ub(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2f(22.5, 20);
	glVertex2f(22.5, 22);
	glVertex2f(27.5, 20);
	glVertex2f(27.5, 22);
	glEnd();

	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_STRIP);
	glVertex2f(19, 21);
	glVertex2f(21, 22);
	glVertex2f(29, 22);
	glVertex2f(31, 21);
	glEnd();

	glPointSize(1);
	glColor3ub(0, 0, 0);
	glBegin(GL_POINTS);
	glVertex2f(10.5, 15);
	glEnd();

	glColor3ub(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2f(12, 13);
	glVertex2f(9, 17);
	glEnd();

	glColor3ub(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2f(9, 13);
	glVertex2f(12, 17);
	glEnd();

	glColor3ub(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2f(12, 15);
	glVertex2f(9, 15);
	glEnd();

	glColor3ub(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2f(10.5, 13);
	glVertex2f(10.5, 17);
	glEnd();


	glFlush();
}



int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(640, 480);
	glutCreateWindow("Rumahku Bukan Rumahmu");
	glutDisplayFunc(renderDisplayTest);
	gluOrtho2D(0, 100, 100, 0);


	glutMainLoop();

	return 0;
}