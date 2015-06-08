#ifndef O_BLOCK_H
#define O_BLOCK_H
#include <iostream>
#include "IBlock.h"
using namespace std;

char O_arr [1][4][4] = {{{'0','0','0','0'},
								 {'0','0','0','0'},
								 {'0','0','1','1'},
								 {'0','0','1','1'}}};
class O_Block:public I_Block{
	public:
	void paint() {
		for( int i=0 ; i<4 ; ++i ){
			for( int j=0 ; j<x ; ++j ) cout << ' ';
			for( int j=0 ; j<4 ; ++j )
				cout << O_arr[rotate_index][i][j];
			cout << endl;
		}
		cout << endl;
	}
};
#endif
