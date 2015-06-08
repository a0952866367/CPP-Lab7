#include <iostream>
#include "IBlock.h"
//#include "SBlock.h"
using namespace std;

int main(){
	I_Block i;
	i.paint();
	i.rotate().paint();
	i.right().paint();
	
	/*S_Block s;
	s.paint();
	s.rotate();
	s.paint();
	s.right();
	s.paint();*/




	return 0;
}

