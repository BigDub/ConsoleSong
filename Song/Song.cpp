// Song.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <ctime>
#include <list>
#include <Windows.h>

using namespace std;

struct note
{
	DWORD freq;
	DWORD dur;
	note(DWORD f, DWORD d)
	{
		freq = f;
		dur = d;
	}
};

void an(DWORD freq, DWORD dur);
void loadSong();
void playNote(note n);

list<note> song;

void playNote(note n)
{
	Beep(n.freq, n.dur);
}

int _tmain(int argc, _TCHAR* argv[])
{
	song = list<note>();
	loadSong();
	for each (note n in song)
	{
		playNote(n);
	}
}
#define n_cl 130.81
#define n_dl 146.83
#define n_el 164.81
#define n_fl 174.61
#define n_gl 196.00
#define n_al 220.00
#define n_bl 246.94
#define n_c 261.63
#define n_dh 293.66
#define n_eh 329.63
#define n_fh 349.23
#define n_gh 392.00
#define n_ah 440.00
#define n_bh 493.88
#define n_ch 523.25
#define n_r 0

#define d_w 2000
#define d_h 1000
#define d_q 500
#define d_e 250
#define d_s 125
void loadSong()
{
	an(n_al, d_h);
	an(n_bl, d_h);
	an(n_c, d_h);
	an(n_gl, d_h);
	an(n_c, d_h);
	an(n_el, d_h);
	an(n_gl, d_h);
	an(n_c, d_h);
}

void an(DWORD freq, DWORD dur)
{
	song.push_back(note(freq, dur));
}