#pragma once
#include <iostream>
#define _USE_MATH_DEFINES 
#include <math.h>
#include <cmath>
#include <functional>
using namespace std;
using func = function<double(double, double)>;
using funcm = function<double(double)>;
double g(double x, double y)
{
	return (exp(x - y) + exp(-(x - y)))*1.0 / 2;
}

double U(double x, double y)
{
	return exp(pow(sin(M_PI * x * y), 2));
}

double q1(double y)
{
	return pow(sin(M_PI * y), 2);
}

double q2(double y)
{
	return 0;
}

double q3(double x)
{
	return ((exp(pow(x, 2) - 3 * x) + exp(-(pow(x, 2) - 3 * x)))*1.0 / 2) - 1;
}

double q4(double x)
{
	return 0;
}
double f(double x, double y) {
	return -(2 * pow(y, 4) * cos(2 * x * pow(y, 2)) + 8 * pow(x, 2) * pow(y, 2) * cos(2 * x * pow(y, 2)) + 2 * x * sin(2 * x * pow(y, 2)));
}
double fm(double x, double y) {
	return sin(3.1415926535897932384626433832795028841 * x * y) * sin(3.1415926535897932384626433832795028841 * x * y);
}
double fo(double x, double y) {
	return pow(sin(x * pow(y, 2)), 2);
}
double m2m(double y) {
	return  pow(sin(3 * pow(y, 2)), 2);
}
double m1m(double y) {
	return 0;
}
double m3m(double x) {
	return 0;
}
double m4m(double x) {
	return  pow(sin(x), 2);
}
double** function_to_array(const func& g, int N, int M, double a, double b, double c, double d) {
	double h = (b - a) * 1.0 / N;
	double k = (d - c) * 1.0 / M;
	double** F = new double* [N + 1];
	for (int i = 0; i < N + 1; i++)
		F[i] = new double[M + 1];
	for (int i = 0; i < N + 1; i++) {
		for (int j = 0; j < M + 1; j++) {
			F[i][j] = g(a + i * h, c + j * k);
		}
	}
	return F;
}
/*double** fao(int N, int M, double a, double b, double c, double d) {
	double h = (b - a) * 1.0 / N;
	double k = (d - c) * 1.0 / M;
	double** F = new double* [N + 1];
	for (int i = 0; i < N + 1; i++)
		F[i] = new double[M + 1];
	for (int i = 0; i < N + 1; i++) {
		for (int j = 0; j < M + 1; j++) {
			F[i][j] = fo(a + i * h, c + j * k);
		}
	}
	return F;
}*/
double** Relaxationv(const funcm& m1, const funcm& m2, const funcm& m3, const funcm& m4, const func& g1, int N, int M, double w, int Nmax, double eps, double a, double b, double c, double d, double& eps_max, int& S) {
	double eps_cur = 0;
	//double eps_max = 0;
	// S = 0;
	double** f = function_to_array(g1, N, M, a, b, c, d);
	double** v = new double* [N + 1];
	for (int i = 0; i < N + 1; i++) {
		v[i] = new double[M + 1];
	}
	for (int i = 1; i < N; i++) {
		for (int j = 1; j < M; j++) {
			v[i][j] = 0;
		}
	}

	double v_old;
	double v_new;
	bool g = false;
	double h = ((b - a) * 1.0 / N);
	double k = ((d - c) * 1.0 / M);
	double h2 = -1.0 / (h * h);
	double k2 = -1.0 / (k * k);
	double a2 = -2.0 * (h2 + k2);
	for (int j = 0; j < M + 1; j++) {
		v[0][j] = m1(c + k * j);
		v[N][j] = m2(c + k * j);
	}
	for (int i = 1; i < N; i++) {
		v[i][0] = m3(a + h * i);
		v[i][M] = m4(a + h * i);
	}
	while (!g) {
		eps_max = 0;
		for (int j = 1; j < M; j++) {
			for (int i = 1; i < N; i++) {
				v_old = v[i][j];
				v_new = -w * (h2 * (v[i + 1][j] + v[i - 1][j]) + k2 * (v[i][j + 1] + v[i][j - 1]));
				double co = f[i][j];
				v_new = v_new + (1 - w) * a2 * v[i][j] + w * f[i][j];
				v_new = v_new * 1.0 / a2;
				eps_cur = abs(v_new - v_old);
				if (eps_cur > eps_max) { eps_max = eps_cur; }
				v[i][j] = v_new;
			}
		}
		S += 1;
		if ((eps_max <= eps) ||(S >= Nmax)) { g = true; }
	}
	return v;
}