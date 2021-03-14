#include <windows.h>
#include <stdio.h>
#include <glut.h>
#include <gl.h>
#include <glu.h>
#include <glaux.h>

int myEsfera()
{
	int indice;
	indice = glGenLists(1);
	glNewList(indice, GL_COMPILE);
	glBegin(GL_TRIANGLES);
	glNormal3f(-0.0247692f, 0.987385f, -0.156387f);
	glTexCoord2f(0.0250000f, 1.00000f);
	glVertex3f(0.00100000f, 1.00100f, -0.00100000f);
	glNormal3f(-0.0567020f, 0.931997f, -0.358003f);
	glTexCoord2f(-5.96046e-008f, 0.900000f);
	glVertex3f(0.000999987f, 0.952057f, -0.310017f);
	glNormal3f(-0.118514f, 0.940755f, -0.317702f);
	glTexCoord2f(0.0500000f, 0.900000f);
	glVertex3f(-0.0944915f, 0.952057f, -0.294893f);
	// Polygon # 1
	glNormal3f(-0.0718830f, 0.987385f, -0.141078f);
	glTexCoord2f(0.0750000f, 1.00000f);
	glVertex3f(0.00100000f, 1.00100f, -0.00100000f);
	glNormal3f(-0.118514f, 0.940755f, -0.317702f);
	glTexCoord2f(0.0500000f, 0.900000f);
	glVertex3f(-0.0944915f, 0.952057f, -0.294893f);
	glNormal3f(-0.210889f, 0.940755f, -0.265530f);
	glTexCoord2f(0.100000f, 0.900000f);
	glVertex3f(-0.180636f, 0.952057f, -0.251000f);
	// Polygon # 2
	glNormal3f(-0.111960f, 0.987385f, -0.111960f);
	glTexCoord2f(0.125000f, 1.00000f);
	glVertex3f(0.00100000f, 1.00100f, -0.00100000f);
	glNormal3f(-0.210889f, 0.940755f, -0.265530f);
	glTexCoord2f(0.100000f, 0.900000f);
	glVertex3f(-0.180636f, 0.952057f, -0.251000f);
	glNormal3f(-0.282620f, 0.940755f, -0.187365f);
	glTexCoord2f(0.150000f, 0.900000f);
	glVertex3f(-0.249000f, 0.952057f, -0.182636f);
	// Polygon # 3
	glNormal3f(-0.141078f, 0.987385f, -0.0718830f);
	glTexCoord2f(0.175000f, 1.00000f);
	glVertex3f(0.00100000f, 1.00100f, -0.00100000f);
	glNormal3f(-0.282620f, 0.940755f, -0.187365f);
	glTexCoord2f(0.150000f, 0.900000f);
	glVertex3f(-0.249000f, 0.952057f, -0.182636f);
	glNormal3f(-0.326687f, 0.940755f, -0.0908606f);
	glTexCoord2f(0.200000f, 0.900000f);
	glVertex3f(-0.292893f, 0.952057f, -0.0964915f);
	// Polygon # 4
	glNormal3f(-0.156387f, 0.987385f, -0.0247692f);
	glTexCoord2f(0.225000f, 1.00000f);
	glVertex3f(0.00100000f, 1.00100f, -0.00100000f);
	glNormal3f(-0.326687f, 0.940755f, -0.0908606f);
	glTexCoord2f(0.200000f, 0.900000f);
	glVertex3f(-0.292893f, 0.952057f, -0.0964915f);
	glNormal3f(-0.338775f, 0.940755f, 0.0145383f);
	glTexCoord2f(0.250000f, 0.900000f);
	glVertex3f(-0.308017f, 0.952057f, -0.000999973f);
	// Polygon # 5
	glNormal3f(-0.156387f, 0.987385f, 0.0247692f);
	glTexCoord2f(0.275000f, 1.00000f);
	glVertex3f(0.00100000f, 1.00100f, -0.00100000f);
	glNormal3f(-0.338775f, 0.940755f, 0.0145383f);
	glTexCoord2f(0.250000f, 0.900000f);
	glVertex3f(-0.308017f, 0.952057f, -0.000999973f);
	glNormal3f(-0.317702f, 0.940755f, 0.118514f);
	glTexCoord2f(0.300000f, 0.900000f);
	glVertex3f(-0.292893f, 0.952057f, 0.0944915f);
	// Polygon # 6
	glNormal3f(-0.141078f, 0.987385f, 0.0718831f);
	glTexCoord2f(0.325000f, 1.00000f);
	glVertex3f(0.00100000f, 1.00100f, -0.00100000f);
	glNormal3f(-0.317702f, 0.940755f, 0.118514f);
	glTexCoord2f(0.300000f, 0.900000f);
	glVertex3f(-0.292893f, 0.952057f, 0.0944915f);
	glNormal3f(-0.265530f, 0.940755f, 0.210889f);
	glTexCoord2f(0.350000f, 0.900000f);
	glVertex3f(-0.249000f, 0.952057f, 0.180636f);
	// Polygon # 7
	glNormal3f(-0.111960f, 0.987385f, 0.111960f);
	glTexCoord2f(0.375000f, 1.00000f);
	glVertex3f(0.00100000f, 1.00100f, -0.00100000f);
	glNormal3f(-0.265530f, 0.940755f, 0.210889f);
	glTexCoord2f(0.350000f, 0.900000f);
	glVertex3f(-0.249000f, 0.952057f, 0.180636f);
	glNormal3f(-0.187365f, 0.940755f, 0.282620f);
	glTexCoord2f(0.400000f, 0.900000f);
	glVertex3f(-0.180636f, 0.952057f, 0.249000f);
	// Polygon # 8
	glNormal3f(-0.0718830f, 0.987385f, 0.141078f);
	glTexCoord2f(0.425000f, 1.00000f);
	glVertex3f(0.00100000f, 1.00100f, -0.00100000f);
	glNormal3f(-0.187365f, 0.940755f, 0.282620f);
	glTexCoord2f(0.400000f, 0.900000f);
	glVertex3f(-0.180636f, 0.952057f, 0.249000f);
	glNormal3f(-0.0908606f, 0.940755f, 0.326687f);
	glTexCoord2f(0.450000f, 0.900000f);
	glVertex3f(-0.0944915f, 0.952057f, 0.292893f);
	// Polygon # 9
	glNormal3f(-0.0247692f, 0.987385f, 0.156387f);
	glTexCoord2f(0.475000f, 1.00000f);
	glVertex3f(0.00100000f, 1.00100f, -0.00100000f);
	glNormal3f(-0.0908606f, 0.940755f, 0.326687f);
	glTexCoord2f(0.450000f, 0.900000f);
	glVertex3f(-0.0944915f, 0.952057f, 0.292893f);
	glNormal3f(0.0145383f, 0.940755f, 0.338775f);
	glTexCoord2f(0.500000f, 0.900000f);
	glVertex3f(0.00100004f, 0.952057f, 0.308017f);
	// Polygon # 10
	glNormal3f(0.0247692f, 0.987385f, 0.156387f);
	glTexCoord2f(0.525000f, 1.00000f);
	glVertex3f(0.00100000f, 1.00100f, -0.00100000f);
	glNormal3f(0.0145383f, 0.940755f, 0.338775f);
	glTexCoord2f(0.500000f, 0.900000f);
	glVertex3f(0.00100004f, 0.952057f, 0.308017f);
	glNormal3f(0.118514f, 0.940755f, 0.317702f);
	glTexCoord2f(0.550000f, 0.900000f);
	glVertex3f(0.0964915f, 0.952057f, 0.292893f);
	// Polygon # 11
	glNormal3f(0.0718830f, 0.987385f, 0.141078f);
	glTexCoord2f(0.575000f, 1.00000f);
	glVertex3f(0.00100000f, 1.00100f, -0.00100000f);
	glNormal3f(0.118514f, 0.940755f, 0.317702f);
	glTexCoord2f(0.550000f, 0.900000f);
	glVertex3f(0.0964915f, 0.952057f, 0.292893f);
	glNormal3f(0.210889f, 0.940755f, 0.265530f);
	glTexCoord2f(0.600000f, 0.900000f);
	glVertex3f(0.182636f, 0.952057f, 0.249000f);
	// Polygon # 12
	glNormal3f(0.111960f, 0.987385f, 0.111960f);
	glTexCoord2f(0.625000f, 1.00000f);
	glVertex3f(0.00100000f, 1.00100f, -0.00100000f);
	glNormal3f(0.210889f, 0.940755f, 0.265530f);
	glTexCoord2f(0.600000f, 0.900000f);
	glVertex3f(0.182636f, 0.952057f, 0.249000f);
	glNormal3f(0.282620f, 0.940755f, 0.187365f);
	glTexCoord2f(0.650000f, 0.900000f);
	glVertex3f(0.251000f, 0.952057f, 0.180636f);
	// Polygon # 13
	glNormal3f(0.141078f, 0.987385f, 0.0718830f);
	glTexCoord2f(0.675000f, 1.00000f);
	glVertex3f(0.00100000f, 1.00100f, -0.00100000f);
	glNormal3f(0.282620f, 0.940755f, 0.187365f);
	glTexCoord2f(0.650000f, 0.900000f);
	glVertex3f(0.251000f, 0.952057f, 0.180636f);
	glNormal3f(0.326687f, 0.940755f, 0.0908606f);
	glTexCoord2f(0.700000f, 0.900000f);
	glVertex3f(0.294893f, 0.952057f, 0.0944915f);
	// Polygon # 14
	glNormal3f(0.156387f, 0.987385f, 0.0247692f);
	glTexCoord2f(0.725000f, 1.00000f);
	glVertex3f(0.00100000f, 1.00100f, -0.00100000f);
	glNormal3f(0.326687f, 0.940755f, 0.0908606f);
	glTexCoord2f(0.700000f, 0.900000f);
	glVertex3f(0.294893f, 0.952057f, 0.0944915f);
	glNormal3f(0.338775f, 0.940755f, -0.0145383f);
	glTexCoord2f(0.750000f, 0.900000f);
	glVertex3f(0.310017f, 0.952057f, -0.00100005f);
	// Polygon # 15
	glNormal3f(0.156387f, 0.987385f, -0.0247692f);
	glTexCoord2f(0.775000f, 1.00000f);
	glVertex3f(0.00100000f, 1.00100f, -0.00100000f);
	glNormal3f(0.338775f, 0.940755f, -0.0145383f);
	glTexCoord2f(0.750000f, 0.900000f);
	glVertex3f(0.310017f, 0.952057f, -0.00100005f);
	glNormal3f(0.317702f, 0.940755f, -0.118514f);
	glTexCoord2f(0.800000f, 0.900000f);
	glVertex3f(0.294893f, 0.952057f, -0.0964916f);
	// Polygon # 16
	glNormal3f(0.141078f, 0.987385f, -0.0718831f);
	glTexCoord2f(0.825000f, 1.00000f);
	glVertex3f(0.00100000f, 1.00100f, -0.00100000f);
	glNormal3f(0.317702f, 0.940755f, -0.118514f);
	glTexCoord2f(0.800000f, 0.900000f);
	glVertex3f(0.294893f, 0.952057f, -0.0964916f);
	glNormal3f(0.265530f, 0.940755f, -0.210889f);
	glTexCoord2f(0.850000f, 0.900000f);
	glVertex3f(0.251000f, 0.952057f, -0.182636f);
	// Polygon # 17
	glNormal3f(0.111960f, 0.987385f, -0.111960f);
	glTexCoord2f(0.875000f, 1.00000f);
	glVertex3f(0.00100000f, 1.00100f, -0.00100000f);
	glNormal3f(0.265530f, 0.940755f, -0.210889f);
	glTexCoord2f(0.850000f, 0.900000f);
	glVertex3f(0.251000f, 0.952057f, -0.182636f);
	glNormal3f(0.187365f, 0.940755f, -0.282620f);
	glTexCoord2f(0.900000f, 0.900000f);
	glVertex3f(0.182636f, 0.952057f, -0.251000f);
	// Polygon # 18
	glNormal3f(0.0718830f, 0.987385f, -0.141078f);
	glTexCoord2f(0.925000f, 1.00000f);
	glVertex3f(0.00100000f, 1.00100f, -0.00100000f);
	glNormal3f(0.187365f, 0.940755f, -0.282620f);
	glTexCoord2f(0.900000f, 0.900000f);
	glVertex3f(0.182636f, 0.952057f, -0.251000f);
	glNormal3f(0.0908606f, 0.940755f, -0.326687f);
	glTexCoord2f(0.950000f, 0.900000f);
	glVertex3f(0.0964914f, 0.952057f, -0.294893f);
	// Polygon # 19
	glNormal3f(0.0247692f, 0.987385f, -0.156387f);
	glTexCoord2f(0.975000f, 1.00000f);
	glVertex3f(0.00100000f, 1.00100f, -0.00100000f);
	glNormal3f(0.0908606f, 0.940755f, -0.326687f);
	glTexCoord2f(0.950000f, 0.900000f);
	glVertex3f(0.0964914f, 0.952057f, -0.294893f);
	glNormal3f(0.0247692f, 0.987385f, -0.156387f);
	glTexCoord2f(1.00000f, 0.900000f);
	glVertex3f(0.000999987f, 0.952057f, -0.310017f);
	// Polygon # 20
	glNormal3f(-0.0567020f, 0.931997f, -0.358003f);
	glTexCoord2f(-5.96046e-008f, 0.900000f);
	glVertex3f(0.000999987f, 0.952057f, -0.310017f);
	glNormal3f(-0.0991988f, 0.773232f, -0.626316f);
	glTexCoord2f(-5.96046e-008f, 0.800000f);
	glVertex3f(0.000999974f, 0.810017f, -0.588785f);
	glNormal3f(-0.187939f, 0.809169f, -0.556709f);
	glTexCoord2f(0.0500000f, 0.800000f);
	glVertex3f(-0.180636f, 0.810017f, -0.560017f);
	// Polygon # 21
	glNormal3f(-0.0567020f, 0.931997f, -0.358003f);
	glTexCoord2f(-5.96046e-008f, 0.900000f);
	glVertex3f(0.000999987f, 0.952057f, -0.310017f);
	glNormal3f(-0.187939f, 0.809169f, -0.556709f);
	glTexCoord2f(0.0500000f, 0.800000f);
	glVertex3f(-0.180636f, 0.810017f, -0.560017f);
	glNormal3f(-0.118514f, 0.940755f, -0.317702f);
	glTexCoord2f(0.0500000f, 0.900000f);
	glVertex3f(-0.0944915f, 0.952057f, -0.294893f);
	// Polygon # 22
	glNormal3f(-0.118514f, 0.940755f, -0.317702f);
	glTexCoord2f(0.0500000f, 0.900000f);
	glVertex3f(-0.0944915f, 0.952057f, -0.294893f);
	glNormal3f(-0.187939f, 0.809169f, -0.556709f);
	glTexCoord2f(0.0500000f, 0.800000f);
	glVertex3f(-0.180636f, 0.810017f, -0.560017f);
	glNormal3f(-0.350773f, 0.809169f, -0.471385f);
	glTexCoord2f(0.100000f, 0.800000f);
	glVertex3f(-0.344492f, 0.810017f, -0.476528f);
	// Polygon # 23
	glNormal3f(-0.118514f, 0.940755f, -0.317702f);
	glTexCoord2f(0.0500000f, 0.900000f);
	glVertex3f(-0.0944915f, 0.952057f, -0.294893f);
	glNormal3f(-0.350773f, 0.809169f, -0.471385f);
	glTexCoord2f(0.100000f, 0.800000f);
	glVertex3f(-0.344492f, 0.810017f, -0.476528f);
	glNormal3f(-0.210889f, 0.940755f, -0.265530f);
	glTexCoord2f(0.100000f, 0.900000f);
	glVertex3f(-0.180636f, 0.952057f, -0.251000f);
	// Polygon # 24
	glNormal3f(-0.210889f, 0.940755f, -0.265530f);
	glTexCoord2f(0.100000f, 0.900000f);
	glVertex3f(-0.180636f, 0.952057f, -0.251000f);
	glNormal3f(-0.350773f, 0.809169f, -0.471385f);
	glTexCoord2f(0.100000f, 0.800000f);
	glVertex3f(-0.344492f, 0.810017f, -0.476528f);
	glNormal3f(-0.479271f, 0.809169f, -0.339919f);
	glTexCoord2f(0.150000f, 0.800000f);
	glVertex3f(-0.474528f, 0.810017f, -0.346491f);
	// Polygon # 25
	glNormal3f(-0.210889f, 0.940755f, -0.265530f);
	glTexCoord2f(0.100000f, 0.900000f);
	glVertex3f(-0.180636f, 0.952057f, -0.251000f);
	glNormal3f(-0.479271f, 0.809169f, -0.339919f);
	glTexCoord2f(0.150000f, 0.800000f);
	glVertex3f(-0.474528f, 0.810017f, -0.346491f);
	glNormal3f(-0.282620f, 0.940755f, -0.187365f);
	glTexCoord2f(0.150000f, 0.900000f);
	glVertex3f(-0.249000f, 0.952057f, -0.182636f);
	// Polygon # 26
	glNormal3f(-0.282620f, 0.940755f, -0.187365f);
	glTexCoord2f(0.150000f, 0.900000f);
	glVertex3f(-0.249000f, 0.952057f, -0.182636f);
	glNormal3f(-0.479271f, 0.809169f, -0.339919f);
	glTexCoord2f(0.150000f, 0.800000f);
	glVertex3f(-0.474528f, 0.810017f, -0.346491f);
	glNormal3f(-0.560855f, 0.809169f, -0.175179f);
	glTexCoord2f(0.200000f, 0.800000f);
	glVertex3f(-0.558017f, 0.810017f, -0.182636f);
	// Polygon # 27
	glNormal3f(-0.282620f, 0.940755f, -0.187365f);
	glTexCoord2f(0.150000f, 0.900000f);
	glVertex3f(-0.249000f, 0.952057f, -0.182636f);
	glNormal3f(-0.560855f, 0.809169f, -0.175179f);
	glTexCoord2f(0.200000f, 0.800000f);
	glVertex3f(-0.558017f, 0.810017f, -0.182636f);
	glNormal3f(-0.326687f, 0.940755f, -0.0908606f);
	glTexCoord2f(0.200000f, 0.900000f);
	glVertex3f(-0.292893f, 0.952057f, -0.0964915f);
	// Polygon # 28
	glNormal3f(-0.326687f, 0.940755f, -0.0908606f);
	glTexCoord2f(0.200000f, 0.900000f);
	glVertex3f(-0.292893f, 0.952057f, -0.0964915f);
	glNormal3f(-0.560855f, 0.809169f, -0.175179f);
	glTexCoord2f(0.200000f, 0.800000f);
	glVertex3f(-0.558017f, 0.810017f, -0.182636f);
	glNormal3f(-0.587538f, 0.809169f, 0.00670815f);
	glTexCoord2f(0.250000f, 0.800000f);
	glVertex3f(-0.586785f, 0.810017f, -0.000999949f);
	// Polygon # 29
	glNormal3f(-0.326687f, 0.940755f, -0.0908606f);
	glTexCoord2f(0.200000f, 0.900000f);
	glVertex3f(-0.292893f, 0.952057f, -0.0964915f);
	glNormal3f(-0.587538f, 0.809169f, 0.00670815f);
	glTexCoord2f(0.250000f, 0.800000f);
	glVertex3f(-0.586785f, 0.810017f, -0.000999949f);
	glNormal3f(-0.338775f, 0.940755f, 0.0145383f);
	glTexCoord2f(0.250000f, 0.900000f);
	glVertex3f(-0.308017f, 0.952057f, -0.000999973f);
	// Polygon # 30
	glNormal3f(-0.338775f, 0.940755f, 0.0145383f);
	glTexCoord2f(0.250000f, 0.900000f);
	glVertex3f(-0.308017f, 0.952057f, -0.000999973f);
	glNormal3f(-0.587538f, 0.809169f, 0.00670815f);
	glTexCoord2f(0.250000f, 0.800000f);
	glVertex3f(-0.586785f, 0.810017f, -0.000999949f);
	glNormal3f(-0.556709f, 0.809169f, 0.187939f);
	glTexCoord2f(0.300000f, 0.800000f);
	glVertex3f(-0.558017f, 0.810017f, 0.180636f);
	// Polygon # 31
	glNormal3f(-0.338775f, 0.940755f, 0.0145383f);
	glTexCoord2f(0.250000f, 0.900000f);
	glVertex3f(-0.308017f, 0.952057f, -0.000999973f);
	glNormal3f(-0.556709f, 0.809169f, 0.187939f);
	glTexCoord2f(0.300000f, 0.800000f);
	glVertex3f(-0.558017f, 0.810017f, 0.180636f);
	glNormal3f(-0.317702f, 0.940755f, 0.118514f);
	glTexCoord2f(0.300000f, 0.900000f);
	glVertex3f(-0.292893f, 0.952057f, 0.0944915f);
	// Polygon # 32
	glNormal3f(-0.317702f, 0.940755f, 0.118514f);
	glTexCoord2f(0.300000f, 0.900000f);
	glVertex3f(-0.292893f, 0.952057f, 0.0944915f);
	glNormal3f(-0.556709f, 0.809169f, 0.187939f);
	glTexCoord2f(0.300000f, 0.800000f);
	glVertex3f(-0.558017f, 0.810017f, 0.180636f);
	glNormal3f(-0.471385f, 0.809169f, 0.350773f);
	glTexCoord2f(0.350000f, 0.800000f);
	glVertex3f(-0.474528f, 0.810017f, 0.344492f);
	// Polygon # 33
	glNormal3f(-0.317702f, 0.940755f, 0.118514f);
	glTexCoord2f(0.300000f, 0.900000f);
	glVertex3f(-0.292893f, 0.952057f, 0.0944915f);
	glNormal3f(-0.471385f, 0.809169f, 0.350773f);
	glTexCoord2f(0.350000f, 0.800000f);
	glVertex3f(-0.474528f, 0.810017f, 0.344492f);
	glNormal3f(-0.265530f, 0.940755f, 0.210889f);
	glTexCoord2f(0.350000f, 0.900000f);
	glVertex3f(-0.249000f, 0.952057f, 0.180636f);
	// Polygon # 34
	glNormal3f(-0.265530f, 0.940755f, 0.210889f);
	glTexCoord2f(0.350000f, 0.900000f);
	glVertex3f(-0.249000f, 0.952057f, 0.180636f);
	glNormal3f(-0.471385f, 0.809169f, 0.350773f);
	glTexCoord2f(0.350000f, 0.800000f);
	glVertex3f(-0.474528f, 0.810017f, 0.344492f);
	glNormal3f(-0.339919f, 0.809169f, 0.479271f);
	glTexCoord2f(0.400000f, 0.800000f);
	glVertex3f(-0.344491f, 0.810017f, 0.474528f);
	// Polygon # 35
	glNormal3f(-0.265530f, 0.940755f, 0.210889f);
	glTexCoord2f(0.350000f, 0.900000f);
	glVertex3f(-0.249000f, 0.952057f, 0.180636f);
	glNormal3f(-0.339919f, 0.809169f, 0.479271f);
	glTexCoord2f(0.400000f, 0.800000f);
	glVertex3f(-0.344491f, 0.810017f, 0.474528f);
	glNormal3f(-0.187365f, 0.940755f, 0.282620f);
	glTexCoord2f(0.400000f, 0.900000f);
	glVertex3f(-0.180636f, 0.952057f, 0.249000f);
	// Polygon # 36
	glNormal3f(-0.187365f, 0.940755f, 0.282620f);
	glTexCoord2f(0.400000f, 0.900000f);
	glVertex3f(-0.180636f, 0.952057f, 0.249000f);
	glNormal3f(-0.339919f, 0.809169f, 0.479271f);
	glTexCoord2f(0.400000f, 0.800000f);
	glVertex3f(-0.344491f, 0.810017f, 0.474528f);
	glNormal3f(-0.175179f, 0.809169f, 0.560855f);
	glTexCoord2f(0.450000f, 0.800000f);
	glVertex3f(-0.180636f, 0.810017f, 0.558017f);
	// Polygon # 37
	glNormal3f(-0.187365f, 0.940755f, 0.282620f);
	glTexCoord2f(0.400000f, 0.900000f);
	glVertex3f(-0.180636f, 0.952057f, 0.249000f);
	glNormal3f(-0.175179f, 0.809169f, 0.560855f);
	glTexCoord2f(0.450000f, 0.800000f);
	glVertex3f(-0.180636f, 0.810017f, 0.558017f);
	glNormal3f(-0.0908606f, 0.940755f, 0.326687f);
	glTexCoord2f(0.450000f, 0.900000f);
	glVertex3f(-0.0944915f, 0.952057f, 0.292893f);
	// Polygon # 38
	glNormal3f(-0.0908606f, 0.940755f, 0.326687f);
	glTexCoord2f(0.450000f, 0.900000f);
	glVertex3f(-0.0944915f, 0.952057f, 0.292893f);
	glNormal3f(-0.175179f, 0.809169f, 0.560855f);
	glTexCoord2f(0.450000f, 0.800000f);
	glVertex3f(-0.180636f, 0.810017f, 0.558017f);
	glNormal3f(0.00670814f, 0.809169f, 0.587538f);
	glTexCoord2f(0.500000f, 0.800000f);
	glVertex3f(0.00100008f, 0.810017f, 0.586785f);
	// Polygon # 39
	glNormal3f(-0.0908606f, 0.940755f, 0.326687f);
	glTexCoord2f(0.450000f, 0.900000f);
	glVertex3f(-0.0944915f, 0.952057f, 0.292893f);
	glNormal3f(0.00670814f, 0.809169f, 0.587538f);
	glTexCoord2f(0.500000f, 0.800000f);
	glVertex3f(0.00100008f, 0.810017f, 0.586785f);
	glNormal3f(0.0145383f, 0.940755f, 0.338775f);
	glTexCoord2f(0.500000f, 0.900000f);
	glVertex3f(0.00100004f, 0.952057f, 0.308017f);
	// Polygon # 40
	glNormal3f(0.0145383f, 0.940755f, 0.338775f);
	glTexCoord2f(0.500000f, 0.900000f);
	glVertex3f(0.00100004f, 0.952057f, 0.308017f);
	glNormal3f(0.00670814f, 0.809169f, 0.587538f);
	glTexCoord2f(0.500000f, 0.800000f);
	glVertex3f(0.00100008f, 0.810017f, 0.586785f);
	glNormal3f(0.187939f, 0.809169f, 0.556709f);
	glTexCoord2f(0.550000f, 0.800000f);
	glVertex3f(0.182636f, 0.810017f, 0.558017f);
	// Polygon # 41
	glNormal3f(0.0145383f, 0.940755f, 0.338775f);
	glTexCoord2f(0.500000f, 0.900000f);
	glVertex3f(0.00100004f, 0.952057f, 0.308017f);
	glNormal3f(0.187939f, 0.809169f, 0.556709f);
	glTexCoord2f(0.550000f, 0.800000f);
	glVertex3f(0.182636f, 0.810017f, 0.558017f);
	glNormal3f(0.118514f, 0.940755f, 0.317702f);
	glTexCoord2f(0.550000f, 0.900000f);
	glVertex3f(0.0964915f, 0.952057f, 0.292893f);
	// Polygon # 42
	glNormal3f(0.118514f, 0.940755f, 0.317702f);
	glTexCoord2f(0.550000f, 0.900000f);
	glVertex3f(0.0964915f, 0.952057f, 0.292893f);
	glNormal3f(0.187939f, 0.809169f, 0.556709f);
	glTexCoord2f(0.550000f, 0.800000f);
	glVertex3f(0.182636f, 0.810017f, 0.558017f);
	glNormal3f(0.350773f, 0.809169f, 0.471385f);
	glTexCoord2f(0.600000f, 0.800000f);
	glVertex3f(0.346492f, 0.810017f, 0.474528f);
	// Polygon # 43
	glNormal3f(0.118514f, 0.940755f, 0.317702f);
	glTexCoord2f(0.550000f, 0.900000f);
	glVertex3f(0.0964915f, 0.952057f, 0.292893f);
	glNormal3f(0.350773f, 0.809169f, 0.471385f);
	glTexCoord2f(0.600000f, 0.800000f);
	glVertex3f(0.346492f, 0.810017f, 0.474528f);
	glNormal3f(0.210889f, 0.940755f, 0.265530f);
	glTexCoord2f(0.600000f, 0.900000f);
	glVertex3f(0.182636f, 0.952057f, 0.249000f);
	// Polygon # 44
	glNormal3f(0.210889f, 0.940755f, 0.265530f);
	glTexCoord2f(0.600000f, 0.900000f);
	glVertex3f(0.182636f, 0.952057f, 0.249000f);
	glNormal3f(0.350773f, 0.809169f, 0.471385f);
	glTexCoord2f(0.600000f, 0.800000f);
	glVertex3f(0.346492f, 0.810017f, 0.474528f);
	glNormal3f(0.479271f, 0.809169f, 0.339919f);
	glTexCoord2f(0.650000f, 0.800000f);
	glVertex3f(0.476528f, 0.810017f, 0.344491f);
	// Polygon # 45
	glNormal3f(0.210889f, 0.940755f, 0.265530f);
	glTexCoord2f(0.600000f, 0.900000f);
	glVertex3f(0.182636f, 0.952057f, 0.249000f);
	glNormal3f(0.479271f, 0.809169f, 0.339919f);
	glTexCoord2f(0.650000f, 0.800000f);
	glVertex3f(0.476528f, 0.810017f, 0.344491f);
	glNormal3f(0.282620f, 0.940755f, 0.187365f);
	glTexCoord2f(0.650000f, 0.900000f);
	glVertex3f(0.251000f, 0.952057f, 0.180636f);
	// Polygon # 46
	glNormal3f(0.282620f, 0.940755f, 0.187365f);
	glTexCoord2f(0.650000f, 0.900000f);
	glVertex3f(0.251000f, 0.952057f, 0.180636f);
	glNormal3f(0.479271f, 0.809169f, 0.339919f);
	glTexCoord2f(0.650000f, 0.800000f);
	glVertex3f(0.476528f, 0.810017f, 0.344491f);
	glNormal3f(0.560855f, 0.809169f, 0.175179f);
	glTexCoord2f(0.700000f, 0.800000f);
	glVertex3f(0.560017f, 0.810017f, 0.180636f);
	// Polygon # 47
	glNormal3f(0.282620f, 0.940755f, 0.187365f);
	glTexCoord2f(0.650000f, 0.900000f);
	glVertex3f(0.251000f, 0.952057f, 0.180636f);
	glNormal3f(0.560855f, 0.809169f, 0.175179f);
	glTexCoord2f(0.700000f, 0.800000f);
	glVertex3f(0.560017f, 0.810017f, 0.180636f);
	glNormal3f(0.326687f, 0.940755f, 0.0908606f);
	glTexCoord2f(0.700000f, 0.900000f);
	glVertex3f(0.294893f, 0.952057f, 0.0944915f);
	// Polygon # 48
	glNormal3f(0.326687f, 0.940755f, 0.0908606f);
	glTexCoord2f(0.700000f, 0.900000f);
	glVertex3f(0.294893f, 0.952057f, 0.0944915f);
	glNormal3f(0.560855f, 0.809169f, 0.175179f);
	glTexCoord2f(0.700000f, 0.800000f);
	glVertex3f(0.560017f, 0.810017f, 0.180636f);
	glNormal3f(0.587538f, 0.809169f, -0.00670815f);
	glTexCoord2f(0.750000f, 0.800000f);
	glVertex3f(0.588785f, 0.810017f, -0.00100010f);
	// Polygon # 49
	glNormal3f(0.326687f, 0.940755f, 0.0908606f);
	glTexCoord2f(0.700000f, 0.900000f);
	glVertex3f(0.294893f, 0.952057f, 0.0944915f);
	glNormal3f(0.587538f, 0.809169f, -0.00670815f);
	glTexCoord2f(0.750000f, 0.800000f);
	glVertex3f(0.588785f, 0.810017f, -0.00100010f);
	glNormal3f(0.338775f, 0.940755f, -0.0145383f);
	glTexCoord2f(0.750000f, 0.900000f);
	glVertex3f(0.310017f, 0.952057f, -0.00100005f);
	// Polygon # 50
	glNormal3f(0.338775f, 0.940755f, -0.0145383f);
	glTexCoord2f(0.750000f, 0.900000f);
	glVertex3f(0.310017f, 0.952057f, -0.00100005f);
	glNormal3f(0.587538f, 0.809169f, -0.00670815f);
	glTexCoord2f(0.750000f, 0.800000f);
	glVertex3f(0.588785f, 0.810017f, -0.00100010f);
	glNormal3f(0.556709f, 0.809169f, -0.187939f);
	glTexCoord2f(0.800000f, 0.800000f);
	glVertex3f(0.560017f, 0.810017f, -0.182636f);
	// Polygon # 51
	glNormal3f(0.338775f, 0.940755f, -0.0145383f);
	glTexCoord2f(0.750000f, 0.900000f);
	glVertex3f(0.310017f, 0.952057f, -0.00100005f);
	glNormal3f(0.556709f, 0.809169f, -0.187939f);
	glTexCoord2f(0.800000f, 0.800000f);
	glVertex3f(0.560017f, 0.810017f, -0.182636f);
	glNormal3f(0.317702f, 0.940755f, -0.118514f);
	glTexCoord2f(0.800000f, 0.900000f);
	glVertex3f(0.294893f, 0.952057f, -0.0964916f);
	// Polygon # 52
	glNormal3f(0.317702f, 0.940755f, -0.118514f);
	glTexCoord2f(0.800000f, 0.900000f);
	glVertex3f(0.294893f, 0.952057f, -0.0964916f);
	glNormal3f(0.556709f, 0.809169f, -0.187939f);
	glTexCoord2f(0.800000f, 0.800000f);
	glVertex3f(0.560017f, 0.810017f, -0.182636f);
	glNormal3f(0.471385f, 0.809169f, -0.350773f);
	glTexCoord2f(0.850000f, 0.800000f);
	glVertex3f(0.476528f, 0.810017f, -0.346492f);
	// Polygon # 53
	glNormal3f(0.317702f, 0.940755f, -0.118514f);
	glTexCoord2f(0.800000f, 0.900000f);
	glVertex3f(0.294893f, 0.952057f, -0.0964916f);
	glNormal3f(0.471385f, 0.809169f, -0.350773f);
	glTexCoord2f(0.850000f, 0.800000f);
	glVertex3f(0.476528f, 0.810017f, -0.346492f);
	glNormal3f(0.265530f, 0.940755f, -0.210889f);
	glTexCoord2f(0.850000f, 0.900000f);
	glVertex3f(0.251000f, 0.952057f, -0.182636f);
	// Polygon # 54
	glNormal3f(0.265530f, 0.940755f, -0.210889f);
	glTexCoord2f(0.850000f, 0.900000f);
	glVertex3f(0.251000f, 0.952057f, -0.182636f);
	glNormal3f(0.471385f, 0.809169f, -0.350773f);
	glTexCoord2f(0.850000f, 0.800000f);
	glVertex3f(0.476528f, 0.810017f, -0.346492f);
	glNormal3f(0.339919f, 0.809169f, -0.479271f);
	glTexCoord2f(0.900000f, 0.800000f);
	glVertex3f(0.346491f, 0.810017f, -0.476528f);
	// Polygon # 55
	glNormal3f(0.265530f, 0.940755f, -0.210889f);
	glTexCoord2f(0.850000f, 0.900000f);
	glVertex3f(0.251000f, 0.952057f, -0.182636f);
	glNormal3f(0.339919f, 0.809169f, -0.479271f);
	glTexCoord2f(0.900000f, 0.800000f);
	glVertex3f(0.346491f, 0.810017f, -0.476528f);
	glNormal3f(0.187365f, 0.940755f, -0.282620f);
	glTexCoord2f(0.900000f, 0.900000f);
	glVertex3f(0.182636f, 0.952057f, -0.251000f);
	// Polygon # 56
	glNormal3f(0.187365f, 0.940755f, -0.282620f);
	glTexCoord2f(0.900000f, 0.900000f);
	glVertex3f(0.182636f, 0.952057f, -0.251000f);
	glNormal3f(0.339919f, 0.809169f, -0.479271f);
	glTexCoord2f(0.900000f, 0.800000f);
	glVertex3f(0.346491f, 0.810017f, -0.476528f);
	glNormal3f(0.175179f, 0.809169f, -0.560855f);
	glTexCoord2f(0.950000f, 0.800000f);
	glVertex3f(0.182636f, 0.810017f, -0.560017f);
	// Polygon # 57
	glNormal3f(0.187365f, 0.940755f, -0.282620f);
	glTexCoord2f(0.900000f, 0.900000f);
	glVertex3f(0.182636f, 0.952057f, -0.251000f);
	glNormal3f(0.175179f, 0.809169f, -0.560855f);
	glTexCoord2f(0.950000f, 0.800000f);
	glVertex3f(0.182636f, 0.810017f, -0.560017f);
	glNormal3f(0.0908606f, 0.940755f, -0.326687f);
	glTexCoord2f(0.950000f, 0.900000f);
	glVertex3f(0.0964914f, 0.952057f, -0.294893f);
	// Polygon # 58
	glNormal3f(0.0908606f, 0.940755f, -0.326687f);
	glTexCoord2f(0.950000f, 0.900000f);
	glVertex3f(0.0964914f, 0.952057f, -0.294893f);
	glNormal3f(0.175179f, 0.809169f, -0.560855f);
	glTexCoord2f(0.950000f, 0.800000f);
	glVertex3f(0.182636f, 0.810017f, -0.560017f);
	glNormal3f(0.0717199f, 0.888712f, -0.452821f);
	glTexCoord2f(1.00000f, 0.800000f);
	glVertex3f(0.000999974f, 0.810017f, -0.588785f);
	// Polygon # 59
	glNormal3f(0.0908606f, 0.940755f, -0.326687f);
	glTexCoord2f(0.950000f, 0.900000f);
	glVertex3f(0.0964914f, 0.952057f, -0.294893f);
	glNormal3f(0.0717199f, 0.888712f, -0.452821f);
	glTexCoord2f(1.00000f, 0.800000f);
	glVertex3f(0.000999974f, 0.810017f, -0.588785f);
	glNormal3f(0.0717199f, 0.888712f, -0.452821f);
	glTexCoord2f(1.00000f, 0.900000f);
	glVertex3f(0.000999987f, 0.952057f, -0.310017f);
	// Polygon # 60
	glNormal3f(-0.0991988f, 0.773232f, -0.626316f);
	glTexCoord2f(-5.96046e-008f, 0.800000f);
	glVertex3f(0.000999974f, 0.810017f, -0.588785f);
	glNormal3f(-0.131687f, 0.539787f, -0.831438f);
	glTexCoord2f(-5.96046e-008f, 0.700000f);
	glVertex3f(0.000999965f, 0.588785f, -0.810017f);
	glNormal3f(-0.254546f, 0.588011f, -0.767756f);
	glTexCoord2f(0.0500000f, 0.700000f);
	glVertex3f(-0.249000f, 0.588785f, -0.770421f);
	// Polygon # 61
	glNormal3f(-0.0991988f, 0.773232f, -0.626316f);
	glTexCoord2f(-5.96046e-008f, 0.800000f);
	glVertex3f(0.000999974f, 0.810017f, -0.588785f);
	glNormal3f(-0.254546f, 0.588011f, -0.767756f);
	glTexCoord2f(0.0500000f, 0.700000f);
	glVertex3f(-0.249000f, 0.588785f, -0.770421f);
	glNormal3f(-0.187939f, 0.809169f, -0.556709f);
	glTexCoord2f(0.0500000f, 0.800000f);
	glVertex3f(-0.180636f, 0.810017f, -0.560017f);
	// Polygon # 62
	glNormal3f(-0.187939f, 0.809169f, -0.556709f);
	glTexCoord2f(0.0500000f, 0.800000f);
	glVertex3f(-0.180636f, 0.810017f, -0.560017f);
	glNormal3f(-0.254546f, 0.588011f, -0.767756f);
	glTexCoord2f(0.0500000f, 0.700000f);
	glVertex3f(-0.249000f, 0.588785f, -0.770421f);
	glNormal3f(-0.479337f, 0.588011f, -0.651521f);
	glTexCoord2f(0.100000f, 0.700000f);
	glVertex3f(-0.474528f, 0.588785f, -0.655508f);
	// Polygon # 63
	glNormal3f(-0.187939f, 0.809169f, -0.556709f);
	glTexCoord2f(0.0500000f, 0.800000f);
	glVertex3f(-0.180636f, 0.810017f, -0.560017f);
	glNormal3f(-0.479337f, 0.588011f, -0.651521f);
	glTexCoord2f(0.100000f, 0.700000f);
	glVertex3f(-0.474528f, 0.588785f, -0.655508f);
	glNormal3f(-0.350773f, 0.809169f, -0.471385f);
	glTexCoord2f(0.100000f, 0.800000f);
	glVertex3f(-0.344492f, 0.810017f, -0.476528f);
	// Polygon # 64
	glNormal3f(-0.350773f, 0.809169f, -0.471385f);
	glTexCoord2f(0.100000f, 0.800000f);
	glVertex3f(-0.344492f, 0.810017f, -0.476528f);
	glNormal3f(-0.479337f, 0.588011f, -0.651521f);
	glTexCoord2f(0.100000f, 0.700000f);
	glVertex3f(-0.474528f, 0.588785f, -0.655508f);
	glNormal3f(-0.657208f, 0.588011f, -0.471510f);
	glTexCoord2f(0.150000f, 0.700000f);
	glVertex3f(-0.653509f, 0.588785f, -0.476528f);
	// Polygon # 65
	glNormal3f(-0.350773f, 0.809169f, -0.471385f);
	glTexCoord2f(0.100000f, 0.800000f);
	glVertex3f(-0.344492f, 0.810017f, -0.476528f);
	glNormal3f(-0.657208f, 0.588011f, -0.471510f);
	glTexCoord2f(0.150000f, 0.700000f);
	glVertex3f(-0.653509f, 0.588785f, -0.476528f);
	glNormal3f(-0.479271f, 0.809169f, -0.339919f);
	glTexCoord2f(0.150000f, 0.800000f);
	glVertex3f(-0.474528f, 0.810017f, -0.346491f);
	// Polygon # 66
	glNormal3f(-0.479271f, 0.809169f, -0.339919f);
	glTexCoord2f(0.150000f, 0.800000f);
	glVertex3f(-0.474528f, 0.810017f, -0.346491f);
	glNormal3f(-0.657208f, 0.588011f, -0.471510f);
	glTexCoord2f(0.150000f, 0.700000f);
	glVertex3f(-0.653509f, 0.588785f, -0.476528f);
	glNormal3f(-0.770746f, 0.588011f, -0.245344f);
	glTexCoord2f(0.200000f, 0.700000f);
	glVertex3f(-0.768421f, 0.588785f, -0.251000f);
	// Polygon # 67
	glNormal3f(-0.479271f, 0.809169f, -0.339919f);
	glTexCoord2f(0.150000f, 0.800000f);
	glVertex3f(-0.474528f, 0.810017f, -0.346491f);
	glNormal3f(-0.770746f, 0.588011f, -0.245344f);
	glTexCoord2f(0.200000f, 0.700000f);
	glVertex3f(-0.768421f, 0.588785f, -0.251000f);
	glNormal3f(-0.560855f, 0.809169f, -0.175179f);
	glTexCoord2f(0.200000f, 0.800000f);
	glVertex3f(-0.558017f, 0.810017f, -0.182636f);
	// Polygon # 68
	glNormal3f(-0.560855f, 0.809169f, -0.175179f);
	glTexCoord2f(0.200000f, 0.800000f);
	glVertex3f(-0.558017f, 0.810017f, -0.182636f);
	glNormal3f(-0.770746f, 0.588011f, -0.245344f);
	glTexCoord2f(0.200000f, 0.700000f);
	glVertex3f(-0.768421f, 0.588785f, -0.251000f);
	glNormal3f(-0.808839f, 0.588011f, 0.00483756f);
	glTexCoord2f(0.250000f, 0.700000f);
	glVertex3f(-0.808017f, 0.588785f, -0.000999929f);
	// Polygon # 69
	glNormal3f(-0.560855f, 0.809169f, -0.175179f);
	glTexCoord2f(0.200000f, 0.800000f);
	glVertex3f(-0.558017f, 0.810017f, -0.182636f);
	glNormal3f(-0.808839f, 0.588011f, 0.00483756f);
	glTexCoord2f(0.250000f, 0.700000f);
	glVertex3f(-0.808017f, 0.588785f, -0.000999929f);
	glNormal3f(-0.587538f, 0.809169f, 0.00670815f);
	glTexCoord2f(0.250000f, 0.800000f);
	glVertex3f(-0.586785f, 0.810017f, -0.000999949f);
	// Polygon # 70
	glNormal3f(-0.587538f, 0.809169f, 0.00670815f);
	glTexCoord2f(0.250000f, 0.800000f);
	glVertex3f(-0.586785f, 0.810017f, -0.000999949f);
	glNormal3f(-0.808839f, 0.588011f, 0.00483756f);
	glTexCoord2f(0.250000f, 0.700000f);
	glVertex3f(-0.808017f, 0.588785f, -0.000999929f);
	glNormal3f(-0.767756f, 0.588011f, 0.254546f);
	glTexCoord2f(0.300000f, 0.700000f);
	glVertex3f(-0.768421f, 0.588785f, 0.249000f);
	// Polygon # 71
	glNormal3f(-0.587538f, 0.809169f, 0.00670815f);
	glTexCoord2f(0.250000f, 0.800000f);
	glVertex3f(-0.586785f, 0.810017f, -0.000999949f);
	glNormal3f(-0.767756f, 0.588011f, 0.254546f);
	glTexCoord2f(0.300000f, 0.700000f);
	glVertex3f(-0.768421f, 0.588785f, 0.249000f);
	glNormal3f(-0.556709f, 0.809169f, 0.187939f);
	glTexCoord2f(0.300000f, 0.800000f);
	glVertex3f(-0.558017f, 0.810017f, 0.180636f);
	// Polygon # 72
	glNormal3f(-0.556709f, 0.809169f, 0.187939f);
	glTexCoord2f(0.300000f, 0.800000f);
	glVertex3f(-0.558017f, 0.810017f, 0.180636f);
	glNormal3f(-0.767756f, 0.588011f, 0.254546f);
	glTexCoord2f(0.300000f, 0.700000f);
	glVertex3f(-0.768421f, 0.588785f, 0.249000f);
	glNormal3f(-0.651521f, 0.588011f, 0.479337f);
	glTexCoord2f(0.350000f, 0.700000f);
	glVertex3f(-0.653508f, 0.588785f, 0.474528f);
	// Polygon # 73
	glNormal3f(-0.556709f, 0.809169f, 0.187939f);
	glTexCoord2f(0.300000f, 0.800000f);
	glVertex3f(-0.558017f, 0.810017f, 0.180636f);
	glNormal3f(-0.651521f, 0.588011f, 0.479337f);
	glTexCoord2f(0.350000f, 0.700000f);
	glVertex3f(-0.653508f, 0.588785f, 0.474528f);
	glNormal3f(-0.471385f, 0.809169f, 0.350773f);
	glTexCoord2f(0.350000f, 0.800000f);
	glVertex3f(-0.474528f, 0.810017f, 0.344492f);
	// Polygon # 74
	glNormal3f(-0.471385f, 0.809169f, 0.350773f);
	glTexCoord2f(0.350000f, 0.800000f);
	glVertex3f(-0.474528f, 0.810017f, 0.344492f);
	glNormal3f(-0.651521f, 0.588011f, 0.479337f);
	glTexCoord2f(0.350000f, 0.700000f);
	glVertex3f(-0.653508f, 0.588785f, 0.474528f);
	glNormal3f(-0.471510f, 0.588011f, 0.657208f);
	glTexCoord2f(0.400000f, 0.700000f);
	glVertex3f(-0.474528f, 0.588785f, 0.653509f);
	// Polygon # 75
	glNormal3f(-0.471385f, 0.809169f, 0.350773f);
	glTexCoord2f(0.350000f, 0.800000f);
	glVertex3f(-0.474528f, 0.810017f, 0.344492f);
	glNormal3f(-0.471510f, 0.588011f, 0.657208f);
	glTexCoord2f(0.400000f, 0.700000f);
	glVertex3f(-0.474528f, 0.588785f, 0.653509f);
	glNormal3f(-0.339919f, 0.809169f, 0.479271f);
	glTexCoord2f(0.400000f, 0.800000f);
	glVertex3f(-0.344491f, 0.810017f, 0.474528f);
	// Polygon # 76
	glNormal3f(-0.339919f, 0.809169f, 0.479271f);
	glTexCoord2f(0.400000f, 0.800000f);
	glVertex3f(-0.344491f, 0.810017f, 0.474528f);
	glNormal3f(-0.471510f, 0.588011f, 0.657208f);
	glTexCoord2f(0.400000f, 0.700000f);
	glVertex3f(-0.474528f, 0.588785f, 0.653509f);
	glNormal3f(-0.245344f, 0.588011f, 0.770746f);
	glTexCoord2f(0.450000f, 0.700000f);
	glVertex3f(-0.249000f, 0.588785f, 0.768421f);
	// Polygon # 77
	glNormal3f(-0.339919f, 0.809169f, 0.479271f);
	glTexCoord2f(0.400000f, 0.800000f);
	glVertex3f(-0.344491f, 0.810017f, 0.474528f);
	glNormal3f(-0.245344f, 0.588011f, 0.770746f);
	glTexCoord2f(0.450000f, 0.700000f);
	glVertex3f(-0.249000f, 0.588785f, 0.768421f);
	glNormal3f(-0.175179f, 0.809169f, 0.560855f);
	glTexCoord2f(0.450000f, 0.800000f);
	glVertex3f(-0.180636f, 0.810017f, 0.558017f);
	// Polygon # 78
	glNormal3f(-0.175179f, 0.809169f, 0.560855f);
	glTexCoord2f(0.450000f, 0.800000f);
	glVertex3f(-0.180636f, 0.810017f, 0.558017f);
	glNormal3f(-0.245344f, 0.588011f, 0.770746f);
	glTexCoord2f(0.450000f, 0.700000f);
	glVertex3f(-0.249000f, 0.588785f, 0.768421f);
	glNormal3f(0.00483757f, 0.588011f, 0.808839f);
	glTexCoord2f(0.500000f, 0.700000f);
	glVertex3f(0.00100011f, 0.588785f, 0.808017f);
	// Polygon # 79
	glNormal3f(-0.175179f, 0.809169f, 0.560855f);
	glTexCoord2f(0.450000f, 0.800000f);
	glVertex3f(-0.180636f, 0.810017f, 0.558017f);
	glNormal3f(0.00483757f, 0.588011f, 0.808839f);
	glTexCoord2f(0.500000f, 0.700000f);
	glVertex3f(0.00100011f, 0.588785f, 0.808017f);
	glNormal3f(0.00670814f, 0.809169f, 0.587538f);
	glTexCoord2f(0.500000f, 0.800000f);
	glVertex3f(0.00100008f, 0.810017f, 0.586785f);
	// Polygon # 80
	glNormal3f(0.00670814f, 0.809169f, 0.587538f);
	glTexCoord2f(0.500000f, 0.800000f);
	glVertex3f(0.00100008f, 0.810017f, 0.586785f);
	glNormal3f(0.00483757f, 0.588011f, 0.808839f);
	glTexCoord2f(0.500000f, 0.700000f);
	glVertex3f(0.00100011f, 0.588785f, 0.808017f);
	glNormal3f(0.254546f, 0.588011f, 0.767756f);
	glTexCoord2f(0.550000f, 0.700000f);
	glVertex3f(0.251000f, 0.588785f, 0.768421f);
	// Polygon # 81
	glNormal3f(0.00670814f, 0.809169f, 0.587538f);
	glTexCoord2f(0.500000f, 0.800000f);
	glVertex3f(0.00100008f, 0.810017f, 0.586785f);
	glNormal3f(0.254546f, 0.588011f, 0.767756f);
	glTexCoord2f(0.550000f, 0.700000f);
	glVertex3f(0.251000f, 0.588785f, 0.768421f);
	glNormal3f(0.187939f, 0.809169f, 0.556709f);
	glTexCoord2f(0.550000f, 0.800000f);
	glVertex3f(0.182636f, 0.810017f, 0.558017f);
	// Polygon # 82
	glNormal3f(0.187939f, 0.809169f, 0.556709f);
	glTexCoord2f(0.550000f, 0.800000f);
	glVertex3f(0.182636f, 0.810017f, 0.558017f);
	glNormal3f(0.254546f, 0.588011f, 0.767756f);
	glTexCoord2f(0.550000f, 0.700000f);
	glVertex3f(0.251000f, 0.588785f, 0.768421f);
	glNormal3f(0.479337f, 0.588011f, 0.651521f);
	glTexCoord2f(0.600000f, 0.700000f);
	glVertex3f(0.476528f, 0.588785f, 0.653508f);
	// Polygon # 83
	glNormal3f(0.187939f, 0.809169f, 0.556709f);
	glTexCoord2f(0.550000f, 0.800000f);
	glVertex3f(0.182636f, 0.810017f, 0.558017f);
	glNormal3f(0.479337f, 0.588011f, 0.651521f);
	glTexCoord2f(0.600000f, 0.700000f);
	glVertex3f(0.476528f, 0.588785f, 0.653508f);
	glNormal3f(0.350773f, 0.809169f, 0.471385f);
	glTexCoord2f(0.600000f, 0.800000f);
	glVertex3f(0.346492f, 0.810017f, 0.474528f);
	// Polygon # 84
	glNormal3f(0.350773f, 0.809169f, 0.471385f);
	glTexCoord2f(0.600000f, 0.800000f);
	glVertex3f(0.346492f, 0.810017f, 0.474528f);
	glNormal3f(0.479337f, 0.588011f, 0.651521f);
	glTexCoord2f(0.600000f, 0.700000f);
	glVertex3f(0.476528f, 0.588785f, 0.653508f);
	glNormal3f(0.657208f, 0.588011f, 0.471510f);
	glTexCoord2f(0.650000f, 0.700000f);
	glVertex3f(0.655509f, 0.588785f, 0.474528f);
	// Polygon # 85
	glNormal3f(0.350773f, 0.809169f, 0.471385f);
	glTexCoord2f(0.600000f, 0.800000f);
	glVertex3f(0.346492f, 0.810017f, 0.474528f);
	glNormal3f(0.657208f, 0.588011f, 0.471510f);
	glTexCoord2f(0.650000f, 0.700000f);
	glVertex3f(0.655509f, 0.588785f, 0.474528f);
	glNormal3f(0.479271f, 0.809169f, 0.339919f);
	glTexCoord2f(0.650000f, 0.800000f);
	glVertex3f(0.476528f, 0.810017f, 0.344491f);
	// Polygon # 86
	glNormal3f(0.479271f, 0.809169f, 0.339919f);
	glTexCoord2f(0.650000f, 0.800000f);
	glVertex3f(0.476528f, 0.810017f, 0.344491f);
	glNormal3f(0.657208f, 0.588011f, 0.471510f);
	glTexCoord2f(0.650000f, 0.700000f);
	glVertex3f(0.655509f, 0.588785f, 0.474528f);
	glNormal3f(0.770746f, 0.588011f, 0.245344f);
	glTexCoord2f(0.700000f, 0.700000f);
	glVertex3f(0.770421f, 0.588785f, 0.249000f);
	// Polygon # 87
	glNormal3f(0.479271f, 0.809169f, 0.339919f);
	glTexCoord2f(0.650000f, 0.800000f);
	glVertex3f(0.476528f, 0.810017f, 0.344491f);
	glNormal3f(0.770746f, 0.588011f, 0.245344f);
	glTexCoord2f(0.700000f, 0.700000f);
	glVertex3f(0.770421f, 0.588785f, 0.249000f);
	glNormal3f(0.560855f, 0.809169f, 0.175179f);
	glTexCoord2f(0.700000f, 0.800000f);
	glVertex3f(0.560017f, 0.810017f, 0.180636f);
	// Polygon # 88
	glNormal3f(0.560855f, 0.809169f, 0.175179f);
	glTexCoord2f(0.700000f, 0.800000f);
	glVertex3f(0.560017f, 0.810017f, 0.180636f);
	glNormal3f(0.770746f, 0.588011f, 0.245344f);
	glTexCoord2f(0.700000f, 0.700000f);
	glVertex3f(0.770421f, 0.588785f, 0.249000f);
	glNormal3f(0.808839f, 0.588011f, -0.00483757f);
	glTexCoord2f(0.750000f, 0.700000f);
	glVertex3f(0.810017f, 0.588785f, -0.00100014f);
	// Polygon # 89
	glNormal3f(0.560855f, 0.809169f, 0.175179f);
	glTexCoord2f(0.700000f, 0.800000f);
	glVertex3f(0.560017f, 0.810017f, 0.180636f);
	glNormal3f(0.808839f, 0.588011f, -0.00483757f);
	glTexCoord2f(0.750000f, 0.700000f);
	glVertex3f(0.810017f, 0.588785f, -0.00100014f);
	glNormal3f(0.587538f, 0.809169f, -0.00670815f);
	glTexCoord2f(0.750000f, 0.800000f);
	glVertex3f(0.588785f, 0.810017f, -0.00100010f);
	// Polygon # 90
	glNormal3f(0.587538f, 0.809169f, -0.00670815f);
	glTexCoord2f(0.750000f, 0.800000f);
	glVertex3f(0.588785f, 0.810017f, -0.00100010f);
	glNormal3f(0.808839f, 0.588011f, -0.00483757f);
	glTexCoord2f(0.750000f, 0.700000f);
	glVertex3f(0.810017f, 0.588785f, -0.00100014f);
	glNormal3f(0.767756f, 0.588011f, -0.254546f);
	glTexCoord2f(0.800000f, 0.700000f);
	glVertex3f(0.770421f, 0.588785f, -0.251000f);
	// Polygon # 91
	glNormal3f(0.587538f, 0.809169f, -0.00670815f);
	glTexCoord2f(0.750000f, 0.800000f);
	glVertex3f(0.588785f, 0.810017f, -0.00100010f);
	glNormal3f(0.767756f, 0.588011f, -0.254546f);
	glTexCoord2f(0.800000f, 0.700000f);
	glVertex3f(0.770421f, 0.588785f, -0.251000f);
	glNormal3f(0.556709f, 0.809169f, -0.187939f);
	glTexCoord2f(0.800000f, 0.800000f);
	glVertex3f(0.560017f, 0.810017f, -0.182636f);
	// Polygon # 92
	glNormal3f(0.556709f, 0.809169f, -0.187939f);
	glTexCoord2f(0.800000f, 0.800000f);
	glVertex3f(0.560017f, 0.810017f, -0.182636f);
	glNormal3f(0.767756f, 0.588011f, -0.254546f);
	glTexCoord2f(0.800000f, 0.700000f);
	glVertex3f(0.770421f, 0.588785f, -0.251000f);
	glNormal3f(0.651521f, 0.588011f, -0.479337f);
	glTexCoord2f(0.850000f, 0.700000f);
	glVertex3f(0.655508f, 0.588785f, -0.476528f);
	// Polygon # 93
	glNormal3f(0.556709f, 0.809169f, -0.187939f);
	glTexCoord2f(0.800000f, 0.800000f);
	glVertex3f(0.560017f, 0.810017f, -0.182636f);
	glNormal3f(0.651521f, 0.588011f, -0.479337f);
	glTexCoord2f(0.850000f, 0.700000f);
	glVertex3f(0.655508f, 0.588785f, -0.476528f);
	glNormal3f(0.471385f, 0.809169f, -0.350773f);
	glTexCoord2f(0.850000f, 0.800000f);
	glVertex3f(0.476528f, 0.810017f, -0.346492f);
	// Polygon # 94
	glNormal3f(0.471385f, 0.809169f, -0.350773f);
	glTexCoord2f(0.850000f, 0.800000f);
	glVertex3f(0.476528f, 0.810017f, -0.346492f);
	glNormal3f(0.651521f, 0.588011f, -0.479337f);
	glTexCoord2f(0.850000f, 0.700000f);
	glVertex3f(0.655508f, 0.588785f, -0.476528f);
	glNormal3f(0.471510f, 0.588011f, -0.657208f);
	glTexCoord2f(0.900000f, 0.700000f);
	glVertex3f(0.476528f, 0.588785f, -0.655509f);
	// Polygon # 95
	glNormal3f(0.471385f, 0.809169f, -0.350773f);
	glTexCoord2f(0.850000f, 0.800000f);
	glVertex3f(0.476528f, 0.810017f, -0.346492f);
	glNormal3f(0.471510f, 0.588011f, -0.657208f);
	glTexCoord2f(0.900000f, 0.700000f);
	glVertex3f(0.476528f, 0.588785f, -0.655509f);
	glNormal3f(0.339919f, 0.809169f, -0.479271f);
	glTexCoord2f(0.900000f, 0.800000f);
	glVertex3f(0.346491f, 0.810017f, -0.476528f);
	// Polygon # 96
	glNormal3f(0.339919f, 0.809169f, -0.479271f);
	glTexCoord2f(0.900000f, 0.800000f);
	glVertex3f(0.346491f, 0.810017f, -0.476528f);
	glNormal3f(0.471510f, 0.588011f, -0.657208f);
	glTexCoord2f(0.900000f, 0.700000f);
	glVertex3f(0.476528f, 0.588785f, -0.655509f);
	glNormal3f(0.245344f, 0.588011f, -0.770746f);
	glTexCoord2f(0.950000f, 0.700000f);
	glVertex3f(0.251000f, 0.588785f, -0.770421f);
	// Polygon # 97
	glNormal3f(0.339919f, 0.809169f, -0.479271f);
	glTexCoord2f(0.900000f, 0.800000f);
	glVertex3f(0.346491f, 0.810017f, -0.476528f);
	glNormal3f(0.245344f, 0.588011f, -0.770746f);
	glTexCoord2f(0.950000f, 0.700000f);
	glVertex3f(0.251000f, 0.588785f, -0.770421f);
	glNormal3f(0.175179f, 0.809169f, -0.560855f);
	glTexCoord2f(0.950000f, 0.800000f);
	glVertex3f(0.182636f, 0.810017f, -0.560017f);
	// Polygon # 98
	glNormal3f(0.175179f, 0.809169f, -0.560855f);
	glTexCoord2f(0.950000f, 0.800000f);
	glVertex3f(0.182636f, 0.810017f, -0.560017f);
	glNormal3f(0.245344f, 0.588011f, -0.770746f);
	glTexCoord2f(0.950000f, 0.700000f);
	glVertex3f(0.251000f, 0.588785f, -0.770421f);
	glNormal3f(0.111299f, 0.702713f, -0.702713f);
	glTexCoord2f(1.00000f, 0.700000f);
	glVertex3f(0.000999965f, 0.588785f, -0.810017f);
	// Polygon # 99
	glNormal3f(0.175179f, 0.809169f, -0.560855f);
	glTexCoord2f(0.950000f, 0.800000f);
	glVertex3f(0.182636f, 0.810017f, -0.560017f);
	glNormal3f(0.111299f, 0.702713f, -0.702713f);
	glTexCoord2f(1.00000f, 0.700000f);
	glVertex3f(0.000999965f, 0.588785f, -0.810017f);
	glNormal3f(0.111299f, 0.702713f, -0.702713f);
	glTexCoord2f(1.00000f, 0.800000f);
	glVertex3f(0.000999974f, 0.810017f, -0.588785f);
	// Polygon # 100
	glNormal3f(-0.131687f, 0.539787f, -0.831438f);
	glTexCoord2f(-5.96046e-008f, 0.700000f);
	glVertex3f(0.000999965f, 0.588785f, -0.810017f);
	glNormal3f(-0.151237f, 0.255623f, -0.954874f);
	glTexCoord2f(-5.96046e-008f, 0.600000f);
	glVertex3f(0.000999958f, 0.310017f, -0.952057f);
	glNormal3f(-0.296279f, 0.309184f, -0.903673f);
	glTexCoord2f(0.0500000f, 0.600000f);
	glVertex3f(-0.292893f, 0.310017f, -0.905509f);
	// Polygon # 101
	glNormal3f(-0.131687f, 0.539787f, -0.831438f);
	glTexCoord2f(-5.96046e-008f, 0.700000f);
	glVertex3f(0.000999965f, 0.588785f, -0.810017f);
	glNormal3f(-0.296279f, 0.309184f, -0.903673f);
	glTexCoord2f(0.0500000f, 0.600000f);
	glVertex3f(-0.292893f, 0.310017f, -0.905509f);
	glNormal3f(-0.254546f, 0.588011f, -0.767756f);
	glTexCoord2f(0.0500000f, 0.700000f);
	glVertex3f(-0.249000f, 0.588785f, -0.770421f);
	// Polygon # 102
	glNormal3f(-0.254546f, 0.588011f, -0.767756f);
	glTexCoord2f(0.0500000f, 0.700000f);
	glVertex3f(-0.249000f, 0.588785f, -0.770421f);
	glNormal3f(-0.296279f, 0.309184f, -0.903673f);
	glTexCoord2f(0.0500000f, 0.600000f);
	glVertex3f(-0.292893f, 0.310017f, -0.905509f);
	glNormal3f(-0.561028f, 0.309184f, -0.767888f);
	glTexCoord2f(0.100000f, 0.600000f);
	glVertex3f(-0.558017f, 0.310017f, -0.770421f);
	// Polygon # 103
	glNormal3f(-0.254546f, 0.588011f, -0.767756f);
	glTexCoord2f(0.0500000f, 0.700000f);
	glVertex3f(-0.249000f, 0.588785f, -0.770421f);
	glNormal3f(-0.561028f, 0.309184f, -0.767888f);
	glTexCoord2f(0.100000f, 0.600000f);
	glVertex3f(-0.558017f, 0.310017f, -0.770421f);
	glNormal3f(-0.479337f, 0.588011f, -0.651521f);
	glTexCoord2f(0.100000f, 0.700000f);
	glVertex3f(-0.474528f, 0.588785f, -0.655508f);
	// Polygon # 104
	glNormal3f(-0.479337f, 0.588011f, -0.651521f);
	glTexCoord2f(0.100000f, 0.700000f);
	glVertex3f(-0.474528f, 0.588785f, -0.655508f);
	glNormal3f(-0.561028f, 0.309184f, -0.767888f);
	glTexCoord2f(0.100000f, 0.600000f);
	glVertex3f(-0.558017f, 0.310017f, -0.770421f);
	glNormal3f(-0.770860f, 0.309184f, -0.556938f);
	glTexCoord2f(0.150000f, 0.600000f);
	glVertex3f(-0.768421f, 0.310017f, -0.560017f);
	// Polygon # 105
	glNormal3f(-0.479337f, 0.588011f, -0.651521f);
	glTexCoord2f(0.100000f, 0.700000f);
	glVertex3f(-0.474528f, 0.588785f, -0.655508f);
	glNormal3f(-0.770860f, 0.309184f, -0.556938f);
	glTexCoord2f(0.150000f, 0.600000f);
	glVertex3f(-0.768421f, 0.310017f, -0.560017f);
	glNormal3f(-0.657208f, 0.588011f, -0.471510f);
	glTexCoord2f(0.150000f, 0.700000f);
	glVertex3f(-0.653509f, 0.588785f, -0.476528f);
	// Polygon # 106
	glNormal3f(-0.657208f, 0.588011f, -0.471510f);
	glTexCoord2f(0.150000f, 0.700000f);
	glVertex3f(-0.653509f, 0.588785f, -0.476528f);
	glNormal3f(-0.770860f, 0.309184f, -0.556938f);
	glTexCoord2f(0.150000f, 0.600000f);
	glVertex3f(-0.768421f, 0.310017f, -0.560017f);
	glNormal3f(-0.905235f, 0.309184f, -0.291471f);
	glTexCoord2f(0.200000f, 0.600000f);
	glVertex3f(-0.903509f, 0.310017f, -0.294893f);
	// Polygon # 107
	glNormal3f(-0.657208f, 0.588011f, -0.471510f);
	glTexCoord2f(0.150000f, 0.700000f);
	glVertex3f(-0.653509f, 0.588785f, -0.476528f);
	glNormal3f(-0.905235f, 0.309184f, -0.291471f);
	glTexCoord2f(0.200000f, 0.600000f);
	glVertex3f(-0.903509f, 0.310017f, -0.294893f);
	glNormal3f(-0.770746f, 0.588011f, -0.245344f);
	glTexCoord2f(0.200000f, 0.700000f);
	glVertex3f(-0.768421f, 0.588785f, -0.251000f);
	// Polygon # 108
	glNormal3f(-0.770746f, 0.588011f, -0.245344f);
	glTexCoord2f(0.200000f, 0.700000f);
	glVertex3f(-0.768421f, 0.588785f, -0.251000f);
	glNormal3f(-0.905235f, 0.309184f, -0.291471f);
	glTexCoord2f(0.200000f, 0.600000f);
	glVertex3f(-0.903509f, 0.310017f, -0.294893f);
	glNormal3f(-0.950999f, 0.309184f, 0.00252809f);
	glTexCoord2f(0.250000f, 0.600000f);
	glVertex3f(-0.950057f, 0.310017f, -0.000999917f);
	// Polygon # 109
	glNormal3f(-0.770746f, 0.588011f, -0.245344f);
	glTexCoord2f(0.200000f, 0.700000f);
	glVertex3f(-0.768421f, 0.588785f, -0.251000f);
	glNormal3f(-0.950999f, 0.309184f, 0.00252809f);
	glTexCoord2f(0.250000f, 0.600000f);
	glVertex3f(-0.950057f, 0.310017f, -0.000999917f);
	glNormal3f(-0.808839f, 0.588011f, 0.00483756f);
	glTexCoord2f(0.250000f, 0.700000f);
	glVertex3f(-0.808017f, 0.588785f, -0.000999929f);
	// Polygon # 110
	glNormal3f(-0.808839f, 0.588011f, 0.00483756f);
	glTexCoord2f(0.250000f, 0.700000f);
	glVertex3f(-0.808017f, 0.588785f, -0.000999929f);
	glNormal3f(-0.950999f, 0.309184f, 0.00252809f);
	glTexCoord2f(0.250000f, 0.600000f);
	glVertex3f(-0.950057f, 0.310017f, -0.000999917f);
	glNormal3f(-0.903673f, 0.309184f, 0.296279f);
	glTexCoord2f(0.300000f, 0.600000f);
	glVertex3f(-0.903508f, 0.310017f, 0.292893f);
	// Polygon # 111
	glNormal3f(-0.808839f, 0.588011f, 0.00483756f);
	glTexCoord2f(0.250000f, 0.700000f);
	glVertex3f(-0.808017f, 0.588785f, -0.000999929f);
	glNormal3f(-0.903673f, 0.309184f, 0.296279f);
	glTexCoord2f(0.300000f, 0.600000f);
	glVertex3f(-0.903508f, 0.310017f, 0.292893f);
	glNormal3f(-0.767756f, 0.588011f, 0.254546f);
	glTexCoord2f(0.300000f, 0.700000f);
	glVertex3f(-0.768421f, 0.588785f, 0.249000f);
	// Polygon # 112
	glNormal3f(-0.767756f, 0.588011f, 0.254546f);
	glTexCoord2f(0.300000f, 0.700000f);
	glVertex3f(-0.768421f, 0.588785f, 0.249000f);
	glNormal3f(-0.903673f, 0.309184f, 0.296279f);
	glTexCoord2f(0.300000f, 0.600000f);
	glVertex3f(-0.903508f, 0.310017f, 0.292893f);
	glNormal3f(-0.767888f, 0.309184f, 0.561028f);
	glTexCoord2f(0.350000f, 0.600000f);
	glVertex3f(-0.768421f, 0.310017f, 0.558017f);
	// Polygon # 113
	glNormal3f(-0.767756f, 0.588011f, 0.254546f);
	glTexCoord2f(0.300000f, 0.700000f);
	glVertex3f(-0.768421f, 0.588785f, 0.249000f);
	glNormal3f(-0.767888f, 0.309184f, 0.561028f);
	glTexCoord2f(0.350000f, 0.600000f);
	glVertex3f(-0.768421f, 0.310017f, 0.558017f);
	glNormal3f(-0.651521f, 0.588011f, 0.479337f);
	glTexCoord2f(0.350000f, 0.700000f);
	glVertex3f(-0.653508f, 0.588785f, 0.474528f);
	// Polygon # 114
	glNormal3f(-0.651521f, 0.588011f, 0.479337f);
	glTexCoord2f(0.350000f, 0.700000f);
	glVertex3f(-0.653508f, 0.588785f, 0.474528f);
	glNormal3f(-0.767888f, 0.309184f, 0.561028f);
	glTexCoord2f(0.350000f, 0.600000f);
	glVertex3f(-0.768421f, 0.310017f, 0.558017f);
	glNormal3f(-0.556938f, 0.309184f, 0.770860f);
	glTexCoord2f(0.400000f, 0.600000f);
	glVertex3f(-0.558017f, 0.310017f, 0.768421f);
	// Polygon # 115
	glNormal3f(-0.651521f, 0.588011f, 0.479337f);
	glTexCoord2f(0.350000f, 0.700000f);
	glVertex3f(-0.653508f, 0.588785f, 0.474528f);
	glNormal3f(-0.556938f, 0.309184f, 0.770860f);
	glTexCoord2f(0.400000f, 0.600000f);
	glVertex3f(-0.558017f, 0.310017f, 0.768421f);
	glNormal3f(-0.471510f, 0.588011f, 0.657208f);
	glTexCoord2f(0.400000f, 0.700000f);
	glVertex3f(-0.474528f, 0.588785f, 0.653509f);
	// Polygon # 116
	glNormal3f(-0.471510f, 0.588011f, 0.657208f);
	glTexCoord2f(0.400000f, 0.700000f);
	glVertex3f(-0.474528f, 0.588785f, 0.653509f);
	glNormal3f(-0.556938f, 0.309184f, 0.770860f);
	glTexCoord2f(0.400000f, 0.600000f);
	glVertex3f(-0.558017f, 0.310017f, 0.768421f);
	glNormal3f(-0.291470f, 0.309184f, 0.905235f);
	glTexCoord2f(0.450000f, 0.600000f);
	glVertex3f(-0.292893f, 0.310017f, 0.903509f);
	// Polygon # 117
	glNormal3f(-0.471510f, 0.588011f, 0.657208f);
	glTexCoord2f(0.400000f, 0.700000f);
	glVertex3f(-0.474528f, 0.588785f, 0.653509f);
	glNormal3f(-0.291470f, 0.309184f, 0.905235f);
	glTexCoord2f(0.450000f, 0.600000f);
	glVertex3f(-0.292893f, 0.310017f, 0.903509f);
	glNormal3f(-0.245344f, 0.588011f, 0.770746f);
	glTexCoord2f(0.450000f, 0.700000f);
	glVertex3f(-0.249000f, 0.588785f, 0.768421f);
	// Polygon # 118
	glNormal3f(-0.245344f, 0.588011f, 0.770746f);
	glTexCoord2f(0.450000f, 0.700000f);
	glVertex3f(-0.249000f, 0.588785f, 0.768421f);
	glNormal3f(-0.291470f, 0.309184f, 0.905235f);
	glTexCoord2f(0.450000f, 0.600000f);
	glVertex3f(-0.292893f, 0.310017f, 0.903509f);
	glNormal3f(0.00252810f, 0.309184f, 0.950999f);
	glTexCoord2f(0.500000f, 0.600000f);
	glVertex3f(0.00100012f, 0.310017f, 0.950057f);
	// Polygon # 119
	glNormal3f(-0.245344f, 0.588011f, 0.770746f);
	glTexCoord2f(0.450000f, 0.700000f);
	glVertex3f(-0.249000f, 0.588785f, 0.768421f);
	glNormal3f(0.00252810f, 0.309184f, 0.950999f);
	glTexCoord2f(0.500000f, 0.600000f);
	glVertex3f(0.00100012f, 0.310017f, 0.950057f);
	glNormal3f(0.00483757f, 0.588011f, 0.808839f);
	glTexCoord2f(0.500000f, 0.700000f);
	glVertex3f(0.00100011f, 0.588785f, 0.808017f);
	// Polygon # 120
	glNormal3f(0.00483757f, 0.588011f, 0.808839f);
	glTexCoord2f(0.500000f, 0.700000f);
	glVertex3f(0.00100011f, 0.588785f, 0.808017f);
	glNormal3f(0.00252810f, 0.309184f, 0.950999f);
	glTexCoord2f(0.500000f, 0.600000f);
	glVertex3f(0.00100012f, 0.310017f, 0.950057f);
	glNormal3f(0.296279f, 0.309184f, 0.903673f);
	glTexCoord2f(0.550000f, 0.600000f);
	glVertex3f(0.294893f, 0.310017f, 0.903508f);
	// Polygon # 121
	glNormal3f(0.00483757f, 0.588011f, 0.808839f);
	glTexCoord2f(0.500000f, 0.700000f);
	glVertex3f(0.00100011f, 0.588785f, 0.808017f);
	glNormal3f(0.296279f, 0.309184f, 0.903673f);
	glTexCoord2f(0.550000f, 0.600000f);
	glVertex3f(0.294893f, 0.310017f, 0.903508f);
	glNormal3f(0.254546f, 0.588011f, 0.767756f);
	glTexCoord2f(0.550000f, 0.700000f);
	glVertex3f(0.251000f, 0.588785f, 0.768421f);
	// Polygon # 122
	glNormal3f(0.254546f, 0.588011f, 0.767756f);
	glTexCoord2f(0.550000f, 0.700000f);
	glVertex3f(0.251000f, 0.588785f, 0.768421f);
	glNormal3f(0.296279f, 0.309184f, 0.903673f);
	glTexCoord2f(0.550000f, 0.600000f);
	glVertex3f(0.294893f, 0.310017f, 0.903508f);
	glNormal3f(0.561028f, 0.309184f, 0.767888f);
	glTexCoord2f(0.600000f, 0.600000f);
	glVertex3f(0.560017f, 0.310017f, 0.768421f);
	// Polygon # 123
	glNormal3f(0.254546f, 0.588011f, 0.767756f);
	glTexCoord2f(0.550000f, 0.700000f);
	glVertex3f(0.251000f, 0.588785f, 0.768421f);
	glNormal3f(0.561028f, 0.309184f, 0.767888f);
	glTexCoord2f(0.600000f, 0.600000f);
	glVertex3f(0.560017f, 0.310017f, 0.768421f);
	glNormal3f(0.479337f, 0.588011f, 0.651521f);
	glTexCoord2f(0.600000f, 0.700000f);
	glVertex3f(0.476528f, 0.588785f, 0.653508f);
	// Polygon # 124
	glNormal3f(0.479337f, 0.588011f, 0.651521f);
	glTexCoord2f(0.600000f, 0.700000f);
	glVertex3f(0.476528f, 0.588785f, 0.653508f);
	glNormal3f(0.561028f, 0.309184f, 0.767888f);
	glTexCoord2f(0.600000f, 0.600000f);
	glVertex3f(0.560017f, 0.310017f, 0.768421f);
	glNormal3f(0.770860f, 0.309184f, 0.556938f);
	glTexCoord2f(0.650000f, 0.600000f);
	glVertex3f(0.770421f, 0.310017f, 0.558017f);
	// Polygon # 125
	glNormal3f(0.479337f, 0.588011f, 0.651521f);
	glTexCoord2f(0.600000f, 0.700000f);
	glVertex3f(0.476528f, 0.588785f, 0.653508f);
	glNormal3f(0.770860f, 0.309184f, 0.556938f);
	glTexCoord2f(0.650000f, 0.600000f);
	glVertex3f(0.770421f, 0.310017f, 0.558017f);
	glNormal3f(0.657208f, 0.588011f, 0.471510f);
	glTexCoord2f(0.650000f, 0.700000f);
	glVertex3f(0.655509f, 0.588785f, 0.474528f);
	// Polygon # 126
	glNormal3f(0.657208f, 0.588011f, 0.471510f);
	glTexCoord2f(0.650000f, 0.700000f);
	glVertex3f(0.655509f, 0.588785f, 0.474528f);
	glNormal3f(0.770860f, 0.309184f, 0.556938f);
	glTexCoord2f(0.650000f, 0.600000f);
	glVertex3f(0.770421f, 0.310017f, 0.558017f);
	glNormal3f(0.905235f, 0.309184f, 0.291470f);
	glTexCoord2f(0.700000f, 0.600000f);
	glVertex3f(0.905509f, 0.310017f, 0.292892f);
	// Polygon # 127
	glNormal3f(0.657208f, 0.588011f, 0.471510f);
	glTexCoord2f(0.650000f, 0.700000f);
	glVertex3f(0.655509f, 0.588785f, 0.474528f);
	glNormal3f(0.905235f, 0.309184f, 0.291470f);
	glTexCoord2f(0.700000f, 0.600000f);
	glVertex3f(0.905509f, 0.310017f, 0.292892f);
	glNormal3f(0.770746f, 0.588011f, 0.245344f);
	glTexCoord2f(0.700000f, 0.700000f);
	glVertex3f(0.770421f, 0.588785f, 0.249000f);
	// Polygon # 128
	glNormal3f(0.770746f, 0.588011f, 0.245344f);
	glTexCoord2f(0.700000f, 0.700000f);
	glVertex3f(0.770421f, 0.588785f, 0.249000f);
	glNormal3f(0.905235f, 0.309184f, 0.291470f);
	glTexCoord2f(0.700000f, 0.600000f);
	glVertex3f(0.905509f, 0.310017f, 0.292892f);
	glNormal3f(0.950999f, 0.309184f, -0.00252821f);
	glTexCoord2f(0.750000f, 0.600000f);
	glVertex3f(0.952057f, 0.310017f, -0.00100017f);
	// Polygon # 129
	glNormal3f(0.770746f, 0.588011f, 0.245344f);
	glTexCoord2f(0.700000f, 0.700000f);
	glVertex3f(0.770421f, 0.588785f, 0.249000f);
	glNormal3f(0.950999f, 0.309184f, -0.00252821f);
	glTexCoord2f(0.750000f, 0.600000f);
	glVertex3f(0.952057f, 0.310017f, -0.00100017f);
	glNormal3f(0.808839f, 0.588011f, -0.00483757f);
	glTexCoord2f(0.750000f, 0.700000f);
	glVertex3f(0.810017f, 0.588785f, -0.00100014f);
	// Polygon # 130
	glNormal3f(0.808839f, 0.588011f, -0.00483757f);
	glTexCoord2f(0.750000f, 0.700000f);
	glVertex3f(0.810017f, 0.588785f, -0.00100014f);
	glNormal3f(0.950999f, 0.309184f, -0.00252821f);
	glTexCoord2f(0.750000f, 0.600000f);
	glVertex3f(0.952057f, 0.310017f, -0.00100017f);
	glNormal3f(0.903672f, 0.309184f, -0.296279f);
	glTexCoord2f(0.800000f, 0.600000f);
	glVertex3f(0.905508f, 0.310017f, -0.294893f);
	// Polygon # 131
	glNormal3f(0.808839f, 0.588011f, -0.00483757f);
	glTexCoord2f(0.750000f, 0.700000f);
	glVertex3f(0.810017f, 0.588785f, -0.00100014f);
	glNormal3f(0.903672f, 0.309184f, -0.296279f);
	glTexCoord2f(0.800000f, 0.600000f);
	glVertex3f(0.905508f, 0.310017f, -0.294893f);
	glNormal3f(0.767756f, 0.588011f, -0.254546f);
	glTexCoord2f(0.800000f, 0.700000f);
	glVertex3f(0.770421f, 0.588785f, -0.251000f);
	// Polygon # 132
	glNormal3f(0.767756f, 0.588011f, -0.254546f);
	glTexCoord2f(0.800000f, 0.700000f);
	glVertex3f(0.770421f, 0.588785f, -0.251000f);
	glNormal3f(0.903672f, 0.309184f, -0.296279f);
	glTexCoord2f(0.800000f, 0.600000f);
	glVertex3f(0.905508f, 0.310017f, -0.294893f);
	glNormal3f(0.767888f, 0.309184f, -0.561028f);
	glTexCoord2f(0.850000f, 0.600000f);
	glVertex3f(0.770421f, 0.310017f, -0.560017f);
	// Polygon # 133
	glNormal3f(0.767756f, 0.588011f, -0.254546f);
	glTexCoord2f(0.800000f, 0.700000f);
	glVertex3f(0.770421f, 0.588785f, -0.251000f);
	glNormal3f(0.767888f, 0.309184f, -0.561028f);
	glTexCoord2f(0.850000f, 0.600000f);
	glVertex3f(0.770421f, 0.310017f, -0.560017f);
	glNormal3f(0.651521f, 0.588011f, -0.479337f);
	glTexCoord2f(0.850000f, 0.700000f);
	glVertex3f(0.655508f, 0.588785f, -0.476528f);
	// Polygon # 134
	glNormal3f(0.651521f, 0.588011f, -0.479337f);
	glTexCoord2f(0.850000f, 0.700000f);
	glVertex3f(0.655508f, 0.588785f, -0.476528f);
	glNormal3f(0.767888f, 0.309184f, -0.561028f);
	glTexCoord2f(0.850000f, 0.600000f);
	glVertex3f(0.770421f, 0.310017f, -0.560017f);
	glNormal3f(0.556938f, 0.309184f, -0.770860f);
	glTexCoord2f(0.900000f, 0.600000f);
	glVertex3f(0.560017f, 0.310017f, -0.770421f);
	// Polygon # 135
	glNormal3f(0.651521f, 0.588011f, -0.479337f);
	glTexCoord2f(0.850000f, 0.700000f);
	glVertex3f(0.655508f, 0.588785f, -0.476528f);
	glNormal3f(0.556938f, 0.309184f, -0.770860f);
	glTexCoord2f(0.900000f, 0.600000f);
	glVertex3f(0.560017f, 0.310017f, -0.770421f);
	glNormal3f(0.471510f, 0.588011f, -0.657208f);
	glTexCoord2f(0.900000f, 0.700000f);
	glVertex3f(0.476528f, 0.588785f, -0.655509f);
	// Polygon # 136
	glNormal3f(0.471510f, 0.588011f, -0.657208f);
	glTexCoord2f(0.900000f, 0.700000f);
	glVertex3f(0.476528f, 0.588785f, -0.655509f);
	glNormal3f(0.556938f, 0.309184f, -0.770860f);
	glTexCoord2f(0.900000f, 0.600000f);
	glVertex3f(0.560017f, 0.310017f, -0.770421f);
	glNormal3f(0.291470f, 0.309184f, -0.905235f);
	glTexCoord2f(0.950000f, 0.600000f);
	glVertex3f(0.294892f, 0.310017f, -0.905509f);
	// Polygon # 137
	glNormal3f(0.471510f, 0.588011f, -0.657208f);
	glTexCoord2f(0.900000f, 0.700000f);
	glVertex3f(0.476528f, 0.588785f, -0.655509f);
	glNormal3f(0.291470f, 0.309184f, -0.905235f);
	glTexCoord2f(0.950000f, 0.600000f);
	glVertex3f(0.294892f, 0.310017f, -0.905509f);
	glNormal3f(0.245344f, 0.588011f, -0.770746f);
	glTexCoord2f(0.950000f, 0.700000f);
	glVertex3f(0.251000f, 0.588785f, -0.770421f);
	// Polygon # 138
	glNormal3f(0.245344f, 0.588011f, -0.770746f);
	glTexCoord2f(0.950000f, 0.700000f);
	glVertex3f(0.251000f, 0.588785f, -0.770421f);
	glNormal3f(0.291470f, 0.309184f, -0.905235f);
	glTexCoord2f(0.950000f, 0.600000f);
	glVertex3f(0.294892f, 0.310017f, -0.905509f);
	glNormal3f(0.139737f, 0.449536f, -0.882264f);
	glTexCoord2f(1.00000f, 0.600000f);
	glVertex3f(0.000999958f, 0.310017f, -0.952057f);
	// Polygon # 139
	glNormal3f(0.245344f, 0.588011f, -0.770746f);
	glTexCoord2f(0.950000f, 0.700000f);
	glVertex3f(0.251000f, 0.588785f, -0.770421f);
	glNormal3f(0.139737f, 0.449536f, -0.882264f);
	glTexCoord2f(1.00000f, 0.600000f);
	glVertex3f(0.000999958f, 0.310017f, -0.952057f);
	glNormal3f(0.139737f, 0.449536f, -0.882264f);
	glTexCoord2f(1.00000f, 0.700000f);
	glVertex3f(0.000999965f, 0.588785f, -0.810017f);
	// Polygon # 140
	glNormal3f(-0.151237f, 0.255623f, -0.954874f);
	glTexCoord2f(-5.96046e-008f, 0.600000f);
	glVertex3f(0.000999958f, 0.310017f, -0.952057f);
	glNormal3f(-0.156222f, -0.0520741f, -0.986348f);
	glTexCoord2f(-5.96046e-008f, 0.500000f);
	glVertex3f(0.000999956f, 0.000999956f, -1.00100f);
	glNormal3f(-0.309017f, -7.12618e-008f, -0.951056f);
	glTexCoord2f(0.0500000f, 0.500000f);
	glVertex3f(-0.308017f, 0.000999956f, -0.952056f);
	// Polygon # 141
	glNormal3f(-0.151237f, 0.255623f, -0.954874f);
	glTexCoord2f(-5.96046e-008f, 0.600000f);
	glVertex3f(0.000999958f, 0.310017f, -0.952057f);
	glNormal3f(-0.309017f, -7.12618e-008f, -0.951056f);
	glTexCoord2f(0.0500000f, 0.500000f);
	glVertex3f(-0.308017f, 0.000999956f, -0.952056f);
	glNormal3f(-0.296279f, 0.309184f, -0.903673f);
	glTexCoord2f(0.0500000f, 0.600000f);
	glVertex3f(-0.292893f, 0.310017f, -0.905509f);
	// Polygon # 142
	glNormal3f(-0.296279f, 0.309184f, -0.903673f);
	glTexCoord2f(0.0500000f, 0.600000f);
	glVertex3f(-0.292893f, 0.310017f, -0.905509f);
	glNormal3f(-0.309017f, -7.12618e-008f, -0.951056f);
	glTexCoord2f(0.0500000f, 0.500000f);
	glVertex3f(-0.308017f, 0.000999956f, -0.952056f);
	glNormal3f(-0.587785f, -1.27253e-007f, -0.809017f);
	glTexCoord2f(0.100000f, 0.500000f);
	glVertex3f(-0.586785f, 0.000999956f, -0.810017f);
	// Polygon # 143
	glNormal3f(-0.296279f, 0.309184f, -0.903673f);
	glTexCoord2f(0.0500000f, 0.600000f);
	glVertex3f(-0.292893f, 0.310017f, -0.905509f);
	glNormal3f(-0.587785f, -1.27253e-007f, -0.809017f);
	glTexCoord2f(0.100000f, 0.500000f);
	glVertex3f(-0.586785f, 0.000999956f, -0.810017f);
	glNormal3f(-0.561028f, 0.309184f, -0.767888f);
	glTexCoord2f(0.100000f, 0.600000f);
	glVertex3f(-0.558017f, 0.310017f, -0.770421f);
	// Polygon # 144
	glNormal3f(-0.561028f, 0.309184f, -0.767888f);
	glTexCoord2f(0.100000f, 0.600000f);
	glVertex3f(-0.558017f, 0.310017f, -0.770421f);
	glNormal3f(-0.587785f, -1.27253e-007f, -0.809017f);
	glTexCoord2f(0.100000f, 0.500000f);
	glVertex3f(-0.586785f, 0.000999956f, -0.810017f);
	glNormal3f(-0.809017f, -4.32661e-008f, -0.587785f);
	glTexCoord2f(0.150000f, 0.500000f);
	glVertex3f(-0.808017f, 0.000999956f, -0.588785f);
	// Polygon # 145
	glNormal3f(-0.561028f, 0.309184f, -0.767888f);
	glTexCoord2f(0.100000f, 0.600000f);
	glVertex3f(-0.558017f, 0.310017f, -0.770421f);
	glNormal3f(-0.809017f, -4.32661e-008f, -0.587785f);
	glTexCoord2f(0.150000f, 0.500000f);
	glVertex3f(-0.808017f, 0.000999956f, -0.588785f);
	glNormal3f(-0.770860f, 0.309184f, -0.556938f);
	glTexCoord2f(0.150000f, 0.600000f);
	glVertex3f(-0.768421f, 0.310017f, -0.560017f);
	// Polygon # 146
	glNormal3f(-0.770860f, 0.309184f, -0.556938f);
	glTexCoord2f(0.150000f, 0.600000f);
	glVertex3f(-0.768421f, 0.310017f, -0.560017f);
	glNormal3f(-0.809017f, -4.32661e-008f, -0.587785f);
	glTexCoord2f(0.150000f, 0.500000f);
	glVertex3f(-0.808017f, 0.000999956f, -0.588785f);
	glNormal3f(-0.951057f, -7.38069e-008f, -0.309017f);
	glTexCoord2f(0.200000f, 0.500000f);
	glVertex3f(-0.950057f, 0.000999956f, -0.310017f);
	// Polygon # 147
	glNormal3f(-0.770860f, 0.309184f, -0.556938f);
	glTexCoord2f(0.150000f, 0.600000f);
	glVertex3f(-0.768421f, 0.310017f, -0.560017f);
	glNormal3f(-0.951057f, -7.38069e-008f, -0.309017f);
	glTexCoord2f(0.200000f, 0.500000f);
	glVertex3f(-0.950057f, 0.000999956f, -0.310017f);
	glNormal3f(-0.905235f, 0.309184f, -0.291471f);
	glTexCoord2f(0.200000f, 0.600000f);
	glVertex3f(-0.903509f, 0.310017f, -0.294893f);
	// Polygon # 148
	glNormal3f(-0.905235f, 0.309184f, -0.291471f);
	glTexCoord2f(0.200000f, 0.600000f);
	glVertex3f(-0.903509f, 0.310017f, -0.294893f);
	glNormal3f(-0.951057f, -7.38069e-008f, -0.309017f);
	glTexCoord2f(0.200000f, 0.500000f);
	glVertex3f(-0.950057f, 0.000999956f, -0.310017f);
	glNormal3f(-1.00000f, -9.16223e-008f, 8.90773e-008f);
	glTexCoord2f(0.250000f, 0.500000f);
	glVertex3f(-0.999000f, 0.000999956f, -0.000999913f);
	// Polygon # 149
	glNormal3f(-0.905235f, 0.309184f, -0.291471f);
	glTexCoord2f(0.200000f, 0.600000f);
	glVertex3f(-0.903509f, 0.310017f, -0.294893f);
	glNormal3f(-1.00000f, -9.16223e-008f, 8.90773e-008f);
	glTexCoord2f(0.250000f, 0.500000f);
	glVertex3f(-0.999000f, 0.000999956f, -0.000999913f);
	glNormal3f(-0.950999f, 0.309184f, 0.00252809f);
	glTexCoord2f(0.250000f, 0.600000f);
	glVertex3f(-0.950057f, 0.310017f, -0.000999917f);
	// Polygon # 150
	glNormal3f(-0.950999f, 0.309184f, 0.00252809f);
	glTexCoord2f(0.250000f, 0.600000f);
	glVertex3f(-0.950057f, 0.310017f, -0.000999917f);
	glNormal3f(-1.00000f, -9.16223e-008f, 8.90773e-008f);
	glTexCoord2f(0.250000f, 0.500000f);
	glVertex3f(-0.999000f, 0.000999956f, -0.000999913f);
	glNormal3f(-0.951056f, -9.92575e-008f, 0.309017f);
	glTexCoord2f(0.300000f, 0.500000f);
	glVertex3f(-0.950056f, 0.000999956f, 0.308017f);
	// Polygon # 151
	glNormal3f(-0.950999f, 0.309184f, 0.00252809f);
	glTexCoord2f(0.250000f, 0.600000f);
	glVertex3f(-0.950057f, 0.310017f, -0.000999917f);
	glNormal3f(-0.951056f, -9.92575e-008f, 0.309017f);
	glTexCoord2f(0.300000f, 0.500000f);
	glVertex3f(-0.950056f, 0.000999956f, 0.308017f);
	glNormal3f(-0.903673f, 0.309184f, 0.296279f);
	glTexCoord2f(0.300000f, 0.600000f);
	glVertex3f(-0.903508f, 0.310017f, 0.292893f);
	// Polygon # 152
	glNormal3f(-0.903673f, 0.309184f, 0.296279f);
	glTexCoord2f(0.300000f, 0.600000f);
	glVertex3f(-0.903508f, 0.310017f, 0.292893f);
	glNormal3f(-0.951056f, -9.92575e-008f, 0.309017f);
	glTexCoord2f(0.300000f, 0.500000f);
	glVertex3f(-0.950056f, 0.000999956f, 0.308017f);
	glNormal3f(-0.809017f, -7.88970e-008f, 0.587785f);
	glTexCoord2f(0.350000f, 0.500000f);
	glVertex3f(-0.808017f, 0.000999956f, 0.586785f);
	// Polygon # 153
	glNormal3f(-0.903673f, 0.309184f, 0.296279f);
	glTexCoord2f(0.300000f, 0.600000f);
	glVertex3f(-0.903508f, 0.310017f, 0.292893f);
	glNormal3f(-0.809017f, -7.88970e-008f, 0.587785f);
	glTexCoord2f(0.350000f, 0.500000f);
	glVertex3f(-0.808017f, 0.000999956f, 0.586785f);
	glNormal3f(-0.767888f, 0.309184f, 0.561028f);
	glTexCoord2f(0.350000f, 0.600000f);
	glVertex3f(-0.768421f, 0.310017f, 0.558017f);
	// Polygon # 154
	glNormal3f(-0.767888f, 0.309184f, 0.561028f);
	glTexCoord2f(0.350000f, 0.600000f);
	glVertex3f(-0.768421f, 0.310017f, 0.558017f);
	glNormal3f(-0.809017f, -7.88970e-008f, 0.587785f);
	glTexCoord2f(0.350000f, 0.500000f);
	glVertex3f(-0.808017f, 0.000999956f, 0.586785f);
	glNormal3f(-0.587785f, -1.17073e-007f, 0.809017f);
	glTexCoord2f(0.400000f, 0.500000f);
	glVertex3f(-0.586785f, 0.000999956f, 0.808017f);
	// Polygon # 155
	glNormal3f(-0.767888f, 0.309184f, 0.561028f);
	glTexCoord2f(0.350000f, 0.600000f);
	glVertex3f(-0.768421f, 0.310017f, 0.558017f);
	glNormal3f(-0.587785f, -1.17073e-007f, 0.809017f);
	glTexCoord2f(0.400000f, 0.500000f);
	glVertex3f(-0.586785f, 0.000999956f, 0.808017f);
	glNormal3f(-0.556938f, 0.309184f, 0.770860f);
	glTexCoord2f(0.400000f, 0.600000f);
	glVertex3f(-0.558017f, 0.310017f, 0.768421f);
	// Polygon # 156
	glNormal3f(-0.556938f, 0.309184f, 0.770860f);
	glTexCoord2f(0.400000f, 0.600000f);
	glVertex3f(-0.558017f, 0.310017f, 0.768421f);
	glNormal3f(-0.587785f, -1.17073e-007f, 0.809017f);
	glTexCoord2f(0.400000f, 0.500000f);
	glVertex3f(-0.586785f, 0.000999956f, 0.808017f);
	glNormal3f(-0.309017f, -1.01803e-007f, 0.951057f);
	glTexCoord2f(0.450000f, 0.500000f);
	glVertex3f(-0.308017f, 0.000999956f, 0.950057f);
	// Polygon # 157
	glNormal3f(-0.556938f, 0.309184f, 0.770860f);
	glTexCoord2f(0.400000f, 0.600000f);
	glVertex3f(-0.558017f, 0.310017f, 0.768421f);
	glNormal3f(-0.309017f, -1.01803e-007f, 0.951057f);
	glTexCoord2f(0.450000f, 0.500000f);
	glVertex3f(-0.308017f, 0.000999956f, 0.950057f);
	glNormal3f(-0.291470f, 0.309184f, 0.905235f);
	glTexCoord2f(0.450000f, 0.600000f);
	glVertex3f(-0.292893f, 0.310017f, 0.903509f);
	// Polygon # 158
	glNormal3f(-0.291470f, 0.309184f, 0.905235f);
	glTexCoord2f(0.450000f, 0.600000f);
	glVertex3f(-0.292893f, 0.310017f, 0.903509f);
	glNormal3f(-0.309017f, -1.01803e-007f, 0.951057f);
	glTexCoord2f(0.450000f, 0.500000f);
	glVertex3f(-0.308017f, 0.000999956f, 0.950057f);
	glNormal3f(1.11983e-007f, -9.16223e-008f, 1.00000f);
	glTexCoord2f(0.500000f, 0.500000f);
	glVertex3f(0.00100013f, 0.000999956f, 0.999000f);
	// Polygon # 159
	glNormal3f(-0.291470f, 0.309184f, 0.905235f);
	glTexCoord2f(0.450000f, 0.600000f);
	glVertex3f(-0.292893f, 0.310017f, 0.903509f);
	glNormal3f(1.11983e-007f, -9.16223e-008f, 1.00000f);
	glTexCoord2f(0.500000f, 0.500000f);
	glVertex3f(0.00100013f, 0.000999956f, 0.999000f);
	glNormal3f(0.00252810f, 0.309184f, 0.950999f);
	glTexCoord2f(0.500000f, 0.600000f);
	glVertex3f(0.00100012f, 0.310017f, 0.950057f);
	// Polygon # 160
	glNormal3f(0.00252810f, 0.309184f, 0.950999f);
	glTexCoord2f(0.500000f, 0.600000f);
	glVertex3f(0.00100012f, 0.310017f, 0.950057f);
	glNormal3f(1.11983e-007f, -9.16223e-008f, 1.00000f);
	glTexCoord2f(0.500000f, 0.500000f);
	glVertex3f(0.00100013f, 0.000999956f, 0.999000f);
	glNormal3f(0.309017f, -1.06893e-007f, 0.951056f);
	glTexCoord2f(0.550000f, 0.500000f);
	glVertex3f(0.310017f, 0.000999956f, 0.950056f);
	// Polygon # 161
	glNormal3f(0.00252810f, 0.309184f, 0.950999f);
	glTexCoord2f(0.500000f, 0.600000f);
	glVertex3f(0.00100012f, 0.310017f, 0.950057f);
	glNormal3f(0.309017f, -1.06893e-007f, 0.951056f);
	glTexCoord2f(0.550000f, 0.500000f);
	glVertex3f(0.310017f, 0.000999956f, 0.950056f);
	glNormal3f(0.296279f, 0.309184f, 0.903673f);
	glTexCoord2f(0.550000f, 0.600000f);
	glVertex3f(0.294893f, 0.310017f, 0.903508f);
	// Polygon # 162
	glNormal3f(0.296279f, 0.309184f, 0.903673f);
	glTexCoord2f(0.550000f, 0.600000f);
	glVertex3f(0.294893f, 0.310017f, 0.903508f);
	glNormal3f(0.309017f, -1.06893e-007f, 0.951056f);
	glTexCoord2f(0.550000f, 0.500000f);
	glVertex3f(0.310017f, 0.000999956f, 0.950056f);
	glNormal3f(0.587785f, -1.19618e-007f, 0.809017f);
	glTexCoord2f(0.600000f, 0.500000f);
	glVertex3f(0.588785f, 0.000999956f, 0.808017f);
	// Polygon # 163
	glNormal3f(0.296279f, 0.309184f, 0.903673f);
	glTexCoord2f(0.550000f, 0.600000f);
	glVertex3f(0.294893f, 0.310017f, 0.903508f);
	glNormal3f(0.587785f, -1.19618e-007f, 0.809017f);
	glTexCoord2f(0.600000f, 0.500000f);
	glVertex3f(0.588785f, 0.000999956f, 0.808017f);
	glNormal3f(0.561028f, 0.309184f, 0.767888f);
	glTexCoord2f(0.600000f, 0.600000f);
	glVertex3f(0.560017f, 0.310017f, 0.768421f);
	// Polygon # 164
	glNormal3f(0.561028f, 0.309184f, 0.767888f);
	glTexCoord2f(0.600000f, 0.600000f);
	glVertex3f(0.560017f, 0.310017f, 0.768421f);
	glNormal3f(0.587785f, -1.19618e-007f, 0.809017f);
	glTexCoord2f(0.600000f, 0.500000f);
	glVertex3f(0.588785f, 0.000999956f, 0.808017f);
	glNormal3f(0.809017f, -9.67125e-008f, 0.587785f);
	glTexCoord2f(0.650000f, 0.500000f);
	glVertex3f(0.810017f, 0.000999956f, 0.586785f);
	// Polygon # 165
	glNormal3f(0.561028f, 0.309184f, 0.767888f);
	glTexCoord2f(0.600000f, 0.600000f);
	glVertex3f(0.560017f, 0.310017f, 0.768421f);
	glNormal3f(0.809017f, -9.67125e-008f, 0.587785f);
	glTexCoord2f(0.650000f, 0.500000f);
	glVertex3f(0.810017f, 0.000999956f, 0.586785f);
	glNormal3f(0.770860f, 0.309184f, 0.556938f);
	glTexCoord2f(0.650000f, 0.600000f);
	glVertex3f(0.770421f, 0.310017f, 0.558017f);
	// Polygon # 166
	glNormal3f(0.770860f, 0.309184f, 0.556938f);
	glTexCoord2f(0.650000f, 0.600000f);
	glVertex3f(0.770421f, 0.310017f, 0.558017f);
	glNormal3f(0.809017f, -9.67125e-008f, 0.587785f);
	glTexCoord2f(0.650000f, 0.500000f);
	glVertex3f(0.810017f, 0.000999956f, 0.586785f);
	glNormal3f(0.951057f, -1.29798e-007f, 0.309017f);
	glTexCoord2f(0.700000f, 0.500000f);
	glVertex3f(0.952057f, 0.000999956f, 0.308017f);
	// Polygon # 167
	glNormal3f(0.770860f, 0.309184f, 0.556938f);
	glTexCoord2f(0.650000f, 0.600000f);
	glVertex3f(0.770421f, 0.310017f, 0.558017f);
	glNormal3f(0.951057f, -1.29798e-007f, 0.309017f);
	glTexCoord2f(0.700000f, 0.500000f);
	glVertex3f(0.952057f, 0.000999956f, 0.308017f);
	glNormal3f(0.905235f, 0.309184f, 0.291470f);
	glTexCoord2f(0.700000f, 0.600000f);
	glVertex3f(0.905509f, 0.310017f, 0.292892f);
	// Polygon # 168
	glNormal3f(0.905235f, 0.309184f, 0.291470f);
	glTexCoord2f(0.700000f, 0.600000f);
	glVertex3f(0.905509f, 0.310017f, 0.292892f);
	glNormal3f(0.951057f, -1.29798e-007f, 0.309017f);
	glTexCoord2f(0.700000f, 0.500000f);
	glVertex3f(0.952057f, 0.000999956f, 0.308017f);
	glNormal3f(1.00000f, -1.32343e-007f, -1.34888e-007f);
	glTexCoord2f(0.750000f, 0.500000f);
	glVertex3f(1.00100f, 0.000999956f, -0.00100017f);
	// Polygon # 169
	glNormal3f(0.905235f, 0.309184f, 0.291470f);
	glTexCoord2f(0.700000f, 0.600000f);
	glVertex3f(0.905509f, 0.310017f, 0.292892f);
	glNormal3f(1.00000f, -1.32343e-007f, -1.34888e-007f);
	glTexCoord2f(0.750000f, 0.500000f);
	glVertex3f(1.00100f, 0.000999956f, -0.00100017f);
	glNormal3f(0.950999f, 0.309184f, -0.00252821f);
	glTexCoord2f(0.750000f, 0.600000f);
	glVertex3f(0.952057f, 0.310017f, -0.00100017f);
	// Polygon # 170
	glNormal3f(0.950999f, 0.309184f, -0.00252821f);
	glTexCoord2f(0.750000f, 0.600000f);
	glVertex3f(0.952057f, 0.310017f, -0.00100017f);
	glNormal3f(1.00000f, -1.32343e-007f, -1.34888e-007f);
	glTexCoord2f(0.750000f, 0.500000f);
	glVertex3f(1.00100f, 0.000999956f, -0.00100017f);
	glNormal3f(0.951056f, -7.88970e-008f, -0.309017f);
	glTexCoord2f(0.800000f, 0.500000f);
	glVertex3f(0.952056f, 0.000999956f, -0.310017f);
	// Polygon # 171
	glNormal3f(0.950999f, 0.309184f, -0.00252821f);
	glTexCoord2f(0.750000f, 0.600000f);
	glVertex3f(0.952057f, 0.310017f, -0.00100017f);
	glNormal3f(0.951056f, -7.88970e-008f, -0.309017f);
	glTexCoord2f(0.800000f, 0.500000f);
	glVertex3f(0.952056f, 0.000999956f, -0.310017f);
	glNormal3f(0.903672f, 0.309184f, -0.296279f);
	glTexCoord2f(0.800000f, 0.600000f);
	glVertex3f(0.905508f, 0.310017f, -0.294893f);
	// Polygon # 172
	glNormal3f(0.903672f, 0.309184f, -0.296279f);
	glTexCoord2f(0.800000f, 0.600000f);
	glVertex3f(0.905508f, 0.310017f, -0.294893f);
	glNormal3f(0.951056f, -7.88970e-008f, -0.309017f);
	glTexCoord2f(0.800000f, 0.500000f);
	glVertex3f(0.952056f, 0.000999956f, -0.310017f);
	glNormal3f(0.809017f, -9.67125e-008f, -0.587785f);
	glTexCoord2f(0.850000f, 0.500000f);
	glVertex3f(0.810017f, 0.000999956f, -0.588785f);
	// Polygon # 173
	glNormal3f(0.903672f, 0.309184f, -0.296279f);
	glTexCoord2f(0.800000f, 0.600000f);
	glVertex3f(0.905508f, 0.310017f, -0.294893f);
	glNormal3f(0.809017f, -9.67125e-008f, -0.587785f);
	glTexCoord2f(0.850000f, 0.500000f);
	glVertex3f(0.810017f, 0.000999956f, -0.588785f);
	glNormal3f(0.767888f, 0.309184f, -0.561028f);
	glTexCoord2f(0.850000f, 0.600000f);
	glVertex3f(0.770421f, 0.310017f, -0.560017f);
	// Polygon # 174
	glNormal3f(0.767888f, 0.309184f, -0.561028f);
	glTexCoord2f(0.850000f, 0.600000f);
	glVertex3f(0.770421f, 0.310017f, -0.560017f);
	glNormal3f(0.809017f, -9.67125e-008f, -0.587785f);
	glTexCoord2f(0.850000f, 0.500000f);
	glVertex3f(0.810017f, 0.000999956f, -0.588785f);
	glNormal3f(0.587785f, -1.32343e-007f, -0.809017f);
	glTexCoord2f(0.900000f, 0.500000f);
	glVertex3f(0.588785f, 0.000999956f, -0.810017f);
	// Polygon # 175
	glNormal3f(0.767888f, 0.309184f, -0.561028f);
	glTexCoord2f(0.850000f, 0.600000f);
	glVertex3f(0.770421f, 0.310017f, -0.560017f);
	glNormal3f(0.587785f, -1.32343e-007f, -0.809017f);
	glTexCoord2f(0.900000f, 0.500000f);
	glVertex3f(0.588785f, 0.000999956f, -0.810017f);
	glNormal3f(0.556938f, 0.309184f, -0.770860f);
	glTexCoord2f(0.900000f, 0.600000f);
	glVertex3f(0.560017f, 0.310017f, -0.770421f);
	// Polygon # 176
	glNormal3f(0.556938f, 0.309184f, -0.770860f);
	glTexCoord2f(0.900000f, 0.600000f);
	glVertex3f(0.560017f, 0.310017f, -0.770421f);
	glNormal3f(0.587785f, -1.32343e-007f, -0.809017f);
	glTexCoord2f(0.900000f, 0.500000f);
	glVertex3f(0.588785f, 0.000999956f, -0.810017f);
	glNormal3f(0.309017f, -1.42524e-007f, -0.951057f);
	glTexCoord2f(0.950000f, 0.500000f);
	glVertex3f(0.310017f, 0.000999956f, -0.952057f);
	// Polygon # 177
	glNormal3f(0.556938f, 0.309184f, -0.770860f);
	glTexCoord2f(0.900000f, 0.600000f);
	glVertex3f(0.560017f, 0.310017f, -0.770421f);
	glNormal3f(0.309017f, -1.42524e-007f, -0.951057f);
	glTexCoord2f(0.950000f, 0.500000f);
	glVertex3f(0.310017f, 0.000999956f, -0.952057f);
	glNormal3f(0.291470f, 0.309184f, -0.905235f);
	glTexCoord2f(0.950000f, 0.600000f);
	glVertex3f(0.294892f, 0.310017f, -0.905509f);
	// Polygon # 178
	glNormal3f(0.291470f, 0.309184f, -0.905235f);
	glTexCoord2f(0.950000f, 0.600000f);
	glVertex3f(0.294892f, 0.310017f, -0.905509f);
	glNormal3f(0.309017f, -1.42524e-007f, -0.951057f);
	glTexCoord2f(0.950000f, 0.500000f);
	glVertex3f(0.310017f, 0.000999956f, -0.952057f);
	glNormal3f(0.154555f, 0.154555f, -0.975820f);
	glTexCoord2f(1.00000f, 0.500000f);
	glVertex3f(0.000999956f, 0.000999956f, -1.00100f);
	// Polygon # 179
	glNormal3f(0.291470f, 0.309184f, -0.905235f);
	glTexCoord2f(0.950000f, 0.600000f);
	glVertex3f(0.294892f, 0.310017f, -0.905509f);
	glNormal3f(0.154555f, 0.154555f, -0.975820f);
	glTexCoord2f(1.00000f, 0.500000f);
	glVertex3f(0.000999956f, 0.000999956f, -1.00100f);
	glNormal3f(0.154555f, 0.154555f, -0.975820f);
	glTexCoord2f(1.00000f, 0.600000f);
	glVertex3f(0.000999958f, 0.310017f, -0.952057f);
	// Polygon # 180
	glNormal3f(-0.156222f, -0.0520741f, -0.986348f);
	glTexCoord2f(-5.96046e-008f, 0.500000f);
	glVertex3f(0.000999956f, 0.000999956f, -1.00100f);
	glNormal3f(-0.146244f, -0.355016f, -0.923351f);
	glTexCoord2f(-5.96046e-008f, 0.400000f);
	glVertex3f(0.000999958f, -0.308017f, -0.952056f);
	glNormal3f(-0.291471f, -0.309184f, -0.905235f);
	glTexCoord2f(0.0500000f, 0.400000f);
	glVertex3f(-0.292893f, -0.308017f, -0.905508f);
	// Polygon # 181
	glNormal3f(-0.156222f, -0.0520741f, -0.986348f);
	glTexCoord2f(-5.96046e-008f, 0.500000f);
	glVertex3f(0.000999956f, 0.000999956f, -1.00100f);
	glNormal3f(-0.291471f, -0.309184f, -0.905235f);
	glTexCoord2f(0.0500000f, 0.400000f);
	glVertex3f(-0.292893f, -0.308017f, -0.905508f);
	glNormal3f(-0.309017f, -7.12618e-008f, -0.951056f);
	glTexCoord2f(0.0500000f, 0.500000f);
	glVertex3f(-0.308017f, 0.000999956f, -0.952056f);
	// Polygon # 182
	glNormal3f(-0.309017f, -7.12618e-008f, -0.951056f);
	glTexCoord2f(0.0500000f, 0.500000f);
	glVertex3f(-0.308017f, 0.000999956f, -0.952056f);
	glNormal3f(-0.291471f, -0.309184f, -0.905235f);
	glTexCoord2f(0.0500000f, 0.400000f);
	glVertex3f(-0.292893f, -0.308017f, -0.905508f);
	glNormal3f(-0.556938f, -0.309184f, -0.770860f);
	glTexCoord2f(0.100000f, 0.400000f);
	glVertex3f(-0.558017f, -0.308017f, -0.770421f);
	// Polygon # 183
	glNormal3f(-0.309017f, -7.12618e-008f, -0.951056f);
	glTexCoord2f(0.0500000f, 0.500000f);
	glVertex3f(-0.308017f, 0.000999956f, -0.952056f);
	glNormal3f(-0.556938f, -0.309184f, -0.770860f);
	glTexCoord2f(0.100000f, 0.400000f);
	glVertex3f(-0.558017f, -0.308017f, -0.770421f);
	glNormal3f(-0.587785f, -1.27253e-007f, -0.809017f);
	glTexCoord2f(0.100000f, 0.500000f);
	glVertex3f(-0.586785f, 0.000999956f, -0.810017f);
	// Polygon # 184
	glNormal3f(-0.587785f, -1.27253e-007f, -0.809017f);
	glTexCoord2f(0.100000f, 0.500000f);
	glVertex3f(-0.586785f, 0.000999956f, -0.810017f);
	glNormal3f(-0.556938f, -0.309184f, -0.770860f);
	glTexCoord2f(0.100000f, 0.400000f);
	glVertex3f(-0.558017f, -0.308017f, -0.770421f);
	glNormal3f(-0.767888f, -0.309184f, -0.561028f);
	glTexCoord2f(0.150000f, 0.400000f);
	glVertex3f(-0.768421f, -0.308017f, -0.560017f);
	// Polygon # 185
	glNormal3f(-0.587785f, -1.27253e-007f, -0.809017f);
	glTexCoord2f(0.100000f, 0.500000f);
	glVertex3f(-0.586785f, 0.000999956f, -0.810017f);
	glNormal3f(-0.767888f, -0.309184f, -0.561028f);
	glTexCoord2f(0.150000f, 0.400000f);
	glVertex3f(-0.768421f, -0.308017f, -0.560017f);
	glNormal3f(-0.809017f, -4.32661e-008f, -0.587785f);
	glTexCoord2f(0.150000f, 0.500000f);
	glVertex3f(-0.808017f, 0.000999956f, -0.588785f);
	// Polygon # 186
	glNormal3f(-0.809017f, -4.32661e-008f, -0.587785f);
	glTexCoord2f(0.150000f, 0.500000f);
	glVertex3f(-0.808017f, 0.000999956f, -0.588785f);
	glNormal3f(-0.767888f, -0.309184f, -0.561028f);
	glTexCoord2f(0.150000f, 0.400000f);
	glVertex3f(-0.768421f, -0.308017f, -0.560017f);
	glNormal3f(-0.903673f, -0.309184f, -0.296279f);
	glTexCoord2f(0.200000f, 0.400000f);
	glVertex3f(-0.903508f, -0.308017f, -0.294893f);
	// Polygon # 187
	glNormal3f(-0.809017f, -4.32661e-008f, -0.587785f);
	glTexCoord2f(0.150000f, 0.500000f);
	glVertex3f(-0.808017f, 0.000999956f, -0.588785f);
	glNormal3f(-0.903673f, -0.309184f, -0.296279f);
	glTexCoord2f(0.200000f, 0.400000f);
	glVertex3f(-0.903508f, -0.308017f, -0.294893f);
	glNormal3f(-0.951057f, -7.38069e-008f, -0.309017f);
	glTexCoord2f(0.200000f, 0.500000f);
	glVertex3f(-0.950057f, 0.000999956f, -0.310017f);
	// Polygon # 188
	glNormal3f(-0.951057f, -7.38069e-008f, -0.309017f);
	glTexCoord2f(0.200000f, 0.500000f);
	glVertex3f(-0.950057f, 0.000999956f, -0.310017f);
	glNormal3f(-0.903673f, -0.309184f, -0.296279f);
	glTexCoord2f(0.200000f, 0.400000f);
	glVertex3f(-0.903508f, -0.308017f, -0.294893f);
	glNormal3f(-0.950999f, -0.309184f, -0.00252791f);
	glTexCoord2f(0.250000f, 0.400000f);
	glVertex3f(-0.950056f, -0.308017f, -0.000999917f);
	// Polygon # 189
	glNormal3f(-0.951057f, -7.38069e-008f, -0.309017f);
	glTexCoord2f(0.200000f, 0.500000f);
	glVertex3f(-0.950057f, 0.000999956f, -0.310017f);
	glNormal3f(-0.950999f, -0.309184f, -0.00252791f);
	glTexCoord2f(0.250000f, 0.400000f);
	glVertex3f(-0.950056f, -0.308017f, -0.000999917f);
	glNormal3f(-1.00000f, -9.16223e-008f, 8.90773e-008f);
	glTexCoord2f(0.250000f, 0.500000f);
	glVertex3f(-0.999000f, 0.000999956f, -0.000999913f);
	// Polygon # 190
	glNormal3f(-1.00000f, -9.16223e-008f, 8.90773e-008f);
	glTexCoord2f(0.250000f, 0.500000f);
	glVertex3f(-0.999000f, 0.000999956f, -0.000999913f);
	glNormal3f(-0.950999f, -0.309184f, -0.00252791f);
	glTexCoord2f(0.250000f, 0.400000f);
	glVertex3f(-0.950056f, -0.308017f, -0.000999917f);
	glNormal3f(-0.905235f, -0.309184f, 0.291471f);
	glTexCoord2f(0.300000f, 0.400000f);
	glVertex3f(-0.903508f, -0.308017f, 0.292893f);
	// Polygon # 191
	glNormal3f(-1.00000f, -9.16223e-008f, 8.90773e-008f);
	glTexCoord2f(0.250000f, 0.500000f);
	glVertex3f(-0.999000f, 0.000999956f, -0.000999913f);
	glNormal3f(-0.905235f, -0.309184f, 0.291471f);
	glTexCoord2f(0.300000f, 0.400000f);
	glVertex3f(-0.903508f, -0.308017f, 0.292893f);
	glNormal3f(-0.951056f, -9.92575e-008f, 0.309017f);
	glTexCoord2f(0.300000f, 0.500000f);
	glVertex3f(-0.950056f, 0.000999956f, 0.308017f);
	// Polygon # 192
	glNormal3f(-0.951056f, -9.92575e-008f, 0.309017f);
	glTexCoord2f(0.300000f, 0.500000f);
	glVertex3f(-0.950056f, 0.000999956f, 0.308017f);
	glNormal3f(-0.905235f, -0.309184f, 0.291471f);
	glTexCoord2f(0.300000f, 0.400000f);
	glVertex3f(-0.903508f, -0.308017f, 0.292893f);
	glNormal3f(-0.770860f, -0.309184f, 0.556938f);
	glTexCoord2f(0.350000f, 0.400000f);
	glVertex3f(-0.768421f, -0.308017f, 0.558017f);
	// Polygon # 193
	glNormal3f(-0.951056f, -9.92575e-008f, 0.309017f);
	glTexCoord2f(0.300000f, 0.500000f);
	glVertex3f(-0.950056f, 0.000999956f, 0.308017f);
	glNormal3f(-0.770860f, -0.309184f, 0.556938f);
	glTexCoord2f(0.350000f, 0.400000f);
	glVertex3f(-0.768421f, -0.308017f, 0.558017f);
	glNormal3f(-0.809017f, -7.88970e-008f, 0.587785f);
	glTexCoord2f(0.350000f, 0.500000f);
	glVertex3f(-0.808017f, 0.000999956f, 0.586785f);
	// Polygon # 194
	glNormal3f(-0.809017f, -7.88970e-008f, 0.587785f);
	glTexCoord2f(0.350000f, 0.500000f);
	glVertex3f(-0.808017f, 0.000999956f, 0.586785f);
	glNormal3f(-0.770860f, -0.309184f, 0.556938f);
	glTexCoord2f(0.350000f, 0.400000f);
	glVertex3f(-0.768421f, -0.308017f, 0.558017f);
	glNormal3f(-0.561028f, -0.309184f, 0.767888f);
	glTexCoord2f(0.400000f, 0.400000f);
	glVertex3f(-0.558017f, -0.308017f, 0.768421f);
	// Polygon # 195
	glNormal3f(-0.809017f, -7.88970e-008f, 0.587785f);
	glTexCoord2f(0.350000f, 0.500000f);
	glVertex3f(-0.808017f, 0.000999956f, 0.586785f);
	glNormal3f(-0.561028f, -0.309184f, 0.767888f);
	glTexCoord2f(0.400000f, 0.400000f);
	glVertex3f(-0.558017f, -0.308017f, 0.768421f);
	glNormal3f(-0.587785f, -1.17073e-007f, 0.809017f);
	glTexCoord2f(0.400000f, 0.500000f);
	glVertex3f(-0.586785f, 0.000999956f, 0.808017f);
	// Polygon # 196
	glNormal3f(-0.587785f, -1.17073e-007f, 0.809017f);
	glTexCoord2f(0.400000f, 0.500000f);
	glVertex3f(-0.586785f, 0.000999956f, 0.808017f);
	glNormal3f(-0.561028f, -0.309184f, 0.767888f);
	glTexCoord2f(0.400000f, 0.400000f);
	glVertex3f(-0.558017f, -0.308017f, 0.768421f);
	glNormal3f(-0.296279f, -0.309184f, 0.903673f);
	glTexCoord2f(0.450000f, 0.400000f);
	glVertex3f(-0.292893f, -0.308017f, 0.903508f);
	// Polygon # 197
	glNormal3f(-0.587785f, -1.17073e-007f, 0.809017f);
	glTexCoord2f(0.400000f, 0.500000f);
	glVertex3f(-0.586785f, 0.000999956f, 0.808017f);
	glNormal3f(-0.296279f, -0.309184f, 0.903673f);
	glTexCoord2f(0.450000f, 0.400000f);
	glVertex3f(-0.292893f, -0.308017f, 0.903508f);
	glNormal3f(-0.309017f, -1.01803e-007f, 0.951057f);
	glTexCoord2f(0.450000f, 0.500000f);
	glVertex3f(-0.308017f, 0.000999956f, 0.950057f);
	// Polygon # 198
	glNormal3f(-0.309017f, -1.01803e-007f, 0.951057f);
	glTexCoord2f(0.450000f, 0.500000f);
	glVertex3f(-0.308017f, 0.000999956f, 0.950057f);
	glNormal3f(-0.296279f, -0.309184f, 0.903673f);
	glTexCoord2f(0.450000f, 0.400000f);
	glVertex3f(-0.292893f, -0.308017f, 0.903508f);
	glNormal3f(-0.00252790f, -0.309184f, 0.950999f);
	glTexCoord2f(0.500000f, 0.400000f);
	glVertex3f(0.00100012f, -0.308017f, 0.950056f);
	// Polygon # 199
	glNormal3f(-0.309017f, -1.01803e-007f, 0.951057f);
	glTexCoord2f(0.450000f, 0.500000f);
	glVertex3f(-0.308017f, 0.000999956f, 0.950057f);
	glNormal3f(-0.00252790f, -0.309184f, 0.950999f);
	glTexCoord2f(0.500000f, 0.400000f);
	glVertex3f(0.00100012f, -0.308017f, 0.950056f);
	glNormal3f(1.11983e-007f, -9.16223e-008f, 1.00000f);
	glTexCoord2f(0.500000f, 0.500000f);
	glVertex3f(0.00100013f, 0.000999956f, 0.999000f);
	// Polygon # 200
	glNormal3f(1.11983e-007f, -9.16223e-008f, 1.00000f);
	glTexCoord2f(0.500000f, 0.500000f);
	glVertex3f(0.00100013f, 0.000999956f, 0.999000f);
	glNormal3f(-0.00252790f, -0.309184f, 0.950999f);
	glTexCoord2f(0.500000f, 0.400000f);
	glVertex3f(0.00100012f, -0.308017f, 0.950056f);
	glNormal3f(0.291471f, -0.309184f, 0.905235f);
	glTexCoord2f(0.550000f, 0.400000f);
	glVertex3f(0.294893f, -0.308017f, 0.903508f);
	// Polygon # 201
	glNormal3f(1.11983e-007f, -9.16223e-008f, 1.00000f);
	glTexCoord2f(0.500000f, 0.500000f);
	glVertex3f(0.00100013f, 0.000999956f, 0.999000f);
	glNormal3f(0.291471f, -0.309184f, 0.905235f);
	glTexCoord2f(0.550000f, 0.400000f);
	glVertex3f(0.294893f, -0.308017f, 0.903508f);
	glNormal3f(0.309017f, -1.06893e-007f, 0.951056f);
	glTexCoord2f(0.550000f, 0.500000f);
	glVertex3f(0.310017f, 0.000999956f, 0.950056f);
	// Polygon # 202
	glNormal3f(0.309017f, -1.06893e-007f, 0.951056f);
	glTexCoord2f(0.550000f, 0.500000f);
	glVertex3f(0.310017f, 0.000999956f, 0.950056f);
	glNormal3f(0.291471f, -0.309184f, 0.905235f);
	glTexCoord2f(0.550000f, 0.400000f);
	glVertex3f(0.294893f, -0.308017f, 0.903508f);
	glNormal3f(0.556938f, -0.309184f, 0.770860f);
	glTexCoord2f(0.600000f, 0.400000f);
	glVertex3f(0.560017f, -0.308017f, 0.768421f);
	// Polygon # 203
	glNormal3f(0.309017f, -1.06893e-007f, 0.951056f);
	glTexCoord2f(0.550000f, 0.500000f);
	glVertex3f(0.310017f, 0.000999956f, 0.950056f);
	glNormal3f(0.556938f, -0.309184f, 0.770860f);
	glTexCoord2f(0.600000f, 0.400000f);
	glVertex3f(0.560017f, -0.308017f, 0.768421f);
	glNormal3f(0.587785f, -1.19618e-007f, 0.809017f);
	glTexCoord2f(0.600000f, 0.500000f);
	glVertex3f(0.588785f, 0.000999956f, 0.808017f);
	// Polygon # 204
	glNormal3f(0.587785f, -1.19618e-007f, 0.809017f);
	glTexCoord2f(0.600000f, 0.500000f);
	glVertex3f(0.588785f, 0.000999956f, 0.808017f);
	glNormal3f(0.556938f, -0.309184f, 0.770860f);
	glTexCoord2f(0.600000f, 0.400000f);
	glVertex3f(0.560017f, -0.308017f, 0.768421f);
	glNormal3f(0.767888f, -0.309184f, 0.561028f);
	glTexCoord2f(0.650000f, 0.400000f);
	glVertex3f(0.770421f, -0.308017f, 0.558017f);
	// Polygon # 205
	glNormal3f(0.587785f, -1.19618e-007f, 0.809017f);
	glTexCoord2f(0.600000f, 0.500000f);
	glVertex3f(0.588785f, 0.000999956f, 0.808017f);
	glNormal3f(0.767888f, -0.309184f, 0.561028f);
	glTexCoord2f(0.650000f, 0.400000f);
	glVertex3f(0.770421f, -0.308017f, 0.558017f);
	glNormal3f(0.809017f, -9.67125e-008f, 0.587785f);
	glTexCoord2f(0.650000f, 0.500000f);
	glVertex3f(0.810017f, 0.000999956f, 0.586785f);
	// Polygon # 206
	glNormal3f(0.809017f, -9.67125e-008f, 0.587785f);
	glTexCoord2f(0.650000f, 0.500000f);
	glVertex3f(0.810017f, 0.000999956f, 0.586785f);
	glNormal3f(0.767888f, -0.309184f, 0.561028f);
	glTexCoord2f(0.650000f, 0.400000f);
	glVertex3f(0.770421f, -0.308017f, 0.558017f);
	glNormal3f(0.903673f, -0.309184f, 0.296279f);
	glTexCoord2f(0.700000f, 0.400000f);
	glVertex3f(0.905509f, -0.308017f, 0.292892f);
	// Polygon # 207
	glNormal3f(0.809017f, -9.67125e-008f, 0.587785f);
	glTexCoord2f(0.650000f, 0.500000f);
	glVertex3f(0.810017f, 0.000999956f, 0.586785f);
	glNormal3f(0.903673f, -0.309184f, 0.296279f);
	glTexCoord2f(0.700000f, 0.400000f);
	glVertex3f(0.905509f, -0.308017f, 0.292892f);
	glNormal3f(0.951057f, -1.29798e-007f, 0.309017f);
	glTexCoord2f(0.700000f, 0.500000f);
	glVertex3f(0.952057f, 0.000999956f, 0.308017f);
	// Polygon # 208
	glNormal3f(0.951057f, -1.29798e-007f, 0.309017f);
	glTexCoord2f(0.700000f, 0.500000f);
	glVertex3f(0.952057f, 0.000999956f, 0.308017f);
	glNormal3f(0.903673f, -0.309184f, 0.296279f);
	glTexCoord2f(0.700000f, 0.400000f);
	glVertex3f(0.905509f, -0.308017f, 0.292892f);
	glNormal3f(0.950999f, -0.309184f, 0.00252786f);
	glTexCoord2f(0.750000f, 0.400000f);
	glVertex3f(0.952056f, -0.308017f, -0.00100017f);
	// Polygon # 209
	glNormal3f(0.951057f, -1.29798e-007f, 0.309017f);
	glTexCoord2f(0.700000f, 0.500000f);
	glVertex3f(0.952057f, 0.000999956f, 0.308017f);
	glNormal3f(0.950999f, -0.309184f, 0.00252786f);
	glTexCoord2f(0.750000f, 0.400000f);
	glVertex3f(0.952056f, -0.308017f, -0.00100017f);
	glNormal3f(1.00000f, -1.32343e-007f, -1.34888e-007f);
	glTexCoord2f(0.750000f, 0.500000f);
	glVertex3f(1.00100f, 0.000999956f, -0.00100017f);
	// Polygon # 210
	glNormal3f(1.00000f, -1.32343e-007f, -1.34888e-007f);
	glTexCoord2f(0.750000f, 0.500000f);
	glVertex3f(1.00100f, 0.000999956f, -0.00100017f);
	glNormal3f(0.950999f, -0.309184f, 0.00252786f);
	glTexCoord2f(0.750000f, 0.400000f);
	glVertex3f(0.952056f, -0.308017f, -0.00100017f);
	glNormal3f(0.905235f, -0.309184f, -0.291471f);
	glTexCoord2f(0.800000f, 0.400000f);
	glVertex3f(0.905508f, -0.308017f, -0.294893f);
	// Polygon # 211
	glNormal3f(1.00000f, -1.32343e-007f, -1.34888e-007f);
	glTexCoord2f(0.750000f, 0.500000f);
	glVertex3f(1.00100f, 0.000999956f, -0.00100017f);
	glNormal3f(0.905235f, -0.309184f, -0.291471f);
	glTexCoord2f(0.800000f, 0.400000f);
	glVertex3f(0.905508f, -0.308017f, -0.294893f);
	glNormal3f(0.951056f, -7.88970e-008f, -0.309017f);
	glTexCoord2f(0.800000f, 0.500000f);
	glVertex3f(0.952056f, 0.000999956f, -0.310017f);
	// Polygon # 212
	glNormal3f(0.951056f, -7.88970e-008f, -0.309017f);
	glTexCoord2f(0.800000f, 0.500000f);
	glVertex3f(0.952056f, 0.000999956f, -0.310017f);
	glNormal3f(0.905235f, -0.309184f, -0.291471f);
	glTexCoord2f(0.800000f, 0.400000f);
	glVertex3f(0.905508f, -0.308017f, -0.294893f);
	glNormal3f(0.770860f, -0.309184f, -0.556938f);
	glTexCoord2f(0.850000f, 0.400000f);
	glVertex3f(0.770421f, -0.308017f, -0.560017f);
	// Polygon # 213
	glNormal3f(0.951056f, -7.88970e-008f, -0.309017f);
	glTexCoord2f(0.800000f, 0.500000f);
	glVertex3f(0.952056f, 0.000999956f, -0.310017f);
	glNormal3f(0.770860f, -0.309184f, -0.556938f);
	glTexCoord2f(0.850000f, 0.400000f);
	glVertex3f(0.770421f, -0.308017f, -0.560017f);
	glNormal3f(0.809017f, -9.67125e-008f, -0.587785f);
	glTexCoord2f(0.850000f, 0.500000f);
	glVertex3f(0.810017f, 0.000999956f, -0.588785f);
	// Polygon # 214
	glNormal3f(0.809017f, -9.67125e-008f, -0.587785f);
	glTexCoord2f(0.850000f, 0.500000f);
	glVertex3f(0.810017f, 0.000999956f, -0.588785f);
	glNormal3f(0.770860f, -0.309184f, -0.556938f);
	glTexCoord2f(0.850000f, 0.400000f);
	glVertex3f(0.770421f, -0.308017f, -0.560017f);
	glNormal3f(0.561028f, -0.309184f, -0.767888f);
	glTexCoord2f(0.900000f, 0.400000f);
	glVertex3f(0.560017f, -0.308017f, -0.770421f);
	// Polygon # 215
	glNormal3f(0.809017f, -9.67125e-008f, -0.587785f);
	glTexCoord2f(0.850000f, 0.500000f);
	glVertex3f(0.810017f, 0.000999956f, -0.588785f);
	glNormal3f(0.561028f, -0.309184f, -0.767888f);
	glTexCoord2f(0.900000f, 0.400000f);
	glVertex3f(0.560017f, -0.308017f, -0.770421f);
	glNormal3f(0.587785f, -1.32343e-007f, -0.809017f);
	glTexCoord2f(0.900000f, 0.500000f);
	glVertex3f(0.588785f, 0.000999956f, -0.810017f);
	// Polygon # 216
	glNormal3f(0.587785f, -1.32343e-007f, -0.809017f);
	glTexCoord2f(0.900000f, 0.500000f);
	glVertex3f(0.588785f, 0.000999956f, -0.810017f);
	glNormal3f(0.561028f, -0.309184f, -0.767888f);
	glTexCoord2f(0.900000f, 0.400000f);
	glVertex3f(0.560017f, -0.308017f, -0.770421f);
	glNormal3f(0.296279f, -0.309184f, -0.903673f);
	glTexCoord2f(0.950000f, 0.400000f);
	glVertex3f(0.294892f, -0.308017f, -0.905509f);
	// Polygon # 217
	glNormal3f(0.587785f, -1.32343e-007f, -0.809017f);
	glTexCoord2f(0.900000f, 0.500000f);
	glVertex3f(0.588785f, 0.000999956f, -0.810017f);
	glNormal3f(0.296279f, -0.309184f, -0.903673f);
	glTexCoord2f(0.950000f, 0.400000f);
	glVertex3f(0.294892f, -0.308017f, -0.905509f);
	glNormal3f(0.309017f, -1.42524e-007f, -0.951057f);
	glTexCoord2f(0.950000f, 0.500000f);
	glVertex3f(0.310017f, 0.000999956f, -0.952057f);
	// Polygon # 218
	glNormal3f(0.309017f, -1.42524e-007f, -0.951057f);
	glTexCoord2f(0.950000f, 0.500000f);
	glVertex3f(0.310017f, 0.000999956f, -0.952057f);
	glNormal3f(0.296279f, -0.309184f, -0.903673f);
	glTexCoord2f(0.950000f, 0.400000f);
	glVertex3f(0.294892f, -0.308017f, -0.905509f);
	glNormal3f(0.154555f, -0.154555f, -0.975820f);
	glTexCoord2f(1.00000f, 0.400000f);
	glVertex3f(0.000999958f, -0.308017f, -0.952056f);
	// Polygon # 219
	glNormal3f(0.309017f, -1.42524e-007f, -0.951057f);
	glTexCoord2f(0.950000f, 0.500000f);
	glVertex3f(0.310017f, 0.000999956f, -0.952057f);
	glNormal3f(0.154555f, -0.154555f, -0.975820f);
	glTexCoord2f(1.00000f, 0.400000f);
	glVertex3f(0.000999958f, -0.308017f, -0.952056f);
	glNormal3f(0.154555f, -0.154555f, -0.975820f);
	glTexCoord2f(1.00000f, 0.500000f);
	glVertex3f(0.000999956f, 0.000999956f, -1.00100f);
	// Polygon # 220
	glNormal3f(-0.146244f, -0.355016f, -0.923351f);
	glTexCoord2f(-5.96046e-008f, 0.400000f);
	glVertex3f(0.000999958f, -0.308017f, -0.952056f);
	glNormal3f(-0.122103f, -0.625105f, -0.770931f);
	glTexCoord2f(-5.96046e-008f, 0.300000f);
	glVertex3f(0.000999965f, -0.586785f, -0.810017f);
	glNormal3f(-0.245344f, -0.588011f, -0.770746f);
	glTexCoord2f(0.0500000f, 0.300000f);
	glVertex3f(-0.249000f, -0.586785f, -0.770421f);
	// Polygon # 221
	glNormal3f(-0.146244f, -0.355016f, -0.923351f);
	glTexCoord2f(-5.96046e-008f, 0.400000f);
	glVertex3f(0.000999958f, -0.308017f, -0.952056f);
	glNormal3f(-0.245344f, -0.588011f, -0.770746f);
	glTexCoord2f(0.0500000f, 0.300000f);
	glVertex3f(-0.249000f, -0.586785f, -0.770421f);
	glNormal3f(-0.291471f, -0.309184f, -0.905235f);
	glTexCoord2f(0.0500000f, 0.400000f);
	glVertex3f(-0.292893f, -0.308017f, -0.905508f);
	// Polygon # 222
	glNormal3f(-0.291471f, -0.309184f, -0.905235f);
	glTexCoord2f(0.0500000f, 0.400000f);
	glVertex3f(-0.292893f, -0.308017f, -0.905508f);
	glNormal3f(-0.245344f, -0.588011f, -0.770746f);
	glTexCoord2f(0.0500000f, 0.300000f);
	glVertex3f(-0.249000f, -0.586785f, -0.770421f);
	glNormal3f(-0.471510f, -0.588011f, -0.657208f);
	glTexCoord2f(0.100000f, 0.300000f);
	glVertex3f(-0.474528f, -0.586785f, -0.655508f);
	// Polygon # 223
	glNormal3f(-0.291471f, -0.309184f, -0.905235f);
	glTexCoord2f(0.0500000f, 0.400000f);
	glVertex3f(-0.292893f, -0.308017f, -0.905508f);
	glNormal3f(-0.471510f, -0.588011f, -0.657208f);
	glTexCoord2f(0.100000f, 0.300000f);
	glVertex3f(-0.474528f, -0.586785f, -0.655508f);
	glNormal3f(-0.556938f, -0.309184f, -0.770860f);
	glTexCoord2f(0.100000f, 0.400000f);
	glVertex3f(-0.558017f, -0.308017f, -0.770421f);
	// Polygon # 224
	glNormal3f(-0.556938f, -0.309184f, -0.770860f);
	glTexCoord2f(0.100000f, 0.400000f);
	glVertex3f(-0.558017f, -0.308017f, -0.770421f);
	glNormal3f(-0.471510f, -0.588011f, -0.657208f);
	glTexCoord2f(0.100000f, 0.300000f);
	glVertex3f(-0.474528f, -0.586785f, -0.655508f);
	glNormal3f(-0.651521f, -0.588011f, -0.479337f);
	glTexCoord2f(0.150000f, 0.300000f);
	glVertex3f(-0.653508f, -0.586785f, -0.476528f);
	// Polygon # 225
	glNormal3f(-0.556938f, -0.309184f, -0.770860f);
	glTexCoord2f(0.100000f, 0.400000f);
	glVertex3f(-0.558017f, -0.308017f, -0.770421f);
	glNormal3f(-0.651521f, -0.588011f, -0.479337f);
	glTexCoord2f(0.150000f, 0.300000f);
	glVertex3f(-0.653508f, -0.586785f, -0.476528f);
	glNormal3f(-0.767888f, -0.309184f, -0.561028f);
	glTexCoord2f(0.150000f, 0.400000f);
	glVertex3f(-0.768421f, -0.308017f, -0.560017f);
	// Polygon # 226
	glNormal3f(-0.767888f, -0.309184f, -0.561028f);
	glTexCoord2f(0.150000f, 0.400000f);
	glVertex3f(-0.768421f, -0.308017f, -0.560017f);
	glNormal3f(-0.651521f, -0.588011f, -0.479337f);
	glTexCoord2f(0.150000f, 0.300000f);
	glVertex3f(-0.653508f, -0.586785f, -0.476528f);
	glNormal3f(-0.767756f, -0.588011f, -0.254546f);
	glTexCoord2f(0.200000f, 0.300000f);
	glVertex3f(-0.768421f, -0.586785f, -0.251000f);
	// Polygon # 227
	glNormal3f(-0.767888f, -0.309184f, -0.561028f);
	glTexCoord2f(0.150000f, 0.400000f);
	glVertex3f(-0.768421f, -0.308017f, -0.560017f);
	glNormal3f(-0.767756f, -0.588011f, -0.254546f);
	glTexCoord2f(0.200000f, 0.300000f);
	glVertex3f(-0.768421f, -0.586785f, -0.251000f);
	glNormal3f(-0.903673f, -0.309184f, -0.296279f);
	glTexCoord2f(0.200000f, 0.400000f);
	glVertex3f(-0.903508f, -0.308017f, -0.294893f);
	// Polygon # 228
	glNormal3f(-0.903673f, -0.309184f, -0.296279f);
	glTexCoord2f(0.200000f, 0.400000f);
	glVertex3f(-0.903508f, -0.308017f, -0.294893f);
	glNormal3f(-0.767756f, -0.588011f, -0.254546f);
	glTexCoord2f(0.200000f, 0.300000f);
	glVertex3f(-0.768421f, -0.586785f, -0.251000f);
	glNormal3f(-0.808839f, -0.588011f, -0.00483737f);
	glTexCoord2f(0.250000f, 0.300000f);
	glVertex3f(-0.808017f, -0.586785f, -0.000999929f);
	// Polygon # 229
	glNormal3f(-0.903673f, -0.309184f, -0.296279f);
	glTexCoord2f(0.200000f, 0.400000f);
	glVertex3f(-0.903508f, -0.308017f, -0.294893f);
	glNormal3f(-0.808839f, -0.588011f, -0.00483737f);
	glTexCoord2f(0.250000f, 0.300000f);
	glVertex3f(-0.808017f, -0.586785f, -0.000999929f);
	glNormal3f(-0.950999f, -0.309184f, -0.00252791f);
	glTexCoord2f(0.250000f, 0.400000f);
	glVertex3f(-0.950056f, -0.308017f, -0.000999917f);
	// Polygon # 230
	glNormal3f(-0.950999f, -0.309184f, -0.00252791f);
	glTexCoord2f(0.250000f, 0.400000f);
	glVertex3f(-0.950056f, -0.308017f, -0.000999917f);
	glNormal3f(-0.808839f, -0.588011f, -0.00483737f);
	glTexCoord2f(0.250000f, 0.300000f);
	glVertex3f(-0.808017f, -0.586785f, -0.000999929f);
	glNormal3f(-0.770746f, -0.588011f, 0.245344f);
	glTexCoord2f(0.300000f, 0.300000f);
	glVertex3f(-0.768421f, -0.586785f, 0.249000f);
	// Polygon # 231
	glNormal3f(-0.950999f, -0.309184f, -0.00252791f);
	glTexCoord2f(0.250000f, 0.400000f);
	glVertex3f(-0.950056f, -0.308017f, -0.000999917f);
	glNormal3f(-0.770746f, -0.588011f, 0.245344f);
	glTexCoord2f(0.300000f, 0.300000f);
	glVertex3f(-0.768421f, -0.586785f, 0.249000f);
	glNormal3f(-0.905235f, -0.309184f, 0.291471f);
	glTexCoord2f(0.300000f, 0.400000f);
	glVertex3f(-0.903508f, -0.308017f, 0.292893f);
	// Polygon # 232
	glNormal3f(-0.905235f, -0.309184f, 0.291471f);
	glTexCoord2f(0.300000f, 0.400000f);
	glVertex3f(-0.903508f, -0.308017f, 0.292893f);
	glNormal3f(-0.770746f, -0.588011f, 0.245344f);
	glTexCoord2f(0.300000f, 0.300000f);
	glVertex3f(-0.768421f, -0.586785f, 0.249000f);
	glNormal3f(-0.657208f, -0.588011f, 0.471510f);
	glTexCoord2f(0.350000f, 0.300000f);
	glVertex3f(-0.653508f, -0.586785f, 0.474528f);
	// Polygon # 233
	glNormal3f(-0.905235f, -0.309184f, 0.291471f);
	glTexCoord2f(0.300000f, 0.400000f);
	glVertex3f(-0.903508f, -0.308017f, 0.292893f);
	glNormal3f(-0.657208f, -0.588011f, 0.471510f);
	glTexCoord2f(0.350000f, 0.300000f);
	glVertex3f(-0.653508f, -0.586785f, 0.474528f);
	glNormal3f(-0.770860f, -0.309184f, 0.556938f);
	glTexCoord2f(0.350000f, 0.400000f);
	glVertex3f(-0.768421f, -0.308017f, 0.558017f);
	// Polygon # 234
	glNormal3f(-0.770860f, -0.309184f, 0.556938f);
	glTexCoord2f(0.350000f, 0.400000f);
	glVertex3f(-0.768421f, -0.308017f, 0.558017f);
	glNormal3f(-0.657208f, -0.588011f, 0.471510f);
	glTexCoord2f(0.350000f, 0.300000f);
	glVertex3f(-0.653508f, -0.586785f, 0.474528f);
	glNormal3f(-0.479337f, -0.588011f, 0.651521f);
	glTexCoord2f(0.400000f, 0.300000f);
	glVertex3f(-0.474528f, -0.586785f, 0.653509f);
	// Polygon # 235
	glNormal3f(-0.770860f, -0.309184f, 0.556938f);
	glTexCoord2f(0.350000f, 0.400000f);
	glVertex3f(-0.768421f, -0.308017f, 0.558017f);
	glNormal3f(-0.479337f, -0.588011f, 0.651521f);
	glTexCoord2f(0.400000f, 0.300000f);
	glVertex3f(-0.474528f, -0.586785f, 0.653509f);
	glNormal3f(-0.561028f, -0.309184f, 0.767888f);
	glTexCoord2f(0.400000f, 0.400000f);
	glVertex3f(-0.558017f, -0.308017f, 0.768421f);
	// Polygon # 236
	glNormal3f(-0.561028f, -0.309184f, 0.767888f);
	glTexCoord2f(0.400000f, 0.400000f);
	glVertex3f(-0.558017f, -0.308017f, 0.768421f);
	glNormal3f(-0.479337f, -0.588011f, 0.651521f);
	glTexCoord2f(0.400000f, 0.300000f);
	glVertex3f(-0.474528f, -0.586785f, 0.653509f);
	glNormal3f(-0.254545f, -0.588011f, 0.767756f);
	glTexCoord2f(0.450000f, 0.300000f);
	glVertex3f(-0.249000f, -0.586785f, 0.768421f);
	// Polygon # 237
	glNormal3f(-0.561028f, -0.309184f, 0.767888f);
	glTexCoord2f(0.400000f, 0.400000f);
	glVertex3f(-0.558017f, -0.308017f, 0.768421f);
	glNormal3f(-0.254545f, -0.588011f, 0.767756f);
	glTexCoord2f(0.450000f, 0.300000f);
	glVertex3f(-0.249000f, -0.586785f, 0.768421f);
	glNormal3f(-0.296279f, -0.309184f, 0.903673f);
	glTexCoord2f(0.450000f, 0.400000f);
	glVertex3f(-0.292893f, -0.308017f, 0.903508f);
	// Polygon # 238
	glNormal3f(-0.296279f, -0.309184f, 0.903673f);
	glTexCoord2f(0.450000f, 0.400000f);
	glVertex3f(-0.292893f, -0.308017f, 0.903508f);
	glNormal3f(-0.254545f, -0.588011f, 0.767756f);
	glTexCoord2f(0.450000f, 0.300000f);
	glVertex3f(-0.249000f, -0.586785f, 0.768421f);
	glNormal3f(-0.00483736f, -0.588011f, 0.808839f);
	glTexCoord2f(0.500000f, 0.300000f);
	glVertex3f(0.00100011f, -0.586785f, 0.808017f);
	// Polygon # 239
	glNormal3f(-0.296279f, -0.309184f, 0.903673f);
	glTexCoord2f(0.450000f, 0.400000f);
	glVertex3f(-0.292893f, -0.308017f, 0.903508f);
	glNormal3f(-0.00483736f, -0.588011f, 0.808839f);
	glTexCoord2f(0.500000f, 0.300000f);
	glVertex3f(0.00100011f, -0.586785f, 0.808017f);
	glNormal3f(-0.00252790f, -0.309184f, 0.950999f);
	glTexCoord2f(0.500000f, 0.400000f);
	glVertex3f(0.00100012f, -0.308017f, 0.950056f);
	// Polygon # 240
	glNormal3f(-0.00252790f, -0.309184f, 0.950999f);
	glTexCoord2f(0.500000f, 0.400000f);
	glVertex3f(0.00100012f, -0.308017f, 0.950056f);
	glNormal3f(-0.00483736f, -0.588011f, 0.808839f);
	glTexCoord2f(0.500000f, 0.300000f);
	glVertex3f(0.00100011f, -0.586785f, 0.808017f);
	glNormal3f(0.245344f, -0.588011f, 0.770746f);
	glTexCoord2f(0.550000f, 0.300000f);
	glVertex3f(0.251000f, -0.586785f, 0.768421f);
	// Polygon # 241
	glNormal3f(-0.00252790f, -0.309184f, 0.950999f);
	glTexCoord2f(0.500000f, 0.400000f);
	glVertex3f(0.00100012f, -0.308017f, 0.950056f);
	glNormal3f(0.245344f, -0.588011f, 0.770746f);
	glTexCoord2f(0.550000f, 0.300000f);
	glVertex3f(0.251000f, -0.586785f, 0.768421f);
	glNormal3f(0.291471f, -0.309184f, 0.905235f);
	glTexCoord2f(0.550000f, 0.400000f);
	glVertex3f(0.294893f, -0.308017f, 0.903508f);
	// Polygon # 242
	glNormal3f(0.291471f, -0.309184f, 0.905235f);
	glTexCoord2f(0.550000f, 0.400000f);
	glVertex3f(0.294893f, -0.308017f, 0.903508f);
	glNormal3f(0.245344f, -0.588011f, 0.770746f);
	glTexCoord2f(0.550000f, 0.300000f);
	glVertex3f(0.251000f, -0.586785f, 0.768421f);
	glNormal3f(0.471510f, -0.588011f, 0.657208f);
	glTexCoord2f(0.600000f, 0.300000f);
	glVertex3f(0.476528f, -0.586785f, 0.653508f);
	// Polygon # 243
	glNormal3f(0.291471f, -0.309184f, 0.905235f);
	glTexCoord2f(0.550000f, 0.400000f);
	glVertex3f(0.294893f, -0.308017f, 0.903508f);
	glNormal3f(0.471510f, -0.588011f, 0.657208f);
	glTexCoord2f(0.600000f, 0.300000f);
	glVertex3f(0.476528f, -0.586785f, 0.653508f);
	glNormal3f(0.556938f, -0.309184f, 0.770860f);
	glTexCoord2f(0.600000f, 0.400000f);
	glVertex3f(0.560017f, -0.308017f, 0.768421f);
	// Polygon # 244
	glNormal3f(0.556938f, -0.309184f, 0.770860f);
	glTexCoord2f(0.600000f, 0.400000f);
	glVertex3f(0.560017f, -0.308017f, 0.768421f);
	glNormal3f(0.471510f, -0.588011f, 0.657208f);
	glTexCoord2f(0.600000f, 0.300000f);
	glVertex3f(0.476528f, -0.586785f, 0.653508f);
	glNormal3f(0.651521f, -0.588011f, 0.479337f);
	glTexCoord2f(0.650000f, 0.300000f);
	glVertex3f(0.655509f, -0.586785f, 0.474528f);
	// Polygon # 245
	glNormal3f(0.556938f, -0.309184f, 0.770860f);
	glTexCoord2f(0.600000f, 0.400000f);
	glVertex3f(0.560017f, -0.308017f, 0.768421f);
	glNormal3f(0.651521f, -0.588011f, 0.479337f);
	glTexCoord2f(0.650000f, 0.300000f);
	glVertex3f(0.655509f, -0.586785f, 0.474528f);
	glNormal3f(0.767888f, -0.309184f, 0.561028f);
	glTexCoord2f(0.650000f, 0.400000f);
	glVertex3f(0.770421f, -0.308017f, 0.558017f);
	// Polygon # 246
	glNormal3f(0.767888f, -0.309184f, 0.561028f);
	glTexCoord2f(0.650000f, 0.400000f);
	glVertex3f(0.770421f, -0.308017f, 0.558017f);
	glNormal3f(0.651521f, -0.588011f, 0.479337f);
	glTexCoord2f(0.650000f, 0.300000f);
	glVertex3f(0.655509f, -0.586785f, 0.474528f);
	glNormal3f(0.767756f, -0.588011f, 0.254546f);
	glTexCoord2f(0.700000f, 0.300000f);
	glVertex3f(0.770421f, -0.586785f, 0.249000f);
	// Polygon # 247
	glNormal3f(0.767888f, -0.309184f, 0.561028f);
	glTexCoord2f(0.650000f, 0.400000f);
	glVertex3f(0.770421f, -0.308017f, 0.558017f);
	glNormal3f(0.767756f, -0.588011f, 0.254546f);
	glTexCoord2f(0.700000f, 0.300000f);
	glVertex3f(0.770421f, -0.586785f, 0.249000f);
	glNormal3f(0.903673f, -0.309184f, 0.296279f);
	glTexCoord2f(0.700000f, 0.400000f);
	glVertex3f(0.905509f, -0.308017f, 0.292892f);
	// Polygon # 248
	glNormal3f(0.903673f, -0.309184f, 0.296279f);
	glTexCoord2f(0.700000f, 0.400000f);
	glVertex3f(0.905509f, -0.308017f, 0.292892f);
	glNormal3f(0.767756f, -0.588011f, 0.254546f);
	glTexCoord2f(0.700000f, 0.300000f);
	glVertex3f(0.770421f, -0.586785f, 0.249000f);
	glNormal3f(0.808839f, -0.588011f, 0.00483733f);
	glTexCoord2f(0.750000f, 0.300000f);
	glVertex3f(0.810017f, -0.586785f, -0.00100014f);
	// Polygon # 249
	glNormal3f(0.903673f, -0.309184f, 0.296279f);
	glTexCoord2f(0.700000f, 0.400000f);
	glVertex3f(0.905509f, -0.308017f, 0.292892f);
	glNormal3f(0.808839f, -0.588011f, 0.00483733f);
	glTexCoord2f(0.750000f, 0.300000f);
	glVertex3f(0.810017f, -0.586785f, -0.00100014f);
	glNormal3f(0.950999f, -0.309184f, 0.00252786f);
	glTexCoord2f(0.750000f, 0.400000f);
	glVertex3f(0.952056f, -0.308017f, -0.00100017f);
	// Polygon # 250
	glNormal3f(0.950999f, -0.309184f, 0.00252786f);
	glTexCoord2f(0.750000f, 0.400000f);
	glVertex3f(0.952056f, -0.308017f, -0.00100017f);
	glNormal3f(0.808839f, -0.588011f, 0.00483733f);
	glTexCoord2f(0.750000f, 0.300000f);
	glVertex3f(0.810017f, -0.586785f, -0.00100014f);
	glNormal3f(0.770746f, -0.588011f, -0.245344f);
	glTexCoord2f(0.800000f, 0.300000f);
	glVertex3f(0.770421f, -0.586785f, -0.251000f);
	// Polygon # 251
	glNormal3f(0.950999f, -0.309184f, 0.00252786f);
	glTexCoord2f(0.750000f, 0.400000f);
	glVertex3f(0.952056f, -0.308017f, -0.00100017f);
	glNormal3f(0.770746f, -0.588011f, -0.245344f);
	glTexCoord2f(0.800000f, 0.300000f);
	glVertex3f(0.770421f, -0.586785f, -0.251000f);
	glNormal3f(0.905235f, -0.309184f, -0.291471f);
	glTexCoord2f(0.800000f, 0.400000f);
	glVertex3f(0.905508f, -0.308017f, -0.294893f);
	// Polygon # 252
	glNormal3f(0.905235f, -0.309184f, -0.291471f);
	glTexCoord2f(0.800000f, 0.400000f);
	glVertex3f(0.905508f, -0.308017f, -0.294893f);
	glNormal3f(0.770746f, -0.588011f, -0.245344f);
	glTexCoord2f(0.800000f, 0.300000f);
	glVertex3f(0.770421f, -0.586785f, -0.251000f);
	glNormal3f(0.657207f, -0.588011f, -0.471510f);
	glTexCoord2f(0.850000f, 0.300000f);
	glVertex3f(0.655508f, -0.586785f, -0.476528f);
	// Polygon # 253
	glNormal3f(0.905235f, -0.309184f, -0.291471f);
	glTexCoord2f(0.800000f, 0.400000f);
	glVertex3f(0.905508f, -0.308017f, -0.294893f);
	glNormal3f(0.657207f, -0.588011f, -0.471510f);
	glTexCoord2f(0.850000f, 0.300000f);
	glVertex3f(0.655508f, -0.586785f, -0.476528f);
	glNormal3f(0.770860f, -0.309184f, -0.556938f);
	glTexCoord2f(0.850000f, 0.400000f);
	glVertex3f(0.770421f, -0.308017f, -0.560017f);
	// Polygon # 254
	glNormal3f(0.770860f, -0.309184f, -0.556938f);
	glTexCoord2f(0.850000f, 0.400000f);
	glVertex3f(0.770421f, -0.308017f, -0.560017f);
	glNormal3f(0.657207f, -0.588011f, -0.471510f);
	glTexCoord2f(0.850000f, 0.300000f);
	glVertex3f(0.655508f, -0.586785f, -0.476528f);
	glNormal3f(0.479337f, -0.588011f, -0.651521f);
	glTexCoord2f(0.900000f, 0.300000f);
	glVertex3f(0.476528f, -0.586785f, -0.655509f);
	// Polygon # 255
	glNormal3f(0.770860f, -0.309184f, -0.556938f);
	glTexCoord2f(0.850000f, 0.400000f);
	glVertex3f(0.770421f, -0.308017f, -0.560017f);
	glNormal3f(0.479337f, -0.588011f, -0.651521f);
	glTexCoord2f(0.900000f, 0.300000f);
	glVertex3f(0.476528f, -0.586785f, -0.655509f);
	glNormal3f(0.561028f, -0.309184f, -0.767888f);
	glTexCoord2f(0.900000f, 0.400000f);
	glVertex3f(0.560017f, -0.308017f, -0.770421f);
	// Polygon # 256
	glNormal3f(0.561028f, -0.309184f, -0.767888f);
	glTexCoord2f(0.900000f, 0.400000f);
	glVertex3f(0.560017f, -0.308017f, -0.770421f);
	glNormal3f(0.479337f, -0.588011f, -0.651521f);
	glTexCoord2f(0.900000f, 0.300000f);
	glVertex3f(0.476528f, -0.586785f, -0.655509f);
	glNormal3f(0.254545f, -0.588011f, -0.767756f);
	glTexCoord2f(0.950000f, 0.300000f);
	glVertex3f(0.251000f, -0.586785f, -0.770421f);
	// Polygon # 257
	glNormal3f(0.561028f, -0.309184f, -0.767888f);
	glTexCoord2f(0.900000f, 0.400000f);
	glVertex3f(0.560017f, -0.308017f, -0.770421f);
	glNormal3f(0.254545f, -0.588011f, -0.767756f);
	glTexCoord2f(0.950000f, 0.300000f);
	glVertex3f(0.251000f, -0.586785f, -0.770421f);
	glNormal3f(0.296279f, -0.309184f, -0.903673f);
	glTexCoord2f(0.950000f, 0.400000f);
	glVertex3f(0.294892f, -0.308017f, -0.905509f);
	// Polygon # 258
	glNormal3f(0.296279f, -0.309184f, -0.903673f);
	glTexCoord2f(0.950000f, 0.400000f);
	glVertex3f(0.294892f, -0.308017f, -0.905509f);
	glNormal3f(0.254545f, -0.588011f, -0.767756f);
	glTexCoord2f(0.950000f, 0.300000f);
	glVertex3f(0.251000f, -0.586785f, -0.770421f);
	glNormal3f(0.139737f, -0.449536f, -0.882264f);
	glTexCoord2f(1.00000f, 0.300000f);
	glVertex3f(0.000999965f, -0.586785f, -0.810017f);
	// Polygon # 259
	glNormal3f(0.296279f, -0.309184f, -0.903673f);
	glTexCoord2f(0.950000f, 0.400000f);
	glVertex3f(0.294892f, -0.308017f, -0.905509f);
	glNormal3f(0.139737f, -0.449536f, -0.882264f);
	glTexCoord2f(1.00000f, 0.300000f);
	glVertex3f(0.000999965f, -0.586785f, -0.810017f);
	glNormal3f(0.139737f, -0.449536f, -0.882264f);
	glTexCoord2f(1.00000f, 0.400000f);
	glVertex3f(0.000999958f, -0.308017f, -0.952056f);
	// Polygon # 260
	glNormal3f(-0.122103f, -0.625105f, -0.770931f);
	glTexCoord2f(-5.96046e-008f, 0.300000f);
	glVertex3f(0.000999965f, -0.586785f, -0.810017f);
	glNormal3f(-0.0858588f, -0.835922f, -0.542091f);
	glTexCoord2f(-5.96046e-008f, 0.200000f);
	glVertex3f(0.000999974f, -0.808017f, -0.588785f);
	glNormal3f(-0.175179f, -0.809169f, -0.560855f);
	glTexCoord2f(0.0500000f, 0.200000f);
	glVertex3f(-0.180636f, -0.808017f, -0.560017f);
	// Polygon # 261
	glNormal3f(-0.122103f, -0.625105f, -0.770931f);
	glTexCoord2f(-5.96046e-008f, 0.300000f);
	glVertex3f(0.000999965f, -0.586785f, -0.810017f);
	glNormal3f(-0.175179f, -0.809169f, -0.560855f);
	glTexCoord2f(0.0500000f, 0.200000f);
	glVertex3f(-0.180636f, -0.808017f, -0.560017f);
	glNormal3f(-0.245344f, -0.588011f, -0.770746f);
	glTexCoord2f(0.0500000f, 0.300000f);
	glVertex3f(-0.249000f, -0.586785f, -0.770421f);
	// Polygon # 262
	glNormal3f(-0.245344f, -0.588011f, -0.770746f);
	glTexCoord2f(0.0500000f, 0.300000f);
	glVertex3f(-0.249000f, -0.586785f, -0.770421f);
	glNormal3f(-0.175179f, -0.809169f, -0.560855f);
	glTexCoord2f(0.0500000f, 0.200000f);
	glVertex3f(-0.180636f, -0.808017f, -0.560017f);
	glNormal3f(-0.339919f, -0.809169f, -0.479271f);
	glTexCoord2f(0.100000f, 0.200000f);
	glVertex3f(-0.344492f, -0.808017f, -0.476528f);
	// Polygon # 263
	glNormal3f(-0.245344f, -0.588011f, -0.770746f);
	glTexCoord2f(0.0500000f, 0.300000f);
	glVertex3f(-0.249000f, -0.586785f, -0.770421f);
	glNormal3f(-0.339919f, -0.809169f, -0.479271f);
	glTexCoord2f(0.100000f, 0.200000f);
	glVertex3f(-0.344492f, -0.808017f, -0.476528f);
	glNormal3f(-0.471510f, -0.588011f, -0.657208f);
	glTexCoord2f(0.100000f, 0.300000f);
	glVertex3f(-0.474528f, -0.586785f, -0.655508f);
	// Polygon # 264
	glNormal3f(-0.471510f, -0.588011f, -0.657208f);
	glTexCoord2f(0.100000f, 0.300000f);
	glVertex3f(-0.474528f, -0.586785f, -0.655508f);
	glNormal3f(-0.339919f, -0.809169f, -0.479271f);
	glTexCoord2f(0.100000f, 0.200000f);
	glVertex3f(-0.344492f, -0.808017f, -0.476528f);
	glNormal3f(-0.471385f, -0.809169f, -0.350773f);
	glTexCoord2f(0.150000f, 0.200000f);
	glVertex3f(-0.474528f, -0.808017f, -0.346491f);
	// Polygon # 265
	glNormal3f(-0.471510f, -0.588011f, -0.657208f);
	glTexCoord2f(0.100000f, 0.300000f);
	glVertex3f(-0.474528f, -0.586785f, -0.655508f);
	glNormal3f(-0.471385f, -0.809169f, -0.350773f);
	glTexCoord2f(0.150000f, 0.200000f);
	glVertex3f(-0.474528f, -0.808017f, -0.346491f);
	glNormal3f(-0.651521f, -0.588011f, -0.479337f);
	glTexCoord2f(0.150000f, 0.300000f);
	glVertex3f(-0.653508f, -0.586785f, -0.476528f);
	// Polygon # 266
	glNormal3f(-0.651521f, -0.588011f, -0.479337f);
	glTexCoord2f(0.150000f, 0.300000f);
	glVertex3f(-0.653508f, -0.586785f, -0.476528f);
	glNormal3f(-0.471385f, -0.809169f, -0.350773f);
	glTexCoord2f(0.150000f, 0.200000f);
	glVertex3f(-0.474528f, -0.808017f, -0.346491f);
	glNormal3f(-0.556709f, -0.809169f, -0.187939f);
	glTexCoord2f(0.200000f, 0.200000f);
	glVertex3f(-0.558017f, -0.808017f, -0.182636f);
	// Polygon # 267
	glNormal3f(-0.651521f, -0.588011f, -0.479337f);
	glTexCoord2f(0.150000f, 0.300000f);
	glVertex3f(-0.653508f, -0.586785f, -0.476528f);
	glNormal3f(-0.556709f, -0.809169f, -0.187939f);
	glTexCoord2f(0.200000f, 0.200000f);
	glVertex3f(-0.558017f, -0.808017f, -0.182636f);
	glNormal3f(-0.767756f, -0.588011f, -0.254546f);
	glTexCoord2f(0.200000f, 0.300000f);
	glVertex3f(-0.768421f, -0.586785f, -0.251000f);
	// Polygon # 268
	glNormal3f(-0.767756f, -0.588011f, -0.254546f);
	glTexCoord2f(0.200000f, 0.300000f);
	glVertex3f(-0.768421f, -0.586785f, -0.251000f);
	glNormal3f(-0.556709f, -0.809169f, -0.187939f);
	glTexCoord2f(0.200000f, 0.200000f);
	glVertex3f(-0.558017f, -0.808017f, -0.182636f);
	glNormal3f(-0.587538f, -0.809169f, -0.00670796f);
	glTexCoord2f(0.250000f, 0.200000f);
	glVertex3f(-0.586785f, -0.808017f, -0.000999949f);
	// Polygon # 269
	glNormal3f(-0.767756f, -0.588011f, -0.254546f);
	glTexCoord2f(0.200000f, 0.300000f);
	glVertex3f(-0.768421f, -0.586785f, -0.251000f);
	glNormal3f(-0.587538f, -0.809169f, -0.00670796f);
	glTexCoord2f(0.250000f, 0.200000f);
	glVertex3f(-0.586785f, -0.808017f, -0.000999949f);
	glNormal3f(-0.808839f, -0.588011f, -0.00483737f);
	glTexCoord2f(0.250000f, 0.300000f);
	glVertex3f(-0.808017f, -0.586785f, -0.000999929f);
	// Polygon # 270
	glNormal3f(-0.808839f, -0.588011f, -0.00483737f);
	glTexCoord2f(0.250000f, 0.300000f);
	glVertex3f(-0.808017f, -0.586785f, -0.000999929f);
	glNormal3f(-0.587538f, -0.809169f, -0.00670796f);
	glTexCoord2f(0.250000f, 0.200000f);
	glVertex3f(-0.586785f, -0.808017f, -0.000999949f);
	glNormal3f(-0.560855f, -0.809169f, 0.175179f);
	glTexCoord2f(0.300000f, 0.200000f);
	glVertex3f(-0.558017f, -0.808017f, 0.180636f);
	// Polygon # 271
	glNormal3f(-0.808839f, -0.588011f, -0.00483737f);
	glTexCoord2f(0.250000f, 0.300000f);
	glVertex3f(-0.808017f, -0.586785f, -0.000999929f);
	glNormal3f(-0.560855f, -0.809169f, 0.175179f);
	glTexCoord2f(0.300000f, 0.200000f);
	glVertex3f(-0.558017f, -0.808017f, 0.180636f);
	glNormal3f(-0.770746f, -0.588011f, 0.245344f);
	glTexCoord2f(0.300000f, 0.300000f);
	glVertex3f(-0.768421f, -0.586785f, 0.249000f);
	// Polygon # 272
	glNormal3f(-0.770746f, -0.588011f, 0.245344f);
	glTexCoord2f(0.300000f, 0.300000f);
	glVertex3f(-0.768421f, -0.586785f, 0.249000f);
	glNormal3f(-0.560855f, -0.809169f, 0.175179f);
	glTexCoord2f(0.300000f, 0.200000f);
	glVertex3f(-0.558017f, -0.808017f, 0.180636f);
	glNormal3f(-0.479271f, -0.809169f, 0.339919f);
	glTexCoord2f(0.350000f, 0.200000f);
	glVertex3f(-0.474528f, -0.808017f, 0.344492f);
	// Polygon # 273
	glNormal3f(-0.770746f, -0.588011f, 0.245344f);
	glTexCoord2f(0.300000f, 0.300000f);
	glVertex3f(-0.768421f, -0.586785f, 0.249000f);
	glNormal3f(-0.479271f, -0.809169f, 0.339919f);
	glTexCoord2f(0.350000f, 0.200000f);
	glVertex3f(-0.474528f, -0.808017f, 0.344492f);
	glNormal3f(-0.657208f, -0.588011f, 0.471510f);
	glTexCoord2f(0.350000f, 0.300000f);
	glVertex3f(-0.653508f, -0.586785f, 0.474528f);
	// Polygon # 274
	glNormal3f(-0.657208f, -0.588011f, 0.471510f);
	glTexCoord2f(0.350000f, 0.300000f);
	glVertex3f(-0.653508f, -0.586785f, 0.474528f);
	glNormal3f(-0.479271f, -0.809169f, 0.339919f);
	glTexCoord2f(0.350000f, 0.200000f);
	glVertex3f(-0.474528f, -0.808017f, 0.344492f);
	glNormal3f(-0.350773f, -0.809169f, 0.471385f);
	glTexCoord2f(0.400000f, 0.200000f);
	glVertex3f(-0.344491f, -0.808017f, 0.474528f);
	// Polygon # 275
	glNormal3f(-0.657208f, -0.588011f, 0.471510f);
	glTexCoord2f(0.350000f, 0.300000f);
	glVertex3f(-0.653508f, -0.586785f, 0.474528f);
	glNormal3f(-0.350773f, -0.809169f, 0.471385f);
	glTexCoord2f(0.400000f, 0.200000f);
	glVertex3f(-0.344491f, -0.808017f, 0.474528f);
	glNormal3f(-0.479337f, -0.588011f, 0.651521f);
	glTexCoord2f(0.400000f, 0.300000f);
	glVertex3f(-0.474528f, -0.586785f, 0.653509f);
	// Polygon # 276
	glNormal3f(-0.479337f, -0.588011f, 0.651521f);
	glTexCoord2f(0.400000f, 0.300000f);
	glVertex3f(-0.474528f, -0.586785f, 0.653509f);
	glNormal3f(-0.350773f, -0.809169f, 0.471385f);
	glTexCoord2f(0.400000f, 0.200000f);
	glVertex3f(-0.344491f, -0.808017f, 0.474528f);
	glNormal3f(-0.187939f, -0.809169f, 0.556709f);
	glTexCoord2f(0.450000f, 0.200000f);
	glVertex3f(-0.180636f, -0.808017f, 0.558017f);
	// Polygon # 277
	glNormal3f(-0.479337f, -0.588011f, 0.651521f);
	glTexCoord2f(0.400000f, 0.300000f);
	glVertex3f(-0.474528f, -0.586785f, 0.653509f);
	glNormal3f(-0.187939f, -0.809169f, 0.556709f);
	glTexCoord2f(0.450000f, 0.200000f);
	glVertex3f(-0.180636f, -0.808017f, 0.558017f);
	glNormal3f(-0.254545f, -0.588011f, 0.767756f);
	glTexCoord2f(0.450000f, 0.300000f);
	glVertex3f(-0.249000f, -0.586785f, 0.768421f);
	// Polygon # 278
	glNormal3f(-0.254545f, -0.588011f, 0.767756f);
	glTexCoord2f(0.450000f, 0.300000f);
	glVertex3f(-0.249000f, -0.586785f, 0.768421f);
	glNormal3f(-0.187939f, -0.809169f, 0.556709f);
	glTexCoord2f(0.450000f, 0.200000f);
	glVertex3f(-0.180636f, -0.808017f, 0.558017f);
	glNormal3f(-0.00670797f, -0.809169f, 0.587538f);
	glTexCoord2f(0.500000f, 0.200000f);
	glVertex3f(0.00100008f, -0.808017f, 0.586785f);
	// Polygon # 279
	glNormal3f(-0.254545f, -0.588011f, 0.767756f);
	glTexCoord2f(0.450000f, 0.300000f);
	glVertex3f(-0.249000f, -0.586785f, 0.768421f);
	glNormal3f(-0.00670797f, -0.809169f, 0.587538f);
	glTexCoord2f(0.500000f, 0.200000f);
	glVertex3f(0.00100008f, -0.808017f, 0.586785f);
	glNormal3f(-0.00483736f, -0.588011f, 0.808839f);
	glTexCoord2f(0.500000f, 0.300000f);
	glVertex3f(0.00100011f, -0.586785f, 0.808017f);
	// Polygon # 280
	glNormal3f(-0.00483736f, -0.588011f, 0.808839f);
	glTexCoord2f(0.500000f, 0.300000f);
	glVertex3f(0.00100011f, -0.586785f, 0.808017f);
	glNormal3f(-0.00670797f, -0.809169f, 0.587538f);
	glTexCoord2f(0.500000f, 0.200000f);
	glVertex3f(0.00100008f, -0.808017f, 0.586785f);
	glNormal3f(0.175180f, -0.809169f, 0.560855f);
	glTexCoord2f(0.550000f, 0.200000f);
	glVertex3f(0.182636f, -0.808017f, 0.558017f);
	// Polygon # 281
	glNormal3f(-0.00483736f, -0.588011f, 0.808839f);
	glTexCoord2f(0.500000f, 0.300000f);
	glVertex3f(0.00100011f, -0.586785f, 0.808017f);
	glNormal3f(0.175180f, -0.809169f, 0.560855f);
	glTexCoord2f(0.550000f, 0.200000f);
	glVertex3f(0.182636f, -0.808017f, 0.558017f);
	glNormal3f(0.245344f, -0.588011f, 0.770746f);
	glTexCoord2f(0.550000f, 0.300000f);
	glVertex3f(0.251000f, -0.586785f, 0.768421f);
	// Polygon # 282
	glNormal3f(0.245344f, -0.588011f, 0.770746f);
	glTexCoord2f(0.550000f, 0.300000f);
	glVertex3f(0.251000f, -0.586785f, 0.768421f);
	glNormal3f(0.175180f, -0.809169f, 0.560855f);
	glTexCoord2f(0.550000f, 0.200000f);
	glVertex3f(0.182636f, -0.808017f, 0.558017f);
	glNormal3f(0.339919f, -0.809169f, 0.479271f);
	glTexCoord2f(0.600000f, 0.200000f);
	glVertex3f(0.346492f, -0.808017f, 0.474528f);
	// Polygon # 283
	glNormal3f(0.245344f, -0.588011f, 0.770746f);
	glTexCoord2f(0.550000f, 0.300000f);
	glVertex3f(0.251000f, -0.586785f, 0.768421f);
	glNormal3f(0.339919f, -0.809169f, 0.479271f);
	glTexCoord2f(0.600000f, 0.200000f);
	glVertex3f(0.346492f, -0.808017f, 0.474528f);
	glNormal3f(0.471510f, -0.588011f, 0.657208f);
	glTexCoord2f(0.600000f, 0.300000f);
	glVertex3f(0.476528f, -0.586785f, 0.653508f);
	// Polygon # 284
	glNormal3f(0.471510f, -0.588011f, 0.657208f);
	glTexCoord2f(0.600000f, 0.300000f);
	glVertex3f(0.476528f, -0.586785f, 0.653508f);
	glNormal3f(0.339919f, -0.809169f, 0.479271f);
	glTexCoord2f(0.600000f, 0.200000f);
	glVertex3f(0.346492f, -0.808017f, 0.474528f);
	glNormal3f(0.471385f, -0.809169f, 0.350773f);
	glTexCoord2f(0.650000f, 0.200000f);
	glVertex3f(0.476528f, -0.808017f, 0.344491f);
	// Polygon # 285
	glNormal3f(0.471510f, -0.588011f, 0.657208f);
	glTexCoord2f(0.600000f, 0.300000f);
	glVertex3f(0.476528f, -0.586785f, 0.653508f);
	glNormal3f(0.471385f, -0.809169f, 0.350773f);
	glTexCoord2f(0.650000f, 0.200000f);
	glVertex3f(0.476528f, -0.808017f, 0.344491f);
	glNormal3f(0.651521f, -0.588011f, 0.479337f);
	glTexCoord2f(0.650000f, 0.300000f);
	glVertex3f(0.655509f, -0.586785f, 0.474528f);
	// Polygon # 286
	glNormal3f(0.651521f, -0.588011f, 0.479337f);
	glTexCoord2f(0.650000f, 0.300000f);
	glVertex3f(0.655509f, -0.586785f, 0.474528f);
	glNormal3f(0.471385f, -0.809169f, 0.350773f);
	glTexCoord2f(0.650000f, 0.200000f);
	glVertex3f(0.476528f, -0.808017f, 0.344491f);
	glNormal3f(0.556709f, -0.809169f, 0.187939f);
	glTexCoord2f(0.700000f, 0.200000f);
	glVertex3f(0.560017f, -0.808017f, 0.180636f);
	// Polygon # 287
	glNormal3f(0.651521f, -0.588011f, 0.479337f);
	glTexCoord2f(0.650000f, 0.300000f);
	glVertex3f(0.655509f, -0.586785f, 0.474528f);
	glNormal3f(0.556709f, -0.809169f, 0.187939f);
	glTexCoord2f(0.700000f, 0.200000f);
	glVertex3f(0.560017f, -0.808017f, 0.180636f);
	glNormal3f(0.767756f, -0.588011f, 0.254546f);
	glTexCoord2f(0.700000f, 0.300000f);
	glVertex3f(0.770421f, -0.586785f, 0.249000f);
	// Polygon # 288
	glNormal3f(0.767756f, -0.588011f, 0.254546f);
	glTexCoord2f(0.700000f, 0.300000f);
	glVertex3f(0.770421f, -0.586785f, 0.249000f);
	glNormal3f(0.556709f, -0.809169f, 0.187939f);
	glTexCoord2f(0.700000f, 0.200000f);
	glVertex3f(0.560017f, -0.808017f, 0.180636f);
	glNormal3f(0.587538f, -0.809169f, 0.00670797f);
	glTexCoord2f(0.750000f, 0.200000f);
	glVertex3f(0.588785f, -0.808017f, -0.00100010f);
	// Polygon # 289
	glNormal3f(0.767756f, -0.588011f, 0.254546f);
	glTexCoord2f(0.700000f, 0.300000f);
	glVertex3f(0.770421f, -0.586785f, 0.249000f);
	glNormal3f(0.587538f, -0.809169f, 0.00670797f);
	glTexCoord2f(0.750000f, 0.200000f);
	glVertex3f(0.588785f, -0.808017f, -0.00100010f);
	glNormal3f(0.808839f, -0.588011f, 0.00483733f);
	glTexCoord2f(0.750000f, 0.300000f);
	glVertex3f(0.810017f, -0.586785f, -0.00100014f);
	// Polygon # 290
	glNormal3f(0.808839f, -0.588011f, 0.00483733f);
	glTexCoord2f(0.750000f, 0.300000f);
	glVertex3f(0.810017f, -0.586785f, -0.00100014f);
	glNormal3f(0.587538f, -0.809169f, 0.00670797f);
	glTexCoord2f(0.750000f, 0.200000f);
	glVertex3f(0.588785f, -0.808017f, -0.00100010f);
	glNormal3f(0.560855f, -0.809169f, -0.175180f);
	glTexCoord2f(0.800000f, 0.200000f);
	glVertex3f(0.560017f, -0.808017f, -0.182636f);
	// Polygon # 291
	glNormal3f(0.808839f, -0.588011f, 0.00483733f);
	glTexCoord2f(0.750000f, 0.300000f);
	glVertex3f(0.810017f, -0.586785f, -0.00100014f);
	glNormal3f(0.560855f, -0.809169f, -0.175180f);
	glTexCoord2f(0.800000f, 0.200000f);
	glVertex3f(0.560017f, -0.808017f, -0.182636f);
	glNormal3f(0.770746f, -0.588011f, -0.245344f);
	glTexCoord2f(0.800000f, 0.300000f);
	glVertex3f(0.770421f, -0.586785f, -0.251000f);
	// Polygon # 292
	glNormal3f(0.770746f, -0.588011f, -0.245344f);
	glTexCoord2f(0.800000f, 0.300000f);
	glVertex3f(0.770421f, -0.586785f, -0.251000f);
	glNormal3f(0.560855f, -0.809169f, -0.175180f);
	glTexCoord2f(0.800000f, 0.200000f);
	glVertex3f(0.560017f, -0.808017f, -0.182636f);
	glNormal3f(0.479271f, -0.809169f, -0.339919f);
	glTexCoord2f(0.850000f, 0.200000f);
	glVertex3f(0.476528f, -0.808017f, -0.346492f);
	// Polygon # 293
	glNormal3f(0.770746f, -0.588011f, -0.245344f);
	glTexCoord2f(0.800000f, 0.300000f);
	glVertex3f(0.770421f, -0.586785f, -0.251000f);
	glNormal3f(0.479271f, -0.809169f, -0.339919f);
	glTexCoord2f(0.850000f, 0.200000f);
	glVertex3f(0.476528f, -0.808017f, -0.346492f);
	glNormal3f(0.657207f, -0.588011f, -0.471510f);
	glTexCoord2f(0.850000f, 0.300000f);
	glVertex3f(0.655508f, -0.586785f, -0.476528f);
	// Polygon # 294
	glNormal3f(0.657207f, -0.588011f, -0.471510f);
	glTexCoord2f(0.850000f, 0.300000f);
	glVertex3f(0.655508f, -0.586785f, -0.476528f);
	glNormal3f(0.479271f, -0.809169f, -0.339919f);
	glTexCoord2f(0.850000f, 0.200000f);
	glVertex3f(0.476528f, -0.808017f, -0.346492f);
	glNormal3f(0.350773f, -0.809169f, -0.471385f);
	glTexCoord2f(0.900000f, 0.200000f);
	glVertex3f(0.346491f, -0.808017f, -0.476528f);
	// Polygon # 295
	glNormal3f(0.657207f, -0.588011f, -0.471510f);
	glTexCoord2f(0.850000f, 0.300000f);
	glVertex3f(0.655508f, -0.586785f, -0.476528f);
	glNormal3f(0.350773f, -0.809169f, -0.471385f);
	glTexCoord2f(0.900000f, 0.200000f);
	glVertex3f(0.346491f, -0.808017f, -0.476528f);
	glNormal3f(0.479337f, -0.588011f, -0.651521f);
	glTexCoord2f(0.900000f, 0.300000f);
	glVertex3f(0.476528f, -0.586785f, -0.655509f);
	// Polygon # 296
	glNormal3f(0.479337f, -0.588011f, -0.651521f);
	glTexCoord2f(0.900000f, 0.300000f);
	glVertex3f(0.476528f, -0.586785f, -0.655509f);
	glNormal3f(0.350773f, -0.809169f, -0.471385f);
	glTexCoord2f(0.900000f, 0.200000f);
	glVertex3f(0.346491f, -0.808017f, -0.476528f);
	glNormal3f(0.187939f, -0.809169f, -0.556709f);
	glTexCoord2f(0.950000f, 0.200000f);
	glVertex3f(0.182636f, -0.808017f, -0.560017f);
	// Polygon # 297
	glNormal3f(0.479337f, -0.588011f, -0.651521f);
	glTexCoord2f(0.900000f, 0.300000f);
	glVertex3f(0.476528f, -0.586785f, -0.655509f);
	glNormal3f(0.187939f, -0.809169f, -0.556709f);
	glTexCoord2f(0.950000f, 0.200000f);
	glVertex3f(0.182636f, -0.808017f, -0.560017f);
	glNormal3f(0.254545f, -0.588011f, -0.767756f);
	glTexCoord2f(0.950000f, 0.300000f);
	glVertex3f(0.251000f, -0.586785f, -0.770421f);
	// Polygon # 298
	glNormal3f(0.254545f, -0.588011f, -0.767756f);
	glTexCoord2f(0.950000f, 0.300000f);
	glVertex3f(0.251000f, -0.586785f, -0.770421f);
	glNormal3f(0.187939f, -0.809169f, -0.556709f);
	glTexCoord2f(0.950000f, 0.200000f);
	glVertex3f(0.182636f, -0.808017f, -0.560017f);
	glNormal3f(0.111299f, -0.702713f, -0.702713f);
	glTexCoord2f(1.00000f, 0.200000f);
	glVertex3f(0.000999974f, -0.808017f, -0.588785f);
	// Polygon # 299
	glNormal3f(0.254545f, -0.588011f, -0.767756f);
	glTexCoord2f(0.950000f, 0.300000f);
	glVertex3f(0.251000f, -0.586785f, -0.770421f);
	glNormal3f(0.111299f, -0.702713f, -0.702713f);
	glTexCoord2f(1.00000f, 0.200000f);
	glVertex3f(0.000999974f, -0.808017f, -0.588785f);
	glNormal3f(0.111299f, -0.702713f, -0.702713f);
	glTexCoord2f(1.00000f, 0.300000f);
	glVertex3f(0.000999965f, -0.586785f, -0.810017f);
	// Polygon # 300
	glNormal3f(-0.0858588f, -0.835922f, -0.542091f);
	glTexCoord2f(-5.96046e-008f, 0.200000f);
	glVertex3f(0.000999974f, -0.808017f, -0.588785f);
	glNormal3f(-0.0488580f, -0.949976f, -0.308477f);
	glTexCoord2f(-5.96046e-008f, 0.100000f);
	glVertex3f(0.000999987f, -0.950057f, -0.310017f);
	glNormal3f(-0.0908606f, -0.940755f, -0.326687f);
	glTexCoord2f(0.0500000f, 0.100000f);
	glVertex3f(-0.0944915f, -0.950057f, -0.294893f);
	// Polygon # 301
	glNormal3f(-0.0858588f, -0.835922f, -0.542091f);
	glTexCoord2f(-5.96046e-008f, 0.200000f);
	glVertex3f(0.000999974f, -0.808017f, -0.588785f);
	glNormal3f(-0.0908606f, -0.940755f, -0.326687f);
	glTexCoord2f(0.0500000f, 0.100000f);
	glVertex3f(-0.0944915f, -0.950057f, -0.294893f);
	glNormal3f(-0.175179f, -0.809169f, -0.560855f);
	glTexCoord2f(0.0500000f, 0.200000f);
	glVertex3f(-0.180636f, -0.808017f, -0.560017f);
	// Polygon # 302
	glNormal3f(-0.175179f, -0.809169f, -0.560855f);
	glTexCoord2f(0.0500000f, 0.200000f);
	glVertex3f(-0.180636f, -0.808017f, -0.560017f);
	glNormal3f(-0.0908606f, -0.940755f, -0.326687f);
	glTexCoord2f(0.0500000f, 0.100000f);
	glVertex3f(-0.0944915f, -0.950057f, -0.294893f);
	glNormal3f(-0.187365f, -0.940755f, -0.282620f);
	glTexCoord2f(0.100000f, 0.100000f);
	glVertex3f(-0.180636f, -0.950057f, -0.251000f);
	// Polygon # 303
	glNormal3f(-0.175179f, -0.809169f, -0.560855f);
	glTexCoord2f(0.0500000f, 0.200000f);
	glVertex3f(-0.180636f, -0.808017f, -0.560017f);
	glNormal3f(-0.187365f, -0.940755f, -0.282620f);
	glTexCoord2f(0.100000f, 0.100000f);
	glVertex3f(-0.180636f, -0.950057f, -0.251000f);
	glNormal3f(-0.339919f, -0.809169f, -0.479271f);
	glTexCoord2f(0.100000f, 0.200000f);
	glVertex3f(-0.344492f, -0.808017f, -0.476528f);
	// Polygon # 304
	glNormal3f(-0.339919f, -0.809169f, -0.479271f);
	glTexCoord2f(0.100000f, 0.200000f);
	glVertex3f(-0.344492f, -0.808017f, -0.476528f);
	glNormal3f(-0.187365f, -0.940755f, -0.282620f);
	glTexCoord2f(0.100000f, 0.100000f);
	glVertex3f(-0.180636f, -0.950057f, -0.251000f);
	glNormal3f(-0.265530f, -0.940755f, -0.210889f);
	glTexCoord2f(0.150000f, 0.100000f);
	glVertex3f(-0.249000f, -0.950057f, -0.182636f);
	// Polygon # 305
	glNormal3f(-0.339919f, -0.809169f, -0.479271f);
	glTexCoord2f(0.100000f, 0.200000f);
	glVertex3f(-0.344492f, -0.808017f, -0.476528f);
	glNormal3f(-0.265530f, -0.940755f, -0.210889f);
	glTexCoord2f(0.150000f, 0.100000f);
	glVertex3f(-0.249000f, -0.950057f, -0.182636f);
	glNormal3f(-0.471385f, -0.809169f, -0.350773f);
	glTexCoord2f(0.150000f, 0.200000f);
	glVertex3f(-0.474528f, -0.808017f, -0.346491f);
	// Polygon # 306
	glNormal3f(-0.471385f, -0.809169f, -0.350773f);
	glTexCoord2f(0.150000f, 0.200000f);
	glVertex3f(-0.474528f, -0.808017f, -0.346491f);
	glNormal3f(-0.265530f, -0.940755f, -0.210889f);
	glTexCoord2f(0.150000f, 0.100000f);
	glVertex3f(-0.249000f, -0.950057f, -0.182636f);
	glNormal3f(-0.317702f, -0.940755f, -0.118514f);
	glTexCoord2f(0.200000f, 0.100000f);
	glVertex3f(-0.292893f, -0.950057f, -0.0964915f);
	// Polygon # 307
	glNormal3f(-0.471385f, -0.809169f, -0.350773f);
	glTexCoord2f(0.150000f, 0.200000f);
	glVertex3f(-0.474528f, -0.808017f, -0.346491f);
	glNormal3f(-0.317702f, -0.940755f, -0.118514f);
	glTexCoord2f(0.200000f, 0.100000f);
	glVertex3f(-0.292893f, -0.950057f, -0.0964915f);
	glNormal3f(-0.556709f, -0.809169f, -0.187939f);
	glTexCoord2f(0.200000f, 0.200000f);
	glVertex3f(-0.558017f, -0.808017f, -0.182636f);
	// Polygon # 308
	glNormal3f(-0.556709f, -0.809169f, -0.187939f);
	glTexCoord2f(0.200000f, 0.200000f);
	glVertex3f(-0.558017f, -0.808017f, -0.182636f);
	glNormal3f(-0.317702f, -0.940755f, -0.118514f);
	glTexCoord2f(0.200000f, 0.100000f);
	glVertex3f(-0.292893f, -0.950057f, -0.0964915f);
	glNormal3f(-0.338775f, -0.940755f, -0.0145382f);
	glTexCoord2f(0.250000f, 0.100000f);
	glVertex3f(-0.308017f, -0.950057f, -0.000999973f);
	// Polygon # 309
	glNormal3f(-0.556709f, -0.809169f, -0.187939f);
	glTexCoord2f(0.200000f, 0.200000f);
	glVertex3f(-0.558017f, -0.808017f, -0.182636f);
	glNormal3f(-0.338775f, -0.940755f, -0.0145382f);
	glTexCoord2f(0.250000f, 0.100000f);
	glVertex3f(-0.308017f, -0.950057f, -0.000999973f);
	glNormal3f(-0.587538f, -0.809169f, -0.00670796f);
	glTexCoord2f(0.250000f, 0.200000f);
	glVertex3f(-0.586785f, -0.808017f, -0.000999949f);
	// Polygon # 310
	glNormal3f(-0.587538f, -0.809169f, -0.00670796f);
	glTexCoord2f(0.250000f, 0.200000f);
	glVertex3f(-0.586785f, -0.808017f, -0.000999949f);
	glNormal3f(-0.338775f, -0.940755f, -0.0145382f);
	glTexCoord2f(0.250000f, 0.100000f);
	glVertex3f(-0.308017f, -0.950057f, -0.000999973f);
	glNormal3f(-0.326687f, -0.940755f, 0.0908606f);
	glTexCoord2f(0.300000f, 0.100000f);
	glVertex3f(-0.292893f, -0.950057f, 0.0944915f);
	// Polygon # 311
	glNormal3f(-0.587538f, -0.809169f, -0.00670796f);
	glTexCoord2f(0.250000f, 0.200000f);
	glVertex3f(-0.586785f, -0.808017f, -0.000999949f);
	glNormal3f(-0.326687f, -0.940755f, 0.0908606f);
	glTexCoord2f(0.300000f, 0.100000f);
	glVertex3f(-0.292893f, -0.950057f, 0.0944915f);
	glNormal3f(-0.560855f, -0.809169f, 0.175179f);
	glTexCoord2f(0.300000f, 0.200000f);
	glVertex3f(-0.558017f, -0.808017f, 0.180636f);
	// Polygon # 312
	glNormal3f(-0.560855f, -0.809169f, 0.175179f);
	glTexCoord2f(0.300000f, 0.200000f);
	glVertex3f(-0.558017f, -0.808017f, 0.180636f);
	glNormal3f(-0.326687f, -0.940755f, 0.0908606f);
	glTexCoord2f(0.300000f, 0.100000f);
	glVertex3f(-0.292893f, -0.950057f, 0.0944915f);
	glNormal3f(-0.282620f, -0.940755f, 0.187365f);
	glTexCoord2f(0.350000f, 0.100000f);
	glVertex3f(-0.249000f, -0.950057f, 0.180636f);
	// Polygon # 313
	glNormal3f(-0.560855f, -0.809169f, 0.175179f);
	glTexCoord2f(0.300000f, 0.200000f);
	glVertex3f(-0.558017f, -0.808017f, 0.180636f);
	glNormal3f(-0.282620f, -0.940755f, 0.187365f);
	glTexCoord2f(0.350000f, 0.100000f);
	glVertex3f(-0.249000f, -0.950057f, 0.180636f);
	glNormal3f(-0.479271f, -0.809169f, 0.339919f);
	glTexCoord2f(0.350000f, 0.200000f);
	glVertex3f(-0.474528f, -0.808017f, 0.344492f);
	// Polygon # 314
	glNormal3f(-0.479271f, -0.809169f, 0.339919f);
	glTexCoord2f(0.350000f, 0.200000f);
	glVertex3f(-0.474528f, -0.808017f, 0.344492f);
	glNormal3f(-0.282620f, -0.940755f, 0.187365f);
	glTexCoord2f(0.350000f, 0.100000f);
	glVertex3f(-0.249000f, -0.950057f, 0.180636f);
	glNormal3f(-0.210889f, -0.940755f, 0.265530f);
	glTexCoord2f(0.400000f, 0.100000f);
	glVertex3f(-0.180636f, -0.950057f, 0.249000f);
	// Polygon # 315
	glNormal3f(-0.479271f, -0.809169f, 0.339919f);
	glTexCoord2f(0.350000f, 0.200000f);
	glVertex3f(-0.474528f, -0.808017f, 0.344492f);
	glNormal3f(-0.210889f, -0.940755f, 0.265530f);
	glTexCoord2f(0.400000f, 0.100000f);
	glVertex3f(-0.180636f, -0.950057f, 0.249000f);
	glNormal3f(-0.350773f, -0.809169f, 0.471385f);
	glTexCoord2f(0.400000f, 0.200000f);
	glVertex3f(-0.344491f, -0.808017f, 0.474528f);
	// Polygon # 316
	glNormal3f(-0.350773f, -0.809169f, 0.471385f);
	glTexCoord2f(0.400000f, 0.200000f);
	glVertex3f(-0.344491f, -0.808017f, 0.474528f);
	glNormal3f(-0.210889f, -0.940755f, 0.265530f);
	glTexCoord2f(0.400000f, 0.100000f);
	glVertex3f(-0.180636f, -0.950057f, 0.249000f);
	glNormal3f(-0.118514f, -0.940755f, 0.317702f);
	glTexCoord2f(0.450000f, 0.100000f);
	glVertex3f(-0.0944914f, -0.950057f, 0.292893f);
	// Polygon # 317
	glNormal3f(-0.350773f, -0.809169f, 0.471385f);
	glTexCoord2f(0.400000f, 0.200000f);
	glVertex3f(-0.344491f, -0.808017f, 0.474528f);
	glNormal3f(-0.118514f, -0.940755f, 0.317702f);
	glTexCoord2f(0.450000f, 0.100000f);
	glVertex3f(-0.0944914f, -0.950057f, 0.292893f);
	glNormal3f(-0.187939f, -0.809169f, 0.556709f);
	glTexCoord2f(0.450000f, 0.200000f);
	glVertex3f(-0.180636f, -0.808017f, 0.558017f);
	// Polygon # 318
	glNormal3f(-0.187939f, -0.809169f, 0.556709f);
	glTexCoord2f(0.450000f, 0.200000f);
	glVertex3f(-0.180636f, -0.808017f, 0.558017f);
	glNormal3f(-0.118514f, -0.940755f, 0.317702f);
	glTexCoord2f(0.450000f, 0.100000f);
	glVertex3f(-0.0944914f, -0.950057f, 0.292893f);
	glNormal3f(-0.0145382f, -0.940755f, 0.338775f);
	glTexCoord2f(0.500000f, 0.100000f);
	glVertex3f(0.00100004f, -0.950057f, 0.308017f);
	// Polygon # 319
	glNormal3f(-0.187939f, -0.809169f, 0.556709f);
	glTexCoord2f(0.450000f, 0.200000f);
	glVertex3f(-0.180636f, -0.808017f, 0.558017f);
	glNormal3f(-0.0145382f, -0.940755f, 0.338775f);
	glTexCoord2f(0.500000f, 0.100000f);
	glVertex3f(0.00100004f, -0.950057f, 0.308017f);
	glNormal3f(-0.00670797f, -0.809169f, 0.587538f);
	glTexCoord2f(0.500000f, 0.200000f);
	glVertex3f(0.00100008f, -0.808017f, 0.586785f);
	// Polygon # 320
	glNormal3f(-0.00670797f, -0.809169f, 0.587538f);
	glTexCoord2f(0.500000f, 0.200000f);
	glVertex3f(0.00100008f, -0.808017f, 0.586785f);
	glNormal3f(-0.0145382f, -0.940755f, 0.338775f);
	glTexCoord2f(0.500000f, 0.100000f);
	glVertex3f(0.00100004f, -0.950057f, 0.308017f);
	glNormal3f(0.0908606f, -0.940755f, 0.326687f);
	glTexCoord2f(0.550000f, 0.100000f);
	glVertex3f(0.0964915f, -0.950057f, 0.292893f);
	// Polygon # 321
	glNormal3f(-0.00670797f, -0.809169f, 0.587538f);
	glTexCoord2f(0.500000f, 0.200000f);
	glVertex3f(0.00100008f, -0.808017f, 0.586785f);
	glNormal3f(0.0908606f, -0.940755f, 0.326687f);
	glTexCoord2f(0.550000f, 0.100000f);
	glVertex3f(0.0964915f, -0.950057f, 0.292893f);
	glNormal3f(0.175180f, -0.809169f, 0.560855f);
	glTexCoord2f(0.550000f, 0.200000f);
	glVertex3f(0.182636f, -0.808017f, 0.558017f);
	// Polygon # 322
	glNormal3f(0.175180f, -0.809169f, 0.560855f);
	glTexCoord2f(0.550000f, 0.200000f);
	glVertex3f(0.182636f, -0.808017f, 0.558017f);
	glNormal3f(0.0908606f, -0.940755f, 0.326687f);
	glTexCoord2f(0.550000f, 0.100000f);
	glVertex3f(0.0964915f, -0.950057f, 0.292893f);
	glNormal3f(0.187365f, -0.940755f, 0.282620f);
	glTexCoord2f(0.600000f, 0.100000f);
	glVertex3f(0.182636f, -0.950057f, 0.249000f);
	// Polygon # 323
	glNormal3f(0.175180f, -0.809169f, 0.560855f);
	glTexCoord2f(0.550000f, 0.200000f);
	glVertex3f(0.182636f, -0.808017f, 0.558017f);
	glNormal3f(0.187365f, -0.940755f, 0.282620f);
	glTexCoord2f(0.600000f, 0.100000f);
	glVertex3f(0.182636f, -0.950057f, 0.249000f);
	glNormal3f(0.339919f, -0.809169f, 0.479271f);
	glTexCoord2f(0.600000f, 0.200000f);
	glVertex3f(0.346492f, -0.808017f, 0.474528f);
	// Polygon # 324
	glNormal3f(0.339919f, -0.809169f, 0.479271f);
	glTexCoord2f(0.600000f, 0.200000f);
	glVertex3f(0.346492f, -0.808017f, 0.474528f);
	glNormal3f(0.187365f, -0.940755f, 0.282620f);
	glTexCoord2f(0.600000f, 0.100000f);
	glVertex3f(0.182636f, -0.950057f, 0.249000f);
	glNormal3f(0.265530f, -0.940755f, 0.210889f);
	glTexCoord2f(0.650000f, 0.100000f);
	glVertex3f(0.251000f, -0.950057f, 0.180636f);
	// Polygon # 325
	glNormal3f(0.339919f, -0.809169f, 0.479271f);
	glTexCoord2f(0.600000f, 0.200000f);
	glVertex3f(0.346492f, -0.808017f, 0.474528f);
	glNormal3f(0.265530f, -0.940755f, 0.210889f);
	glTexCoord2f(0.650000f, 0.100000f);
	glVertex3f(0.251000f, -0.950057f, 0.180636f);
	glNormal3f(0.471385f, -0.809169f, 0.350773f);
	glTexCoord2f(0.650000f, 0.200000f);
	glVertex3f(0.476528f, -0.808017f, 0.344491f);
	// Polygon # 326
	glNormal3f(0.471385f, -0.809169f, 0.350773f);
	glTexCoord2f(0.650000f, 0.200000f);
	glVertex3f(0.476528f, -0.808017f, 0.344491f);
	glNormal3f(0.265530f, -0.940755f, 0.210889f);
	glTexCoord2f(0.650000f, 0.100000f);
	glVertex3f(0.251000f, -0.950057f, 0.180636f);
	glNormal3f(0.317702f, -0.940755f, 0.118514f);
	glTexCoord2f(0.700000f, 0.100000f);
	glVertex3f(0.294893f, -0.950057f, 0.0944914f);
	// Polygon # 327
	glNormal3f(0.471385f, -0.809169f, 0.350773f);
	glTexCoord2f(0.650000f, 0.200000f);
	glVertex3f(0.476528f, -0.808017f, 0.344491f);
	glNormal3f(0.317702f, -0.940755f, 0.118514f);
	glTexCoord2f(0.700000f, 0.100000f);
	glVertex3f(0.294893f, -0.950057f, 0.0944914f);
	glNormal3f(0.556709f, -0.809169f, 0.187939f);
	glTexCoord2f(0.700000f, 0.200000f);
	glVertex3f(0.560017f, -0.808017f, 0.180636f);
	// Polygon # 328
	glNormal3f(0.556709f, -0.809169f, 0.187939f);
	glTexCoord2f(0.700000f, 0.200000f);
	glVertex3f(0.560017f, -0.808017f, 0.180636f);
	glNormal3f(0.317702f, -0.940755f, 0.118514f);
	glTexCoord2f(0.700000f, 0.100000f);
	glVertex3f(0.294893f, -0.950057f, 0.0944914f);
	glNormal3f(0.338775f, -0.940755f, 0.0145382f);
	glTexCoord2f(0.750000f, 0.100000f);
	glVertex3f(0.310017f, -0.950057f, -0.00100005f);
	// Polygon # 329
	glNormal3f(0.556709f, -0.809169f, 0.187939f);
	glTexCoord2f(0.700000f, 0.200000f);
	glVertex3f(0.560017f, -0.808017f, 0.180636f);
	glNormal3f(0.338775f, -0.940755f, 0.0145382f);
	glTexCoord2f(0.750000f, 0.100000f);
	glVertex3f(0.310017f, -0.950057f, -0.00100005f);
	glNormal3f(0.587538f, -0.809169f, 0.00670797f);
	glTexCoord2f(0.750000f, 0.200000f);
	glVertex3f(0.588785f, -0.808017f, -0.00100010f);
	// Polygon # 330
	glNormal3f(0.587538f, -0.809169f, 0.00670797f);
	glTexCoord2f(0.750000f, 0.200000f);
	glVertex3f(0.588785f, -0.808017f, -0.00100010f);
	glNormal3f(0.338775f, -0.940755f, 0.0145382f);
	glTexCoord2f(0.750000f, 0.100000f);
	glVertex3f(0.310017f, -0.950057f, -0.00100005f);
	glNormal3f(0.326687f, -0.940755f, -0.0908606f);
	glTexCoord2f(0.800000f, 0.100000f);
	glVertex3f(0.294893f, -0.950057f, -0.0964915f);
	// Polygon # 331
	glNormal3f(0.587538f, -0.809169f, 0.00670797f);
	glTexCoord2f(0.750000f, 0.200000f);
	glVertex3f(0.588785f, -0.808017f, -0.00100010f);
	glNormal3f(0.326687f, -0.940755f, -0.0908606f);
	glTexCoord2f(0.800000f, 0.100000f);
	glVertex3f(0.294893f, -0.950057f, -0.0964915f);
	glNormal3f(0.560855f, -0.809169f, -0.175180f);
	glTexCoord2f(0.800000f, 0.200000f);
	glVertex3f(0.560017f, -0.808017f, -0.182636f);
	// Polygon # 332
	glNormal3f(0.560855f, -0.809169f, -0.175180f);
	glTexCoord2f(0.800000f, 0.200000f);
	glVertex3f(0.560017f, -0.808017f, -0.182636f);
	glNormal3f(0.326687f, -0.940755f, -0.0908606f);
	glTexCoord2f(0.800000f, 0.100000f);
	glVertex3f(0.294893f, -0.950057f, -0.0964915f);
	glNormal3f(0.282620f, -0.940755f, -0.187365f);
	glTexCoord2f(0.850000f, 0.100000f);
	glVertex3f(0.251000f, -0.950057f, -0.182636f);
	// Polygon # 333
	glNormal3f(0.560855f, -0.809169f, -0.175180f);
	glTexCoord2f(0.800000f, 0.200000f);
	glVertex3f(0.560017f, -0.808017f, -0.182636f);
	glNormal3f(0.282620f, -0.940755f, -0.187365f);
	glTexCoord2f(0.850000f, 0.100000f);
	glVertex3f(0.251000f, -0.950057f, -0.182636f);
	glNormal3f(0.479271f, -0.809169f, -0.339919f);
	glTexCoord2f(0.850000f, 0.200000f);
	glVertex3f(0.476528f, -0.808017f, -0.346492f);
	// Polygon # 334
	glNormal3f(0.479271f, -0.809169f, -0.339919f);
	glTexCoord2f(0.850000f, 0.200000f);
	glVertex3f(0.476528f, -0.808017f, -0.346492f);
	glNormal3f(0.282620f, -0.940755f, -0.187365f);
	glTexCoord2f(0.850000f, 0.100000f);
	glVertex3f(0.251000f, -0.950057f, -0.182636f);
	glNormal3f(0.210889f, -0.940755f, -0.265530f);
	glTexCoord2f(0.900000f, 0.100000f);
	glVertex3f(0.182636f, -0.950057f, -0.251000f);
	// Polygon # 335
	glNormal3f(0.479271f, -0.809169f, -0.339919f);
	glTexCoord2f(0.850000f, 0.200000f);
	glVertex3f(0.476528f, -0.808017f, -0.346492f);
	glNormal3f(0.210889f, -0.940755f, -0.265530f);
	glTexCoord2f(0.900000f, 0.100000f);
	glVertex3f(0.182636f, -0.950057f, -0.251000f);
	glNormal3f(0.350773f, -0.809169f, -0.471385f);
	glTexCoord2f(0.900000f, 0.200000f);
	glVertex3f(0.346491f, -0.808017f, -0.476528f);
	// Polygon # 336
	glNormal3f(0.350773f, -0.809169f, -0.471385f);
	glTexCoord2f(0.900000f, 0.200000f);
	glVertex3f(0.346491f, -0.808017f, -0.476528f);
	glNormal3f(0.210889f, -0.940755f, -0.265530f);
	glTexCoord2f(0.900000f, 0.100000f);
	glVertex3f(0.182636f, -0.950057f, -0.251000f);
	glNormal3f(0.118514f, -0.940755f, -0.317702f);
	glTexCoord2f(0.950000f, 0.100000f);
	glVertex3f(0.0964914f, -0.950057f, -0.294893f);
	// Polygon # 337
	glNormal3f(0.350773f, -0.809169f, -0.471385f);
	glTexCoord2f(0.900000f, 0.200000f);
	glVertex3f(0.346491f, -0.808017f, -0.476528f);
	glNormal3f(0.118514f, -0.940755f, -0.317702f);
	glTexCoord2f(0.950000f, 0.100000f);
	glVertex3f(0.0964914f, -0.950057f, -0.294893f);
	glNormal3f(0.187939f, -0.809169f, -0.556709f);
	glTexCoord2f(0.950000f, 0.200000f);
	glVertex3f(0.182636f, -0.808017f, -0.560017f);
	// Polygon # 338
	glNormal3f(0.187939f, -0.809169f, -0.556709f);
	glTexCoord2f(0.950000f, 0.200000f);
	glVertex3f(0.182636f, -0.808017f, -0.560017f);
	glNormal3f(0.118514f, -0.940755f, -0.317702f);
	glTexCoord2f(0.950000f, 0.100000f);
	glVertex3f(0.0964914f, -0.950057f, -0.294893f);
	glNormal3f(0.0717198f, -0.888712f, -0.452821f);
	glTexCoord2f(1.00000f, 0.100000f);
	glVertex3f(0.000999987f, -0.950057f, -0.310017f);
	// Polygon # 339
	glNormal3f(0.187939f, -0.809169f, -0.556709f);
	glTexCoord2f(0.950000f, 0.200000f);
	glVertex3f(0.182636f, -0.808017f, -0.560017f);
	glNormal3f(0.0717198f, -0.888712f, -0.452821f);
	glTexCoord2f(1.00000f, 0.100000f);
	glVertex3f(0.000999987f, -0.950057f, -0.310017f);
	glNormal3f(0.0717198f, -0.888712f, -0.452821f);
	glTexCoord2f(1.00000f, 0.200000f);
	glVertex3f(0.000999974f, -0.808017f, -0.588785f);
	// Polygon # 340
	glNormal3f(-0.0247692f, -0.987385f, -0.156386f);
	glTexCoord2f(0.0250000f, 1.39138e-008f);
	glVertex3f(0.00100000f, -0.999000f, -0.00100000f);
	glNormal3f(-0.0908606f, -0.940755f, -0.326687f);
	glTexCoord2f(0.0500000f, 0.100000f);
	glVertex3f(-0.0944915f, -0.950057f, -0.294893f);
	glNormal3f(-0.0488580f, -0.949976f, -0.308477f);
	glTexCoord2f(-5.96046e-008f, 0.100000f);
	glVertex3f(0.000999987f, -0.950057f, -0.310017f);
	// Polygon # 341
	glNormal3f(-0.0718829f, -0.987385f, -0.141078f);
	glTexCoord2f(0.0750000f, 1.39138e-008f);
	glVertex3f(0.00100000f, -0.999000f, -0.00100000f);
	glNormal3f(-0.187365f, -0.940755f, -0.282620f);
	glTexCoord2f(0.100000f, 0.100000f);
	glVertex3f(-0.180636f, -0.950057f, -0.251000f);
	glNormal3f(-0.0908606f, -0.940755f, -0.326687f);
	glTexCoord2f(0.0500000f, 0.100000f);
	glVertex3f(-0.0944915f, -0.950057f, -0.294893f);
	// Polygon # 342
	glNormal3f(-0.111960f, -0.987385f, -0.111960f);
	glTexCoord2f(0.125000f, 1.39138e-008f);
	glVertex3f(0.00100000f, -0.999000f, -0.00100000f);
	glNormal3f(-0.265530f, -0.940755f, -0.210889f);
	glTexCoord2f(0.150000f, 0.100000f);
	glVertex3f(-0.249000f, -0.950057f, -0.182636f);
	glNormal3f(-0.187365f, -0.940755f, -0.282620f);
	glTexCoord2f(0.100000f, 0.100000f);
	glVertex3f(-0.180636f, -0.950057f, -0.251000f);
	// Polygon # 343
	glNormal3f(-0.141078f, -0.987385f, -0.0718830f);
	glTexCoord2f(0.175000f, 1.39138e-008f);
	glVertex3f(0.00100000f, -0.999000f, -0.00100000f);
	glNormal3f(-0.317702f, -0.940755f, -0.118514f);
	glTexCoord2f(0.200000f, 0.100000f);
	glVertex3f(-0.292893f, -0.950057f, -0.0964915f);
	glNormal3f(-0.265530f, -0.940755f, -0.210889f);
	glTexCoord2f(0.150000f, 0.100000f);
	glVertex3f(-0.249000f, -0.950057f, -0.182636f);
	// Polygon # 344
	glNormal3f(-0.156386f, -0.987385f, -0.0247692f);
	glTexCoord2f(0.225000f, 1.39138e-008f);
	glVertex3f(0.00100000f, -0.999000f, -0.00100000f);
	glNormal3f(-0.338775f, -0.940755f, -0.0145382f);
	glTexCoord2f(0.250000f, 0.100000f);
	glVertex3f(-0.308017f, -0.950057f, -0.000999973f);
	glNormal3f(-0.317702f, -0.940755f, -0.118514f);
	glTexCoord2f(0.200000f, 0.100000f);
	glVertex3f(-0.292893f, -0.950057f, -0.0964915f);
	// Polygon # 345
	glNormal3f(-0.156386f, -0.987385f, 0.0247692f);
	glTexCoord2f(0.275000f, 1.39138e-008f);
	glVertex3f(0.00100000f, -0.999000f, -0.00100000f);
	glNormal3f(-0.326687f, -0.940755f, 0.0908606f);
	glTexCoord2f(0.300000f, 0.100000f);
	glVertex3f(-0.292893f, -0.950057f, 0.0944915f);
	glNormal3f(-0.338775f, -0.940755f, -0.0145382f);
	glTexCoord2f(0.250000f, 0.100000f);
	glVertex3f(-0.308017f, -0.950057f, -0.000999973f);
	// Polygon # 346
	glNormal3f(-0.141078f, -0.987385f, 0.0718830f);
	glTexCoord2f(0.325000f, 1.39138e-008f);
	glVertex3f(0.00100000f, -0.999000f, -0.00100000f);
	glNormal3f(-0.282620f, -0.940755f, 0.187365f);
	glTexCoord2f(0.350000f, 0.100000f);
	glVertex3f(-0.249000f, -0.950057f, 0.180636f);
	glNormal3f(-0.326687f, -0.940755f, 0.0908606f);
	glTexCoord2f(0.300000f, 0.100000f);
	glVertex3f(-0.292893f, -0.950057f, 0.0944915f);
	// Polygon # 347
	glNormal3f(-0.111960f, -0.987385f, 0.111960f);
	glTexCoord2f(0.375000f, 1.39138e-008f);
	glVertex3f(0.00100000f, -0.999000f, -0.00100000f);
	glNormal3f(-0.210889f, -0.940755f, 0.265530f);
	glTexCoord2f(0.400000f, 0.100000f);
	glVertex3f(-0.180636f, -0.950057f, 0.249000f);
	glNormal3f(-0.282620f, -0.940755f, 0.187365f);
	glTexCoord2f(0.350000f, 0.100000f);
	glVertex3f(-0.249000f, -0.950057f, 0.180636f);
	// Polygon # 348
	glNormal3f(-0.0718830f, -0.987385f, 0.141078f);
	glTexCoord2f(0.425000f, 1.39138e-008f);
	glVertex3f(0.00100000f, -0.999000f, -0.00100000f);
	glNormal3f(-0.118514f, -0.940755f, 0.317702f);
	glTexCoord2f(0.450000f, 0.100000f);
	glVertex3f(-0.0944914f, -0.950057f, 0.292893f);
	glNormal3f(-0.210889f, -0.940755f, 0.265530f);
	glTexCoord2f(0.400000f, 0.100000f);
	glVertex3f(-0.180636f, -0.950057f, 0.249000f);
	// Polygon # 349
	glNormal3f(-0.0247692f, -0.987385f, 0.156386f);
	glTexCoord2f(0.475000f, 1.39138e-008f);
	glVertex3f(0.00100000f, -0.999000f, -0.00100000f);
	glNormal3f(-0.0145382f, -0.940755f, 0.338775f);
	glTexCoord2f(0.500000f, 0.100000f);
	glVertex3f(0.00100004f, -0.950057f, 0.308017f);
	glNormal3f(-0.118514f, -0.940755f, 0.317702f);
	glTexCoord2f(0.450000f, 0.100000f);
	glVertex3f(-0.0944914f, -0.950057f, 0.292893f);
	// Polygon # 350
	glNormal3f(0.0247692f, -0.987385f, 0.156386f);
	glTexCoord2f(0.525000f, 1.39138e-008f);
	glVertex3f(0.00100000f, -0.999000f, -0.00100000f);
	glNormal3f(0.0908606f, -0.940755f, 0.326687f);
	glTexCoord2f(0.550000f, 0.100000f);
	glVertex3f(0.0964915f, -0.950057f, 0.292893f);
	glNormal3f(-0.0145382f, -0.940755f, 0.338775f);
	glTexCoord2f(0.500000f, 0.100000f);
	glVertex3f(0.00100004f, -0.950057f, 0.308017f);
	// Polygon # 351
	glNormal3f(0.0718830f, -0.987385f, 0.141078f);
	glTexCoord2f(0.575000f, 1.39138e-008f);
	glVertex3f(0.00100000f, -0.999000f, -0.00100000f);
	glNormal3f(0.187365f, -0.940755f, 0.282620f);
	glTexCoord2f(0.600000f, 0.100000f);
	glVertex3f(0.182636f, -0.950057f, 0.249000f);
	glNormal3f(0.0908606f, -0.940755f, 0.326687f);
	glTexCoord2f(0.550000f, 0.100000f);
	glVertex3f(0.0964915f, -0.950057f, 0.292893f);
	// Polygon # 352
	glNormal3f(0.111960f, -0.987385f, 0.111960f);
	glTexCoord2f(0.625000f, 1.39138e-008f);
	glVertex3f(0.00100000f, -0.999000f, -0.00100000f);
	glNormal3f(0.265530f, -0.940755f, 0.210889f);
	glTexCoord2f(0.650000f, 0.100000f);
	glVertex3f(0.251000f, -0.950057f, 0.180636f);
	glNormal3f(0.187365f, -0.940755f, 0.282620f);
	glTexCoord2f(0.600000f, 0.100000f);
	glVertex3f(0.182636f, -0.950057f, 0.249000f);
	// Polygon # 353
	glNormal3f(0.141078f, -0.987385f, 0.0718829f);
	glTexCoord2f(0.675000f, 1.39138e-008f);
	glVertex3f(0.00100000f, -0.999000f, -0.00100000f);
	glNormal3f(0.317702f, -0.940755f, 0.118514f);
	glTexCoord2f(0.700000f, 0.100000f);
	glVertex3f(0.294893f, -0.950057f, 0.0944914f);
	glNormal3f(0.265530f, -0.940755f, 0.210889f);
	glTexCoord2f(0.650000f, 0.100000f);
	glVertex3f(0.251000f, -0.950057f, 0.180636f);
	// Polygon # 354
	glNormal3f(0.156386f, -0.987385f, 0.0247692f);
	glTexCoord2f(0.725000f, 1.39138e-008f);
	glVertex3f(0.00100000f, -0.999000f, -0.00100000f);
	glNormal3f(0.338775f, -0.940755f, 0.0145382f);
	glTexCoord2f(0.750000f, 0.100000f);
	glVertex3f(0.310017f, -0.950057f, -0.00100005f);
	glNormal3f(0.317702f, -0.940755f, 0.118514f);
	glTexCoord2f(0.700000f, 0.100000f);
	glVertex3f(0.294893f, -0.950057f, 0.0944914f);
	// Polygon # 355
	glNormal3f(0.156386f, -0.987385f, -0.0247692f);
	glTexCoord2f(0.775000f, 1.39138e-008f);
	glVertex3f(0.00100000f, -0.999000f, -0.00100000f);
	glNormal3f(0.326687f, -0.940755f, -0.0908606f);
	glTexCoord2f(0.800000f, 0.100000f);
	glVertex3f(0.294893f, -0.950057f, -0.0964915f);
	glNormal3f(0.338775f, -0.940755f, 0.0145382f);
	glTexCoord2f(0.750000f, 0.100000f);
	glVertex3f(0.310017f, -0.950057f, -0.00100005f);
	// Polygon # 356
	glNormal3f(0.141078f, -0.987385f, -0.0718830f);
	glTexCoord2f(0.825000f, 1.39138e-008f);
	glVertex3f(0.00100000f, -0.999000f, -0.00100000f);
	glNormal3f(0.282620f, -0.940755f, -0.187365f);
	glTexCoord2f(0.850000f, 0.100000f);
	glVertex3f(0.251000f, -0.950057f, -0.182636f);
	glNormal3f(0.326687f, -0.940755f, -0.0908606f);
	glTexCoord2f(0.800000f, 0.100000f);
	glVertex3f(0.294893f, -0.950057f, -0.0964915f);
	// Polygon # 357
	glNormal3f(0.111960f, -0.987385f, -0.111960f);
	glTexCoord2f(0.875000f, 1.39138e-008f);
	glVertex3f(0.00100000f, -0.999000f, -0.00100000f);
	glNormal3f(0.210889f, -0.940755f, -0.265530f);
	glTexCoord2f(0.900000f, 0.100000f);
	glVertex3f(0.182636f, -0.950057f, -0.251000f);
	glNormal3f(0.282620f, -0.940755f, -0.187365f);
	glTexCoord2f(0.850000f, 0.100000f);
	glVertex3f(0.251000f, -0.950057f, -0.182636f);
	// Polygon # 358
	glNormal3f(0.0718829f, -0.987385f, -0.141078f);
	glTexCoord2f(0.925000f, 1.39138e-008f);
	glVertex3f(0.00100000f, -0.999000f, -0.00100000f);
	glNormal3f(0.118514f, -0.940755f, -0.317702f);
	glTexCoord2f(0.950000f, 0.100000f);
	glVertex3f(0.0964914f, -0.950057f, -0.294893f);
	glNormal3f(0.210889f, -0.940755f, -0.265530f);
	glTexCoord2f(0.900000f, 0.100000f);
	glVertex3f(0.182636f, -0.950057f, -0.251000f);
	// Polygon # 359
	glNormal3f(0.0247692f, -0.987385f, -0.156386f);
	glTexCoord2f(0.975000f, 1.39138e-008f);
	glVertex3f(0.00100000f, -0.999000f, -0.00100000f);
	glNormal3f(0.0247692f, -0.987385f, -0.156386f);
	glTexCoord2f(1.00000f, 0.100000f);
	glVertex3f(0.000999987f, -0.950057f, -0.310017f);
	glNormal3f(0.118514f, -0.940755f, -0.317702f);
	glTexCoord2f(0.950000f, 0.100000f);
	glVertex3f(0.0964914f, -0.950057f, -0.294893f);
	glEnd();

	glEndList();

	return indice;

}