#include <iostream> 
#include <windows.h>
#include <string.h>
#include <string>
using namespace std;
/*
0  000000
1  000001
2  000010
3  000011
4  000100
5  000101
6  000110
7  000111
8  001000
9  001001
10 001010
11 001011
12 001100
13 001101
14 001110
15 001111
16 010000
17 010001
18 010010
19 010011
20 010100
21 010101
22 010110
23 010111
24 011000
25 011001
26 011010
27 011011
28 011100
29 011101
30 011110
31 011111
32 100000
33 100001
34 100010
35 100011
36 100100
37 100101
38 100110
39 100111
40 101000
41 101001
42 101010
43 101011
44 101100
45 101101
46 101110
47 101111
48 110000
49 110001
50 110010
51 110011
52 110100
53 110101
54 110110
55 110111
56 111000
57 111001
58 111010
59 111011
60 111100
61 111101
62 111110
63 111111
*/
int main ()
{
	int boss [127][7] = {
	{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},
	{2,2,2,2,0,2,2},		//!
	{5,5,0,0,0,0,2},		//"
	{0,10,63,10,63,10,1},	//#
	{2,7,8,6,1,14,0},		//$
	{57,42,53,15,21,39,1},	//%
	{24,36,24,37,38,29,1},	//&
	{1,1,0,0,0,0,2},		//'
	{1,2,2,2,2,1,2},		//(
	{2,1,1,1,1,2,2},//)
	{0,0,2,7,2,5,2},//*
	{0,0,0,2,7,2,2},//+
	{0,0,0,0,1,1,2},//,
	{0,0,0,0,7,0,2},//-
	{0,0,0,0,0,1,2},//.
	{1,2,4,8,16,32,1},///
	{6,9,11,13,9,6,0},		//0
	{2,6,2,2,2,7,0},		//1
	{6,9,1,2,4,15,0},		//2
	{6,9,2,1,9,6,0},		//3
	{2,6,10,15,2,2,0},		//4
	{15,8,14,1,1,14,0},		//5
	{6,8,14,9,9,6,0},		//6
	{15,9,1,2,4,4,0},		//7
	{6,9,6,9,9,6,0},		//8
	{6,9,9,7,1,6,0},		//9
	{0,1,0,0,1,0,2},//:
	{0,1,0,0,1,1,2},//;
	{0,1,2,4,2,1,2},//<
	{0,0,3,0,3,0,2},//=
	{0,4,2,1,2,4,2},//>
	{6,9,2,4,0,4,0},//?
	{12,18,45,53,43,30,1},//@
	{6,9,9,9,15,9,0},		//A
	{14,9,14,9,9,14,0},		//B
	{6,9,8,8,9,6,0},		//C
	{14,9,9,9,9,14,0},		//D
	{15,8,15,8,8,15,0},		//E
	{15,8,15,8,8,8,0},		//F
	{6,9,8,11,9,6,0},		//G
	{9,9,15,9,9,9,0},		//H
	{7,2,2,2,2,7,2},		//I
	{7,2,2,2,10,4,0},		//J
	{9,10,12,10,9,9,0},		//K
	{8,8,8,8,8,15,0},		//L
	{33,51,45,45,33,33,1},	//M
	{9,13,13,11,11,9,0},	//N
	{6,9,9,9,9,6,0},		//O
	{14,9,9,14,8,8,0},		//P
	{6,9,9,9,6,2,0},		//Q
	{14,9,9,14,10,9,0},		//R
	{7,8,4,2,1,14,0},		//S
	{7,2,2,2,2,2,0},		//T
	{9,9,9,9,9,6,0},		//U
	{9,9,9,9,6,6,0},		//V
	{33,33,45,45,51,33,1},	//W
	{9,9,9,6,9,9,0},		//X
	{9,9,9,6,2,2,0},		//Y
	{15,1,2,4,8,15,0},		//Z
	{3,2,2,2,2,3,2},//[
	{32,16,8,4,2,1,1},//ASCII 92
	{3,1,1,1,1,3,2},//]
	{2,5,0,0,0,0,2},//^
	{0,0,0,0,0,7,0},//_
	{2,1,0,0,0,0,2},//ˋ 
	{0,14,1,15,9,15,0},		//a
	{8,14,9,9,9,14,0},		//b
	{0,7,8,8,8,7,0},		//c
	{1,7,9,9,9,7,0},		//d
	{0,6,9,15,8,6,0},		//e
	{3,4,15,4,4,8,0},		//f
	{0,6,9,7,1,7,0},		//g
	{8,14,9,9,9,9,0},		//h
	{0,2,0,2,2,2,2},		//i
	{0,2,0,2,2,6,2},		//j
	{8,9,10,12,10,9,0},		//k
	{2,2,2,2,2,2,2},		//l
	{0,51,51,45,45,33,1},	//m
	{0,6,9,9,9,9,0},		//n
	{0,6,9,9,9,6,0},		//o
	{0,14,9,9,14,8,0},		//p
	{0,7,9,9,7,1,0},		//q
	{0,11,13,8,8,8,0},		//r
	{0,7,8,6,1,14,0},		//s
	{0,2,7,2,2,3,2},		//t
	{0,9,9,9,9,6,0},		//u
	{0,9,9,9,6,6,0},		//v
	{0,33,45,45,51,51,1},	//w
	{0,9,9,6,9,9,0},		//x
	{0,9,9,6,4,8,0},		//y
	{0,15,10,10,4,15,0},	//z
	{1,2,6,6,2,1,2},//{
	{1,1,1,1,1,1,2},//|
	{4,2,3,3,2,4,2},//}
	{0,0,8,21,2,0,1},//~
	};
	int m , tr = 0 ;
	char word [99999] = { } ;
	int p2[6] = { 0 } ;
	for (int ty = 0 ; ty < 99999 ; ty ++ )
		word [ ty ] = 8 ;
	cin . get ( word , 99999 ) ;
//	cout << word ;
	while ( word [ m ] != 8 )
		m ++ ;
//	cout << m ;
	for ( int t6 = 0 ; t6 < 6 ; t6 ++ )//行數 
	{
		for ( int tm = 0 ; tm < m ; tm ++ )//字元數 
		{
			for ( int t2 = 0 ; t2 < 6 ; t2 ++ )//轉錄
			{
				for ( int epty = 0 ; epty < 6 ; epty ++ )
					p2 [ epty ] = 0 ;
				for ( int t3 = 0 ; t3 < boss [ word [ tm ] ][ t6 ] ; t3 ++ )
				{
					p2 [ 0 ] ++ ;
					for ( int t2z = 0 ; t2z < 6 ; t2z ++ )
					{
						if ( p2 [ t2z ] == 2 )
						{
							p2 [ t2z ] = 0 ;
							p2 [ t2z + 1 ] ++ ;
						}
					}

				}
			}
			 
			if ( boss [ word [ tm ] ][ 6 ] == 1 )
				tr = 6 ;
			else
			{
				if ( boss [ word [ tm ] ][ 6 ] == 2 )
					tr = 3 ;
				else
					tr = 4 ;
			}//*/
			//tr = boss [ word [ tm ] ][ 6 ] ; 
			for ( int tout = 0 ; tout < tr ; tout ++ )//輸出
			{
				if ( p2 [ tr - tout - 1 ] == 0 )
					cout << "  " ;
				else
				{
					Sleep ( 50 ) ;
					cout << "##" ;
				}
			} 
			cout << "    " ;
		}
		cout << endl ;
	}
	system ("pause");


}
