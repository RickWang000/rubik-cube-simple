#include <iostream>
using namespace std;

void shizi(char cube[7][4][4]);
void shiziU(char cube[7][4][4]);
void shiziR(char cube[7][4][4]);
void shiziL(char cube[7][4][4]);
void shiziD(char cube[7][4][4]);

void corner(char cube[7][4][4]);
void corner11(char cube[7][4][4]);
void corner13(char cube[7][4][4]);
void corner31(char cube[7][4][4]);
void corner33(char cube[7][4][4]);

void between(char cube[7][4][4]);
void between1(char cube[7][4][4]);
void between2(char cube[7][4][4]);
void between3(char cube[7][4][4]);
void between4(char cube[7][4][4]);

void topshizi(char cube[7][4][4]);
void topface(char cube[7][4][4]);
void topcorner(char cube[7][4][4]);
void topcorner1(char cube[7][4][4]);
void topmid(char cube[7][4][4]);
void final(char cube[7][4][4]);

void R(char cube[7][4][4]);
void Ri(char cube[7][4][4]);
void L(char cube[7][4][4]);
void Li(char cube[7][4][4]);
void U(char cube[7][4][4]);
void Ui(char cube[7][4][4]);
void D(char cube[7][4][4]);
void Di(char cube[7][4][4]);
void B(char cube[7][4][4]);
void Bi(char cube[7][4][4]);
void F(char cube[7][4][4]);
void Fi(char cube[7][4][4]);

char c1 = {'1'};
char c2 = {'1'};
char c3 = {'1'};
char c4 = {'1'};
char c5 = {'1'};
char c6 = {'1'};

int main()
{

	char Cube[7][4][4] = {'1'};
	for (int i = 1; i < 7; i++)
	{
		for (int j = 1; j < 4; j++)
		{
			for (int k = 1; k < 4; k++)
				cin >> Cube[i][j][k];
		}
		c1 = Cube[1][2][2];
		c2 = Cube[2][2][2];
		c3 = Cube[3][2][2];
		c4 = Cube[4][2][2];
		c5 = Cube[5][2][2];
		c6 = Cube[6][2][2];
	}

	shizi(Cube);
	corner(Cube);
	between(Cube);
	topshizi(Cube);
	topface(Cube);
	topcorner(Cube);
	topmid(Cube);

	system("pause");
	return 0;
}

void shizi(char cube[7][4][4])
{
	shiziU(cube);
	shiziR(cube);
	shiziL(cube);
	shiziD(cube);
}

void corner(char cube[7][4][4])
{
	corner11(cube);
	corner13(cube);
	corner31(cube);
	corner33(cube);
}

void between(char cube[7][4][4])
{
	between1(cube);
	between2(cube);
	between3(cube);
	between4(cube);
}
void shiziU(char cube[7][4][4])
{

	///up
	//1
	if (cube[5][2][1] == c1 && cube[3][1][2] == c5)
	{
		Fi(cube);
		L(cube);
		F(cube);
	}
	if (cube[3][1][2] == c1 && cube[5][2][1] == c5)
	{
		Ui(cube);
	}
	//2
	if (cube[5][1][2] == c1 && cube[2][1][2] == c5)
	{
		Bi(cube);
		Ri(cube);
		U(cube);
	}
	if (cube[2][1][2] == c1 && cube[5][1][2] == c5)
	{
		U(cube);
		U(cube);
	}
	//3
	if (cube[5][2][3] == c1 && cube[4][1][2] == c5)
	{
		U(cube);
		U(cube);
		Fi(cube);
		L(cube);
		F(cube);
	}
	if (cube[4][1][2] == c1 && cube[5][2][3] == c5)
	{
		U(cube);
	}
	//4
	if (cube[5][3][2] == c1 && cube[1][1][2] == c5)
	{
		U(cube);
		Fi(cube);
		L(cube);
		F(cube);
	}
	if (cube[1][1][2] == c1 && cube[5][3][2] == c5)
	{
	}
	//5
	if (cube[3][2][3] == c1 && cube[1][2][1] == c5)
	{
		Li(cube);
		Ui(cube);
	}
	if (cube[1][2][1] == c1 && cube[3][2][3] == c5)
	{
		F(cube);
	}
	//6
	if (cube[1][2][3] == c1 && cube[4][2][1] == c5)
	{
		Fi(cube);
	}
	if (cube[4][2][1] == c1 && cube[1][2][3] == c5)
	{
		R(cube);
		U(cube);
	}
	//7
	if (cube[4][2][3] == c1 && cube[2][2][1] == c5)
	{
		Ri(cube);
		U(cube);
	}
	if (cube[2][2][1] == c1 && cube[4][2][3] == c5)
	{
		R(cube);
		R(cube);
		Fi(cube);
	}
	//8
	if (cube[2][2][3] == c1 && cube[3][2][1] == c5)
	{
		L(cube);
		L(cube);
		F(cube);
	}
	if (cube[3][2][1] == c1 && cube[2][2][3] == c5)
	{
		L(cube);
		Ui(cube);
	}
	//9
	if (cube[6][1][2] == c1 && cube[1][3][2] == c5)
	{
		D(cube);
		R(cube);
		Fi(cube);
	}
	if (cube[1][3][2] == c1 && cube[6][1][2] == c5)
	{
		F(cube);
		F(cube);
	}
	//10
	if (cube[6][2][1] == c1 && cube[3][3][2] == c5)
	{
		Li(cube);
		F(cube);
	}
	if (cube[3][3][2] == c1 && cube[6][2][1] == c5)
	{
		Li(cube);
		Li(cube);
		Ui(cube);
	}
	//11
	if (cube[6][2][3] == c1 && cube[4][3][2] == c5)
	{
		R(cube);
		Fi(cube);
	}
	if (cube[4][3][2] == c1 && cube[6][2][3] == c5)
	{
		R(cube);
		R(cube);
		U(cube);
	}
	//12
	if (cube[6][3][2] == c1 && cube[2][3][2] == c5)
	{
		B(cube);
		Ri(cube);
		U(cube);
	}
	if (cube[2][3][2] == c1 && cube[6][3][2] == c5)
	{
		Di(cube);
		R(cube);
		R(cube);
		U(cube);
	}
}

void shiziR(char cube[7][4][4])
{
	///right
	//1
	if (cube[5][2][1] == c1 && cube[3][1][2] == c4)
	{
		Fi(cube);
		Fi(cube);
		L(cube);
		F(cube);
		F(cube);
	}
	if (cube[3][1][2] == c1 && cube[5][2][1] == c4)
	{
		Fi(cube);
		Ui(cube);
		F(cube);
	}
	//2
	if (cube[5][1][2] == c1 && cube[2][1][2] == c4)
	{
		Bi(cube);
		Ri(cube);
		Fi(cube);
		U(cube);
		F(cube);
	}
	if (cube[2][1][2] == c1 && cube[5][1][2] == c4)
	{
		Bi(cube);
		Ri(cube);
		Ri(cube);
	}
	//3
	if (cube[5][2][3] == c1 && cube[4][1][2] == c4)
	{
		Ri(cube);
	}
	if (cube[4][1][2] == c1 && cube[5][2][3] == c4)
	{
		Fi(cube);
		U(cube);
		F(cube);
	}
	//4//up
	if (cube[5][3][2] == c1 && cube[1][1][2] == c4)
	{
	}
	if (cube[1][1][2] == c1 && cube[5][3][2] == c4)
	{
	}
	//5
	if (cube[3][2][3] == c1 && cube[1][2][1] == c4)
	{
		L(cube);
		D(cube);
		D(cube);
		F(cube);
		Di(cube);
		Fi(cube);
	}
	if (cube[1][2][1] == c1 && cube[3][2][3] == c4)
	{
		L(cube);
		D(cube);
		D(cube);
		R(cube);
	}
	//6
	if (cube[1][2][3] == c1 && cube[4][2][1] == c4)
	{
	} //blank
	if (cube[4][2][1] == c1 && cube[1][2][3] == c4)
	{
		R(cube);
		Fi(cube);
		U(cube);
		F(cube);
	}
	//7
	if (cube[4][2][3] == c1 && cube[2][2][1] == c4)
	{
		Ri(cube);
		Fi(cube);
		U(cube);
		F(cube);
	}
	if (cube[2][2][1] == c1 && cube[4][2][3] == c4)
	{
		Ri(cube);
		Ri(cube);
	}
	//8
	if (cube[2][2][3] == c1 && cube[3][2][1] == c4)
	{
		Li(cube);
		D(cube);
		D(cube);
		R(cube);
	}
	if (cube[3][2][1] == c1 && cube[2][2][3] == c4)
	{
		B(cube);
		Di(cube);
		R(cube);
	}
	//9
	if (cube[6][1][2] == c1 && cube[1][3][2] == c4)
	{
		D(cube);
		R(cube);
	}
	if (cube[1][3][2] == c1 && cube[6][1][2] == c4)
	{
		D(cube);
		F(cube);
		Di(cube);
		Fi(cube);
	}
	//10
	if (cube[6][2][1] == c1 && cube[3][3][2] == c4)
	{
		D(cube);
		D(cube);
		R(cube);
	}
	if (cube[3][3][2] == c1 && cube[6][2][1] == c4)
	{
		D(cube);
		D(cube);
		F(cube);
		Di(cube);
		Fi(cube);
	}
	//11
	if (cube[6][2][3] == c1 && cube[4][3][2] == c4)
	{
		R(cube);
	}
	if (cube[4][3][2] == c1 && cube[6][2][3] == c4)
	{
		F(cube);
		Di(cube);
		Fi(cube);
	}
	//12
	if (cube[6][3][2] == c1 && cube[2][3][2] == c4)
	{
		Di(cube);
		R(cube);
	}
	if (cube[2][3][2] == c1 && cube[6][3][2] == c4)
	{
		Di(cube);
		F(cube);
		Di(cube);
		Fi(cube);
	}
}

void shiziL(char cube[7][4][4])
{
	///left
	//1
	if (cube[5][2][1] == c1 && cube[3][1][2] == c3)
	{
		L(cube);
	}
	if (cube[3][1][2] == c1 && cube[5][2][1] == c3)
	{
		F(cube);
		Ui(cube);
		Fi(cube);
	}
	//2
	if (cube[5][1][2] == c1 && cube[2][1][2] == c3)
	{
		B(cube);
		L(cube);
		F(cube);
		Ui(cube);
		Fi(cube);
	}
	if (cube[2][1][2] == c1 && cube[5][1][2] == c3)
	{
		B(cube);
		L(cube);
		L(cube);
	}
	//3
	if (cube[5][2][3] == c1 && cube[4][1][2] == c3)
	{
		F(cube);
		F(cube);
		Ri(cube);
		Fi(cube);
		Fi(cube);
	}
	if (cube[4][1][2] == c1 && cube[5][2][3] == c3)
	{
		F(cube);
		U(cube);
		Fi(cube);
	}
	//4//up
	if (cube[5][3][2] == c1 && cube[1][1][2] == c3)
	{
	}
	if (cube[1][1][2] == c1 && cube[5][3][2] == c3)
	{
	}
	//5
	if (cube[3][2][3] == c1 && cube[1][2][1] == c3)
	{
		Li(cube);
		F(cube);
		Ui(cube);
		Fi(cube);
	}
	if (cube[1][2][1] == c1 && cube[3][2][3] == c3)
	{
	} //blank
	  //6//right
	if (cube[1][2][3] == c1 && cube[4][2][1] == c3)
	{
	}
	if (cube[4][2][1] == c1 && cube[1][2][3] == c3)
	{
	}
	//7
	if (cube[2][2][1] == c1 && cube[4][2][3] == c3)
	{
		B(cube);
		B(cube);
		L(cube);
		L(cube);
	}
	if (cube[4][2][3] == c1 && cube[2][2][1] == c3)
	{
		Bi(cube);
		D(cube);
		Li(cube);
	}
	//8
	if (cube[2][2][3] == c1 && cube[3][2][1] == c3)
	{
		L(cube);
		L(cube);
	}
	if (cube[3][2][1] == c1 && cube[2][2][3] == c3)
	{
		L(cube);
		F(cube);
		Ui(cube);
		Fi(cube);
	}
	//9
	if (cube[6][1][2] == c1 && cube[1][3][2] == c3)
	{
		Di(cube);
		Li(cube);
	}
	if (cube[1][3][2] == c1 && cube[6][1][2] == c3)
	{
		F(cube);
		Li(cube);
		Fi(cube);
		L(cube);
	}
	//10
	if (cube[6][2][1] == c1 && cube[3][3][2] == c3)
	{
		Li(cube);
	}
	if (cube[3][3][2] == c1 && cube[6][2][1] == c3)
	{
		Fi(cube);
		D(cube);
		F(cube);
	}
	//11
	if (cube[6][2][3] == c1 && cube[4][3][2] == c3)
	{
		Di(cube);
		Di(cube);
		Li(cube);
	}
	if (cube[4][3][2] == c1 && cube[6][2][3] == c3)
	{
		Fi(cube);
		Di(cube);
		F(cube);
	}
	//12
	if (cube[6][3][2] == c1 && cube[2][3][2] == c3)
	{
		D(cube);
		Li(cube);
	}
	if (cube[2][3][2] == c1 && cube[6][3][2] == c3)
	{
		D(cube);
		Fi(cube);
		D(cube);
		F(cube);
	}
}

void shiziD(char cube[7][4][4])
{
	///down
	//1
	if (cube[5][2][1] == c1 && cube[3][1][2] == c6)
	{
		F(cube);
		L(cube);
		Fi(cube);
	}
	if (cube[3][1][2] == c1 && cube[5][2][1] == c6)
	{
		F(cube);
		F(cube);
		Ui(cube);
		Fi(cube);
		Fi(cube);
	}
	//2
	if (cube[5][1][2] == c1 && cube[2][1][2] == c6)
	{
		B(cube);
		B(cube);
		D(cube);
		F(cube);
		Li(cube);
		Fi(cube);
	}
	if (cube[2][1][2] == c1 && cube[5][1][2] == c6)
	{
		Bi(cube);
		Bi(cube);
		Di(cube);
		Di(cube);
	}
	//3
	if (cube[5][2][3] == c1 && cube[4][1][2] == c6)
	{
		Fi(cube);
		Ri(cube);
		F(cube);
	}
	if (cube[4][1][2] == c1 && cube[5][2][3] == c6)
	{
		Fi(cube);
		Fi(cube);
		U(cube);
		F(cube);
		F(cube);
	}
	//4//up
	if (cube[5][3][2] == c1 && cube[1][1][2] == c6)
	{
	}
	if (cube[1][1][2] == c1 && cube[5][3][2] == c6)
	{
	}
	//5//left
	if (cube[3][2][3] == c1 && cube[1][2][1] == c6)
	{
	}
	if (cube[1][2][1] == c1 && cube[3][2][3] == c6)
	{
	}
	//6//right
	if (cube[1][2][3] == c1 && cube[4][2][1] == c6)
	{
	}
	if (cube[4][2][1] == c1 && cube[1][2][3] == c6)
	{
	}
	//7
	if (cube[2][2][1] == c1 && cube[4][2][3] == c6)
	{
		Bi(cube);
		Di(cube);
		Di(cube);
	}
	if (cube[4][2][3] == c1 && cube[2][2][1] == c6)
	{
		R(cube);
		Di(cube);
		Ri(cube);
	}
	//8
	if (cube[2][2][3] == c1 && cube[3][2][1] == c6)
	{
		B(cube);
		Di(cube);
		Di(cube);
	}
	if (cube[3][2][1] == c1 && cube[2][2][3] == c6)
	{
		Li(cube);
		D(cube);
		L(cube);
	}
	//9
	if (cube[6][1][2] == c1 && cube[1][3][2] == c6)
	{
		D(cube);
		Fi(cube);
		R(cube);
		F(cube);
	}
	if (cube[1][3][2] == c1 && cube[6][1][2] == c6)
	{
	} //blank
	  //10
	if (cube[6][2][1] == c1 && cube[3][3][2] == c6)
	{
		F(cube);
		Li(cube);
		Fi(cube);
	}
	if (cube[3][3][2] == c1 && cube[6][2][1] == c6)
	{
		D(cube);
	}
	//11
	if (cube[6][2][3] == c1 && cube[4][3][2] == c6)
	{
		Fi(cube);
		R(cube);
		F(cube);
	}
	if (cube[4][3][2] == c1 && cube[6][2][3] == c6)
	{
		Di(cube);
	}
	//12
	if (cube[6][3][2] == c1 && cube[2][3][2] == c6)
	{
		Di(cube);
		Fi(cube);
		R(cube);
		F(cube);
	}
	if (cube[2][3][2] == c1 && cube[6][3][2] == c6)
	{
		D(cube);
		D(cube);
	}
}

////corner
///11 ����
//1
void corner11(char cube[7][4][4])
{

	///11
	//1
	if (cube[1][1][1] == c1 && cube[3][1][3] == c3 && cube[5][3][1] == c5)
	{
	} //blank
	if (cube[5][3][1] == c1 && cube[1][1][1] == c3 && cube[3][1][3] == c5)
	{
		U(cube);
		B(cube);
		Ui(cube);
		Bi(cube);
		U(cube);
		B(cube);
		Ui(cube);
	}
	if (cube[3][1][3] == c1 && cube[5][3][1] == c3 && cube[1][1][1] == c5)
	{
		U(cube);
		Bi(cube);
		Ui(cube);
		B(cube);
		U(cube);
		Bi(cube);
		Ui(cube);
	}
	//2
	if (cube[1][1][3] == c1 && cube[5][3][3] == c3 && cube[4][1][1] == c5)
	{
		R(cube);
		B(cube);
		Ri(cube);
		B(cube);
		U(cube);
		Bi(cube);
		Ui(cube);
	}
	if (cube[4][1][1] == c1 && cube[1][1][3] == c3 && cube[5][3][3] == c5)
	{
		Ui(cube);
		Bi(cube);
		U(cube);
		Bi(cube);
		U(cube);
		Bi(cube);
		Bi(cube);
		Ui(cube);
		B(cube);
		U(cube);
		Bi(cube);
		Ui(cube);
	}
	if (cube[5][3][3] == c1 && cube[4][1][1] == c3 && cube[1][1][3] == c5)
	{
		R(cube);
		B(cube);
		Ri(cube);
		B(cube);
		U(cube);
		Bi(cube);
		Bi(cube);
		Ui(cube);
		B(cube);
		U(cube);
		Bi(cube);
		Ui(cube);
	}
	//3
	if (cube[1][3][1] == c1 && cube[6][1][1] == c3 && cube[3][3][3] == c5)
	{
		Di(cube);
		Bi(cube);
		D(cube);
		U(cube);
		B(cube);
		Ui(cube);
	}
	if (cube[3][3][3] == c1 && cube[1][3][1] == c3 && cube[6][1][1] == c5)
	{
		L(cube);
		B(cube);
		Li(cube);
		Bi(cube);
		Bi(cube);
		U(cube);
		B(cube);
		Ui(cube);
	}
	if (cube[6][1][1] == c1 && cube[3][3][3] == c3 && cube[1][3][1] == c5)
	{
		Di(cube);
		Bi(cube);
		D(cube);
		Li(cube);
		Bi(cube);
		L(cube);
	}
	//4
	if (cube[1][3][3] == c1 && cube[4][3][1] == c3 && cube[6][1][3] == c5)
	{
		D(cube);
		B(cube);
		Di(cube);
		B(cube);
		B(cube);
		U(cube);
		Bi(cube);
		Ui(cube);
	}
	if (cube[6][1][3] == c1 && cube[1][3][3] == c3 && cube[4][3][1] == c5)
	{
		D(cube);
		B(cube);
		Di(cube);
		Bi(cube);
		Ui(cube);
		B(cube);
		U(cube);
		R(cube);
		B(cube);
		Ri(cube);
		B(cube);
		U(cube);
		Bi(cube);
		Ui(cube);
	}
	if (cube[4][3][1] == c1 && cube[6][1][3] == c3 && cube[1][3][3] == c5)
	{
		Ri(cube);
		B(cube);
		B(cube);
		R(cube);
		B(cube);
		U(cube);
		Bi(cube);
		Ui(cube);
	}
	//5
	if (cube[5][1][1] == c1 && cube[3][1][1] == c3 && cube[2][1][3] == c5)
	{
		U(cube);
		B(cube);
		Ui(cube);
	}
	if (cube[2][1][3] == c1 && cube[5][1][1] == c3 && cube[3][1][1] == c5)
	{
		Li(cube);
		Bi(cube);
		Bi(cube);
		L(cube);
		B(cube);
		Li(cube);
		Bi(cube);
		L(cube);
	}
	if (cube[3][1][1] == c1 && cube[2][1][3] == c3 && cube[5][1][1] == c5)
	{
		B(cube);
		U(cube);
		Bi(cube);
		Ui(cube);
	}
	//6
	if (cube[5][1][3] == c1 && cube[2][1][1] == c3 && cube[4][1][3] == c5)
	{
		B(cube);
		B(cube);
		U(cube);
		Bi(cube);
		Ui(cube);
	}
	if (cube[4][1][3] == c1 && cube[5][1][3] == c3 && cube[2][1][1] == c5)
	{
		B(cube);
		U(cube);
		B(cube);
		Ui(cube);
	}
	if (cube[2][1][1] == c1 && cube[4][1][3] == c3 && cube[5][1][3] == c5)
	{
		B(cube);
		U(cube);
		B(cube);
		B(cube);
		Ui(cube);
		Bi(cube);
		U(cube);
		B(cube);
		Ui(cube);
	}
	//7
	if (cube[4][3][3] == c1 && cube[2][3][1] == c3 && cube[6][3][3] == c5)
	{
		Ri(cube);
		B(cube);
		R(cube);
		U(cube);
		B(cube);
		Ui(cube);
	}
	if (cube[6][3][3] == c1 && cube[4][3][3] == c3 && cube[2][3][1] == c5)
	{
		Ui(cube);
		B(cube);
		U(cube);
		R(cube);
		B(cube);
		Ri(cube);
		B(cube);
		U(cube);
		Bi(cube);
		Ui(cube);
	}
	if (cube[2][3][1] == c1 && cube[6][3][3] == c3 && cube[4][3][3] == c5)
	{
		Bi(cube);
		U(cube);
		Bi(cube);
		Bi(cube);
		Ui(cube);
		B(cube);
		U(cube);
		Bi(cube);
		Ui(cube);
	}
	//8
	if (cube[3][3][1] == c1 && cube[6][3][1] == c3 && cube[2][3][3] == c5)
	{
		Bi(cube);
		U(cube);
		B(cube);
		Ui(cube);
	}
	if (cube[2][3][3] == c1 && cube[3][3][1] == c3 && cube[6][3][1] == c5)
	{
		Bi(cube);
		Li(cube);
		B(cube);
		B(cube);
		L(cube);
		B(cube);
		Li(cube);
		Bi(cube);
		L(cube);
	}
	if (cube[6][3][1] == c1 && cube[2][3][3] == c3 && cube[3][3][1] == c5)
	{
		Bi(cube);
		Li(cube);
		Bi(cube);
		L(cube);
	}
}

////13 ����
//1
void corner13(char cube[7][4][4])
{
	////13
	//1//11
	if (cube[1][1][1] == c1 && cube[5][3][1] == c4 && cube[3][1][3] == c5)
	{
	}
	if (cube[3][1][3] == c1 && cube[1][1][1] == c4 && cube[5][3][1] == c5)
	{
	}
	if (cube[5][3][1] == c1 && cube[3][1][3] == c4 && cube[1][1][1] == c5)
	{
	}
	//2
	if (cube[1][1][3] == c1 && cube[4][1][1] == c4 && cube[5][3][3] == c5)
	{
	} //blank
	if (cube[5][3][3] == c1 && cube[1][1][3] == c4 && cube[4][1][1] == c5)
	{
		Ui(cube);
		Bi(cube);
		U(cube);
		B(cube);
		Ui(cube);
		Bi(cube);
		U(cube);
	}
	if (cube[4][1][1] == c1 && cube[5][3][3] == c4 && cube[1][1][3] == c5)
	{
		Ui(cube);
		B(cube);
		U(cube);
		Bi(cube);
		Ui(cube);
		B(cube);
		U(cube);
	}
	//3
	if (cube[1][3][1] == c1 && cube[3][3][3] == c4 && cube[6][1][1] == c5)
	{
		Di(cube);
		Bi(cube);
		Bi(cube);
		D(cube);
		Bi(cube);
		Ui(cube);
		B(cube);
		U(cube);
	}
	if (cube[6][1][1] == c1 && cube[1][3][1] == c4 && cube[3][3][3] == c5)
	{
		Di(cube);
		Bi(cube);
		D(cube);
		Bi(cube);
		Ui(cube);
		Bi(cube);
		U(cube);
	}
	if (cube[3][3][3] == c1 && cube[6][1][1] == c4 && cube[1][3][1] == c5)
	{
		Di(cube);
		B(cube);
		D(cube);
		Ui(cube);
		Bi(cube);
		Bi(cube);
		U(cube);
	}
	//4
	if (cube[1][3][3] == c1 && cube[6][1][3] == c4 && cube[4][3][1] == c5)
	{
		D(cube);
		B(cube);
		Di(cube);
		Ui(cube);
		Bi(cube);
		U(cube);
	}
	if (cube[4][3][1] == c1 && cube[1][3][3] == c4 && cube[6][1][3] == c5)
	{
		D(cube);
		B(cube);
		Di(cube);
		Ui(cube);
		Bi(cube);
		Bi(cube);
		U(cube);
		B(cube);
		Ui(cube);
		Bi(cube);
		U(cube);
	}
	if (cube[6][1][3] == c1 && cube[4][3][1] == c4 && cube[1][3][3] == c5)
	{
		Ri(cube);
		B(cube);
		R(cube);
		Ui(cube);
		B(cube);
		U(cube);
	}
	//5
	if (cube[5][1][1] == c1 && cube[2][1][3] == c4 && cube[3][1][1] == c5)
	{
		Bi(cube);
		Bi(cube);
		Ui(cube);
		B(cube);
		U(cube);
	}
	if (cube[3][1][1] == c1 && cube[5][1][1] == c4 && cube[2][1][3] == c5)
	{
		Bi(cube);
		Ui(cube);
		Bi(cube);
		U(cube);
	}
	if (cube[2][1][3] == c1 && cube[3][1][1] == c4 && cube[5][1][1] == c5)
	{
		Bi(cube);
		Ui(cube);
		Bi(cube);
		Bi(cube);
		U(cube);
		B(cube);
		Ui(cube);
		Bi(cube);
		U(cube);
	}
	//6
	if (cube[5][1][3] == c1 && cube[4][1][3] == c4 && cube[2][1][1] == c5)
	{
		Ui(cube);
		Bi(cube);
		U(cube);
	}
	if (cube[2][1][1] == c1 && cube[5][1][3] == c4 && cube[4][1][3] == c5)
	{
		Ui(cube);
		Bi(cube);
		Bi(cube);
		U(cube);
		B(cube);
		Ui(cube);
		Bi(cube);
		U(cube);
	}
	if (cube[4][1][3] == c1 && cube[2][1][1] == c4 && cube[5][1][3] == c5)
	{
		R(cube);
		B(cube);
		Ri(cube);
	}
	//7
	if (cube[4][3][3] == c1 && cube[6][3][3] == c4 && cube[2][3][1] == c5)
	{
		B(cube);
		Ui(cube);
		Bi(cube);
		U(cube);
	}
	if (cube[2][3][1] == c1 && cube[4][3][3] == c4 && cube[6][3][3] == c5)
	{
		B(cube);
		Ui(cube);
		Bi(cube);
		Bi(cube);
		U(cube);
		B(cube);
		Ui(cube);
		Bi(cube);
		U(cube);
	}
	if (cube[6][3][3] == c1 && cube[2][3][1] == c4 && cube[4][3][3] == c5)
	{
		B(cube);
		R(cube);
		B(cube);
		Ri(cube);
	}
	//8
	if (cube[3][3][1] == c1 && cube[2][3][3] == c4 && cube[6][3][1] == c5)
	{
		B(cube);
		B(cube);
		R(cube);
		B(cube);
		Ri(cube);
	}
	if (cube[6][3][1] == c1 && cube[3][3][1] == c4 && cube[2][3][3] == c5)
	{
		B(cube);
		B(cube);
		Ui(cube);
		Bi(cube);
		U(cube);
	}
	if (cube[2][3][3] == c1 && cube[6][3][1] == c4 && cube[3][3][1] == c5)
	{
		B(cube);
		B(cube);
		Ui(cube);
		Bi(cube);
		Bi(cube);
		U(cube);
		B(cube);
		Ui(cube);
		Bi(cube);
		U(cube);
	}
}

////  31 ����
//1
void corner31(char cube[7][4][4])
{
	////  31
	//1//11
	if (cube[1][1][1] == c1 && cube[5][3][1] == c3 && cube[3][1][3] == c6)
	{
	}
	if (cube[3][1][3] == c1 && cube[1][1][1] == c3 && cube[5][3][1] == c6)
	{
	}
	if (cube[5][3][1] == c1 && cube[3][1][3] == c3 && cube[1][1][1] == c6)
	{
	}
	//2//13
	if (cube[1][1][3] == c1 && cube[4][1][1] == c3 && cube[5][3][3] == c6)
	{
	}
	if (cube[5][3][3] == c1 && cube[1][1][3] == c3 && cube[4][1][1] == c6)
	{
	}
	if (cube[4][1][1] == c1 && cube[5][3][3] == c3 && cube[1][1][3] == c6)
	{
	}
	//3
	if (cube[1][3][1] == c1 && cube[3][3][3] == c3 && cube[6][1][1] == c6)
	{
	} //blank
	if (cube[6][1][1] == c1 && cube[1][3][1] == c3 && cube[3][3][3] == c6)
	{
		Di(cube);
		Bi(cube);
		D(cube);
		B(cube);
		Di(cube);
		Bi(cube);
		D(cube);
	}
	if (cube[3][3][3] == c1 && cube[6][1][1] == c3 && cube[1][3][1] == c6)
	{
		L(cube);
		B(cube);
		Li(cube);
		Bi(cube);
		L(cube);
		B(cube);
		Li(cube);
	}
	//4
	if (cube[1][3][3] == c1 && cube[6][1][3] == c3 && cube[4][3][1] == c6)
	{
		Ri(cube);
		Bi(cube);
		R(cube);
		Bi(cube);
		Di(cube);
		B(cube);
		D(cube);
	}
	if (cube[4][3][1] == c1 && cube[1][3][3] == c3 && cube[6][1][3] == c6)
	{
		Ri(cube);
		Bi(cube);
		R(cube);
		Di(cube);
		Bi(cube);
		D(cube);
	}
	if (cube[6][1][3] == c1 && cube[4][3][1] == c3 && cube[1][3][3] == c6)
	{
		D(cube);
		B(cube);
		Di(cube);
		Bi(cube);
		Bi(cube);
		L(cube);
		B(cube);
		Li(cube);
	}
	//5
	if (cube[5][1][1] == c1 && cube[2][1][3] == c3 && cube[3][1][1] == c6)
	{
		B(cube);
		L(cube);
		B(cube);
		Li(cube);
	}
	if (cube[3][1][1] == c1 && cube[5][1][1] == c3 && cube[2][1][3] == c6)
	{
		B(cube);
		Di(cube);
		Bi(cube);
		D(cube);
	}
	if (cube[2][1][3] == c1 && cube[3][1][1] == c3 && cube[5][1][1] == c6)
	{
		B(cube);
		Di(cube);
		Bi(cube);
		Bi(cube);
		D(cube);
		B(cube);
		Di(cube);
		Bi(cube);
		D(cube);
	}
	//6
	if (cube[5][1][3] == c1 && cube[4][1][3] == c3 && cube[2][1][1] == c6)
	{
		Bi(cube);
		Bi(cube);
		Di(cube);
		Bi(cube);
		D(cube);
	}
	if (cube[2][1][1] == c1 && cube[5][1][3] == c3 && cube[4][1][3] == c6)
	{
		Bi(cube);
		Bi(cube);
		Di(cube);
		Bi(cube);
		Bi(cube);
		D(cube);
		B(cube);
		Di(cube);
		Bi(cube);
		D(cube);
	}
	if (cube[4][1][3] == c1 && cube[2][1][1] == c3 && cube[5][1][3] == c6)
	{
		Bi(cube);
		Bi(cube);
		L(cube);
		B(cube);
		Li(cube);
	}
	//7
	if (cube[4][3][3] == c1 && cube[6][3][3] == c3 && cube[2][3][1] == c6)
	{
		Bi(cube);
		Di(cube);
		Bi(cube);
		D(cube);
	}
	if (cube[2][3][1] == c1 && cube[4][3][3] == c3 && cube[6][3][3] == c6)
	{
		Bi(cube);
		Di(cube);
		Bi(cube);
		Bi(cube);
		D(cube);
		B(cube);
		Di(cube);
		Bi(cube);
		D(cube);
	}
	if (cube[6][3][3] == c1 && cube[2][3][1] == c3 && cube[4][3][3] == c6)
	{
		Bi(cube);
		Bi(cube);
		Di(cube);
		B(cube);
		D(cube);
	}
	//8
	if (cube[3][3][1] == c1 && cube[2][3][3] == c3 && cube[6][3][1] == c6)
	{
		L(cube);
		B(cube);
		Li(cube);
	}
	if (cube[6][3][1] == c1 && cube[3][3][1] == c3 && cube[2][3][3] == c6)
	{
		Di(cube);
		Bi(cube);
		D(cube);
	}
	if (cube[2][3][3] == c1 && cube[6][3][1] == c3 && cube[3][3][1] == c6)
	{
		Di(cube);
		Bi(cube);
		Bi(cube);
		D(cube);
		B(cube);
		Di(cube);
		Bi(cube);
		D(cube);
	}
}

///33 ����
//1
void corner33(char cube[7][4][4])
{

	if (cube[1][1][1] == c1 && cube[3][1][3] == c4 && cube[5][3][1] == c6)
	{ ////////////////////blank
	}
	if (cube[5][3][1] == c1 && cube[1][1][1] == c4 && cube[3][1][3] == c6)
	{ ////////////////////blank
	}
	if (cube[3][1][3] == c1 && cube[5][3][1] == c4 && cube[1][1][1] == c6)
	{ ////////////////////blank
	}
	//2
	if (cube[1][1][3] == c1 && cube[5][3][3] == c4 && cube[4][1][1] == c6)
	{ ////////////////////////blank
	}
	if (cube[4][1][1] == c1 && cube[1][1][3] == c4 && cube[5][3][3] == c6)
	{ ///////////////////////blank
	}
	if (cube[5][3][3] == c1 && cube[4][1][1] == c4 && cube[1][1][3] == c6)
	{ ///////////////////////blank
	}
	//3
	if (cube[1][3][1] == c1 && cube[6][1][1] == c4 && cube[3][3][3] == c6)
	{ ///////////////////////blank
	}
	if (cube[3][3][3] == c1 && cube[1][3][1] == c4 && cube[6][1][1] == c6)
	{ ////////////////////////blank
	}
	if (cube[6][1][1] == c1 && cube[3][3][3] == c4 && cube[1][3][1] == c6)
	{ ///////////////////////////blank
	}
	//4
	if (cube[1][3][3] == c1 && cube[4][3][1] == c4 && cube[6][1][3] == c6)
	{ //////////////////////////blank
	}
	if (cube[6][1][3] == c1 && cube[1][3][3] == c4 && cube[4][3][1] == c6)
	{
		D(cube);
		B(cube);
		Di(cube);
		Bi(cube);
		D(cube);
		B(cube);
		Di(cube);
	}
	if (cube[4][3][1] == c1 && cube[6][1][3] == c4 && cube[1][3][3] == c6)
	{
		Ri(cube);
		Bi(cube);
		R(cube);
		B(cube);
		Ri(cube);
		Bi(cube);
		R(cube);
	}
	//5
	if (cube[5][1][1] == c1 && cube[3][1][1] == c4 && cube[2][1][3] == c6)
	{
		Bi(cube);
		Bi(cube);
		D(cube);
		B(cube);
		Di(cube);
	}
	if (cube[2][1][3] == c1 && cube[5][1][1] == c4 && cube[3][1][1] == c6)
	{
		B(cube);
		B(cube);
		Ri(cube);
		Bi(cube);
		Bi(cube);
		R(cube);
		B(cube);
		Ri(cube);
		Bi(cube);
		R(cube);
	}
	if (cube[3][1][1] == c1 && cube[2][1][3] == c4 && cube[5][1][1] == c6)
	{
		B(cube);
		B(cube);
		Ri(cube);
		Bi(cube);
		R(cube);
	}
	//6
	if (cube[5][1][3] == c1 && cube[2][1][1] == c4 && cube[4][1][3] == c6)
	{
		Bi(cube);
		Ri(cube);
		Bi(cube);
		R(cube);
	}
	if (cube[4][1][3] == c1 && cube[5][1][3] == c4 && cube[2][1][1] == c6)
	{
		Bi(cube);
		D(cube);
		B(cube);
		Di(cube);
	}
	if (cube[2][1][1] == c1 && cube[4][1][3] == c4 && cube[5][1][3] == c6)
	{
		Bi(cube);
		Ri(cube);
		Bi(cube);
		Bi(cube);
		R(cube);
		B(cube);
		Ri(cube);
		Bi(cube);
		R(cube);
	}
	//7
	if (cube[4][3][3] == c1 && cube[2][3][1] == c4 && cube[6][3][3] == c6)
	{
		Ri(cube);
		Bi(cube);
		R(cube);
	}
	if (cube[6][3][3] == c1 && cube[4][3][3] == c4 && cube[2][3][1] == c6)
	{
		D(cube);
		B(cube);
		Di(cube);
	}
	if (cube[2][3][1] == c1 && cube[6][3][3] == c4 && cube[4][3][3] == c6)
	{
		Ri(cube);
		Bi(cube);
		Bi(cube);
		R(cube);
		B(cube);
		Ri(cube);
		Bi(cube);
		R(cube);
	}
	//8
	if (cube[3][3][1] == c1 && cube[6][3][1] == c4 && cube[2][3][3] == c6)
	{
		B(cube);
		D(cube);
		B(cube);
		Di(cube);
	}
	if (cube[2][3][3] == c1 && cube[3][3][1] == c4 && cube[6][3][1] == c6)
	{
		B(cube);
		Ri(cube);
		Bi(cube);
		Bi(cube);
		R(cube);
		B(cube);
		Ri(cube);
		Bi(cube);
		R(cube);
	}
	if (cube[6][3][1] == c1 && cube[2][3][3] == c4 && cube[3][3][1] == c6)
	{
		B(cube);
		Ri(cube);
		Bi(cube);
		R(cube);
	}
}

void between1(char cube[7][4][4])
{
	//1
	if (cube[5][2][1] == c5 && cube[3][1][2] == c3)
	{ //blank
	}
	if (cube[3][1][2] == c5 && cube[5][2][1] == c3)
	{
		Li(cube);
		B(cube);
		L(cube);
		B(cube);
		U(cube);
		Bi(cube);
		Ui(cube);
		B(cube);
		Li(cube);
		B(cube);
		L(cube);
		B(cube);
		U(cube);
		Bi(cube);
		Ui(cube);
	}
	//2
	if (cube[5][2][3] == c5 && cube[4][1][2] == c3)
	{
		Ui(cube);
		B(cube);
		U(cube);
		B(cube);
		R(cube);
		Bi(cube);
		Ri(cube);
		Bi(cube);
		Bi(cube);
		Li(cube);
		B(cube);
		L(cube);
		B(cube);
		U(cube);
		Bi(cube);
		Ui(cube);
	}
	if (cube[4][1][2] == c5 && cube[5][2][3] == c3)
	{
		Ui(cube);
		B(cube);
		U(cube);
		B(cube);
		R(cube);
		Bi(cube);
		Ri(cube);
		B(cube);
		U(cube);
		Bi(cube);
		Ui(cube);
		Bi(cube);
		Li(cube);
		B(cube);
		L(cube);
	}
	//3
	if (cube[4][3][2] == c5 && cube[6][2][3] == c3)
	{
		Ri(cube);
		B(cube);
		R(cube);
		B(cube);
		D(cube);
		Bi(cube);
		Di(cube);
		Bi(cube);
		Li(cube);
		B(cube);
		L(cube);
		B(cube);
		U(cube);
		Bi(cube);
		Ui(cube);
	}
	if (cube[6][2][3] == c5 && cube[4][3][2] == c3)
	{
		Ri(cube);
		B(cube);
		R(cube);
		B(cube);
		D(cube);
		Bi(cube);
		Di(cube);
		B(cube);
		B(cube);
		U(cube);
		Bi(cube);
		Ui(cube);
		Bi(cube);
		Li(cube);
		B(cube);
		L(cube);
	}
	//4
	if (cube[6][2][1] == c5 && cube[3][3][2] == c3)
	{
		Di(cube);
		B(cube);
		D(cube);
		B(cube);
		L(cube);
		Bi(cube);
		Li(cube);
		Li(cube);
		B(cube);
		L(cube);
		B(cube);
		U(cube);
		Bi(cube);
		Ui(cube);
	}
	if (cube[3][3][2] == c5 && cube[6][2][1] == c3)
	{
		Di(cube);
		B(cube);
		D(cube);
		B(cube);
		L(cube);
		Bi(cube);
		Li(cube);
		Bi(cube);
		U(cube);
		Bi(cube);
		Ui(cube);
		Bi(cube);
		Li(cube);
		B(cube);
		L(cube);
	}
	//5
	if (cube[5][1][2] == c5 && cube[2][1][2] == c3)
	{
		Bi(cube);
		Li(cube);
		B(cube);
		L(cube);
		B(cube);
		U(cube);
		Bi(cube);
		Ui(cube);
	}
	if (cube[2][1][2] == c5 && cube[5][1][2] == c3)
	{
		B(cube);
		B(cube);
		U(cube);
		Bi(cube);
		Ui(cube);
		Bi(cube);
		Li(cube);
		B(cube);
		L(cube);
	}
	//6
	if (cube[4][2][3] == c5 && cube[2][2][1] == c3)
	{
		Li(cube);
		B(cube);
		L(cube);
		B(cube);
		U(cube);
		Bi(cube);
		Ui(cube);
	}
	if (cube[2][2][1] == c5 && cube[4][2][3] == c3)
	{
		Bi(cube);
		U(cube);
		Bi(cube);
		Ui(cube);
		Bi(cube);
		Li(cube);
		B(cube);
		L(cube);
	}
	//7
	if (cube[6][3][2] == c5 && cube[2][3][2] == c3)
	{
		B(cube);
		Li(cube);
		B(cube);
		L(cube);
		B(cube);
		U(cube);
		Bi(cube);
		Ui(cube);
	}
	if (cube[2][3][2] == c5 && cube[6][3][2] == c3)
	{
		U(cube);
		Bi(cube);
		Ui(cube);
		Bi(cube);
		Li(cube);
		B(cube);
		L(cube);
	}
	//8
	if (cube[3][2][1] == c5 && cube[2][2][3] == c3)
	{
		Bi(cube);
		Bi(cube);
		Li(cube);
		B(cube);
		L(cube);
		B(cube);
		U(cube);
		Bi(cube);
		Ui(cube);
	}
	if (cube[2][2][3] == c5 && cube[3][2][1] == c3)
	{
		B(cube);
		U(cube);
		Bi(cube);
		Ui(cube);
		Li(cube);
		B(cube);
		L(cube);
	}
}

void between2(char cube[7][4][4])
{
	//1
	if (cube[5][2][1] == c5 && cube[3][1][2] == c4)
	{ //blank
	}
	if (cube[3][1][2] == c5 && cube[5][2][1] == c4)
	{
	}
	//2
	if (cube[5][2][3] == c5 && cube[4][1][2] == c4)
	{
	}
	if (cube[4][1][2] == c5 && cube[5][2][3] == c4)
	{
		Ui(cube);
		B(cube);
		U(cube);
		B(cube);
		R(cube);
		Bi(cube);
		Ri(cube);
		B(cube);
		Ui(cube);
		B(cube);
		U(cube);
		B(cube);
		R(cube);
		Bi(cube);
		Ri(cube);
	}
	//3
	if (cube[4][3][2] == c5 && cube[6][2][3] == c4)
	{
		D(cube);
		Bi(cube);
		Di(cube);
		Bi(cube);
		Ri(cube);
		B(cube);
		R(cube);
		B(cube);
		Ui(cube);
		B(cube);
		U(cube);
		B(cube);
		R(cube);
		Bi(cube);
		Ri(cube);
	}
	if (cube[6][2][3] == c5 && cube[4][3][2] == c4)
	{
		D(cube);
		Bi(cube);
		Di(cube);
		Bi(cube);
		Ri(cube);
		B(cube);
		R(cube);
		R(cube);
		Bi(cube);
		Ri(cube);
		Bi(cube);
		Ui(cube);
		B(cube);
		U(cube);
	}
	//4
	if (cube[6][2][1] == c5 && cube[3][3][2] == c4)
	{
		Di(cube);
		B(cube);
		D(cube);
		B(cube);
		L(cube);
		Bi(cube);
		Li(cube);
		B(cube);
		B(cube);
		R(cube);
		Bi(cube);
		Ri(cube);
		Bi(cube);
		Ui(cube);
		B(cube);
		U(cube);
	}
	if (cube[3][3][2] == c5 && cube[6][2][1] == c4)
	{
		Di(cube);
		B(cube);
		D(cube);
		B(cube);
		L(cube);
		Bi(cube);
		Li(cube);
		Bi(cube);
		Ui(cube);
		B(cube);
		U(cube);
		B(cube);
		R(cube);
		Bi(cube);
		Ri(cube);
	}
	//5
	if (cube[5][1][2] == c5 && cube[2][1][2] == c4)
	{
		B(cube);
		R(cube);
		Bi(cube);
		Ri(cube);
		Bi(cube);
		Ui(cube);
		B(cube);
		U(cube);
	}
	if (cube[2][1][2] == c5 && cube[5][1][2] == c4)
	{
		Bi(cube);
		Bi(cube);
		Ui(cube);
		B(cube);
		U(cube);
		B(cube);
		R(cube);
		Bi(cube);
		Ri(cube);
	}
	//6
	if (cube[4][2][3] == c5 && cube[2][2][1] == c4)
	{
		B(cube);
		B(cube);
		R(cube);
		Bi(cube);
		Ri(cube);
		Bi(cube);
		Ui(cube);
		B(cube);
		U(cube);
	}
	if (cube[2][2][1] == c5 && cube[4][2][3] == c4)
	{
		Bi(cube);
		Ui(cube);
		B(cube);
		U(cube);
		B(cube);
		R(cube);
		Bi(cube);
		Ri(cube);
	}
	//7
	if (cube[6][3][2] == c5 && cube[2][3][2] == c4)
	{
		Bi(cube);
		R(cube);
		Bi(cube);
		Ri(cube);
		Bi(cube);
		Ui(cube);
		B(cube);
		U(cube);
	}
	if (cube[2][3][2] == c5 && cube[6][3][2] == c4)
	{
		Ui(cube);
		B(cube);
		U(cube);
		B(cube);
		R(cube);
		Bi(cube);
		Ri(cube);
	}
	//8
	if (cube[3][2][1] == c5 && cube[2][2][3] == c4)
	{
		R(cube);
		Bi(cube);
		Ri(cube);
		Bi(cube);
		Ui(cube);
		B(cube);
		U(cube);
	}
	if (cube[2][2][3] == c5 && cube[3][2][1] == c4)
	{
		B(cube);
		Ui(cube);
		B(cube);
		U(cube);
		B(cube);
		R(cube);
		Bi(cube);
		Ri(cube);
	}
}

void between3(char cube[7][4][4])
{
	//1
	if (cube[5][2][1] == c4 && cube[3][1][2] == c6)
	{ //blank
	}
	if (cube[3][1][2] == c4 && cube[5][2][1] == c6)
	{
	}
	//2
	if (cube[5][2][3] == c4 && cube[4][1][2] == c6)
	{
	}
	if (cube[4][1][2] == c4 && cube[5][2][3] == c6)
	{
	}
	//3
	if (cube[4][3][2] == c4 && cube[6][2][3] == c6)
	{
	}
	if (cube[6][2][3] == c4 && cube[4][3][2] == c6)
	{
		Ri(cube);
		B(cube);
		R(cube);
		B(cube);
		D(cube);
		Bi(cube);
		Di(cube);
		B(cube);
		Ri(cube);
		B(cube);
		R(cube);
		B(cube);
		D(cube);
		Bi(cube);
		Di(cube);
	}
	//4
	if (cube[6][2][1] == c4 && cube[3][3][2] == c6)
	{
		L(cube);
		Bi(cube);
		Li(cube);
		Bi(cube);
		Di(cube);
		B(cube);
		D(cube);
		B(cube);
		Ri(cube);
		B(cube);
		R(cube);
		B(cube);
		D(cube);
		Bi(cube);
		Di(cube);
	}
	if (cube[3][3][2] == c4 && cube[6][2][1] == c6)
	{
		L(cube);
		Bi(cube);
		Li(cube);
		Bi(cube);
		Di(cube);
		B(cube);
		D(cube);
		D(cube);
		Bi(cube);
		Di(cube);
		Bi(cube);
		Ri(cube);
		B(cube);
		R(cube);
	}
	//5
	if (cube[5][1][2] == c4 && cube[2][1][2] == c6)
	{
		D(cube);
		Bi(cube);
		Di(cube);
		Bi(cube);
		Ri(cube);
		B(cube);
		R(cube);
	}
	if (cube[2][1][2] == c4 && cube[5][1][2] == c6)
	{
		B(cube);
		Ri(cube);
		B(cube);
		R(cube);
		B(cube);
		D(cube);
		Bi(cube);
		Di(cube);
	}
	//6
	if (cube[4][2][3] == c4 && cube[2][2][1] == c6)
	{
		B(cube);
		D(cube);
		Bi(cube);
		Di(cube);
		Bi(cube);
		Ri(cube);
		B(cube);
		R(cube);
	}
	if (cube[2][2][1] == c4 && cube[4][2][3] == c6)
	{
		Bi(cube);
		Bi(cube);
		Ri(cube);
		B(cube);
		R(cube);
		B(cube);
		D(cube);
		Bi(cube);
		Di(cube);
	}
	//7
	if (cube[6][3][2] == c4 && cube[2][3][2] == c6)
	{
		B(cube);
		B(cube);
		D(cube);
		Bi(cube);
		Di(cube);
		Bi(cube);
		Ri(cube);
		B(cube);
		R(cube);
	}
	if (cube[2][3][2] == c4 && cube[6][3][2] == c6)
	{
		Bi(cube);
		Ri(cube);
		B(cube);
		R(cube);
		B(cube);
		D(cube);
		Bi(cube);
		Di(cube);
	}
	//8
	if (cube[3][2][1] == c4 && cube[2][2][3] == c6)
	{
		Bi(cube);
		D(cube);
		Bi(cube);
		Di(cube);
		Bi(cube);
		Ri(cube);
		B(cube);
		R(cube);
	}
	if (cube[2][2][3] == c4 && cube[3][2][1] == c6)
	{
		Ri(cube);
		B(cube);
		R(cube);
		B(cube);
		D(cube);
		Bi(cube);
		Di(cube);
	}
}
void between4(char cube[7][4][4])
{
	//1
	if (cube[5][2][1] == c3 && cube[3][1][2] == c6)
	{ //blank
	}
	if (cube[3][1][2] == c3 && cube[5][2][1] == c6)
	{
	}
	//2
	if (cube[5][2][3] == c3 && cube[4][1][2] == c6)
	{
	}
	if (cube[4][1][2] == c3 && cube[5][2][3] == c6)
	{
	}
	//3
	if (cube[4][3][2] == c3 && cube[6][2][3] == c6)
	{
	}
	if (cube[6][2][3] == c3 && cube[4][3][2] == c6)
	{
	}
	//4
	if (cube[6][2][1] == c3 && cube[3][3][2] == c6)
	{
		L(cube);
		Bi(cube);
		Li(cube);
		Bi(cube);
		Di(cube);
		B(cube);
		D(cube);
		Bi(cube);
		L(cube);
		Bi(cube);
		Li(cube);
		Bi(cube);
		Di(cube);
		B(cube);
		D(cube);
	}
	if (cube[3][3][2] == c3 && cube[6][2][1] == c6)
	{
	}
	//5
	if (cube[5][1][2] == c3 && cube[2][1][2] == c6)
	{
		Di(cube);
		B(cube);
		D(cube);
		B(cube);
		L(cube);
		Bi(cube);
		Li(cube);
	}
	if (cube[2][1][2] == c3 && cube[5][1][2] == c6)
	{
		Bi(cube);
		L(cube);
		Bi(cube);
		Li(cube);
		Bi(cube);
		Di(cube);
		B(cube);
		D(cube);
	}
	//6
	if (cube[4][2][3] == c3 && cube[2][2][1] == c6)
	{
		B(cube);
		Di(cube);
		B(cube);
		D(cube);
		B(cube);
		L(cube);
		Bi(cube);
		Li(cube);
	}
	if (cube[2][2][1] == c3 && cube[4][2][3] == c6)
	{
		L(cube);
		Bi(cube);
		Li(cube);
		Bi(cube);
		Di(cube);
		B(cube);
		D(cube);
	}
	//7
	if (cube[6][3][2] == c3 && cube[2][3][2] == c6)
	{
		Bi(cube);
		Bi(cube);
		Di(cube);
		B(cube);
		D(cube);
		B(cube);
		L(cube);
		Bi(cube);
		Li(cube);
	}
	if (cube[2][3][2] == c3 && cube[6][3][2] == c6)
	{
		B(cube);
		L(cube);
		Bi(cube);
		Li(cube);
		Bi(cube);
		Di(cube);
		B(cube);
		D(cube);
	}
	//8
	if (cube[3][2][1] == c3 && cube[2][2][3] == c6)
	{
		Bi(cube);
		Di(cube);
		B(cube);
		D(cube);
		B(cube);
		L(cube);
		Bi(cube);
		Li(cube);
	}
	if (cube[2][2][3] == c3 && cube[3][2][1] == c6)
	{
		B(cube);
		B(cube);
		L(cube);
		Bi(cube);
		Li(cube);
		Bi(cube);
		Di(cube);
		B(cube);
		D(cube);
	}
}

void topshizi(char cube[7][4][4])
{
	if (cube[2][1][2] != c2 && cube[2][2][1] != c2 && cube[2][3][2] != c2 && cube[2][2][3] != c2)
	{
		U(cube);
		R(cube);
		B(cube);
		Ri(cube);
		Bi(cube);
		Ui(cube);
		U(cube);
		R(cube);
		B(cube);
		Ri(cube);
		Bi(cube);
		Ui(cube);
	}

	if (cube[2][1][2] == c2 && cube[2][2][1] != c2 && cube[2][3][2] == c2 && cube[2][2][3] != c2)
	{
		Bi(cube);
		U(cube);
		R(cube);
		B(cube);
		Ri(cube);
		Bi(cube);
		Ui(cube);
	}

	if (cube[2][1][2] != c2 && cube[2][2][1] == c2 && cube[2][3][2] != c2 && cube[2][2][3] == c2)
	{
		U(cube);
		R(cube);
		B(cube);
		Ri(cube);
		Bi(cube);
		Ui(cube);
	}

	if (cube[2][1][2] != c2 && cube[2][2][1] != c2 && cube[2][3][2] == c2 && cube[2][2][3] == c2)
	{
		U(cube);
		R(cube);
		B(cube);
		Ri(cube);
		Bi(cube);
		Ui(cube);
		U(cube);
		R(cube);
		B(cube);
		Ri(cube);
		Bi(cube);
		Ui(cube);
	}

	if (cube[2][1][2] == c2 && cube[2][2][1] != c2 && cube[2][3][2] != c2 && cube[2][2][3] == c2)
	{
		B(cube);
		U(cube);
		R(cube);
		B(cube);
		Ri(cube);
		Bi(cube);
		Ui(cube);
		U(cube);
		R(cube);
		B(cube);
		Ri(cube);
		Bi(cube);
		Ui(cube);
	}

	if (cube[2][1][2] == c2 && cube[2][2][1] == c2 && cube[2][3][2] != c2 && cube[2][2][3] != c2)
	{
		B(cube);
		B(cube);
		U(cube);
		R(cube);
		B(cube);
		Ri(cube);
		Bi(cube);
		Ui(cube);
		U(cube);
		R(cube);
		B(cube);
		Ri(cube);
		Bi(cube);
		Ui(cube);
	}

	if (cube[2][1][2] != c2 && cube[2][2][1] == c2 && cube[2][3][2] == c2 && cube[2][2][3] != c2)
	{
		Bi(cube);
		U(cube);
		R(cube);
		B(cube);
		Ri(cube);
		Bi(cube);
		Ui(cube);
		U(cube);
		R(cube);
		B(cube);
		Ri(cube);
		Bi(cube);
		Ui(cube);
	}
}

void topface(char cube[7][4][4])
{
	///1
	if (
		cube[3][3][1] == c2 &&
		cube[2][1][3] == c2 &&
		cube[4][1][3] == c2 &&
		cube[5][1][1] == c2)
	{
		R(cube);
		Bi(cube);
		Bi(cube);
		Ri(cube);
		Bi(cube);
		R(cube);
		Bi(cube);
		Ri(cube);
	}
	if (
		cube[3][3][1] == c2 &&
		cube[6][3][3] == c2 &&
		cube[5][1][1] == c2 &&
		cube[2][1][1] == c2)
	{
		Bi(cube);
		R(cube);
		Bi(cube);
		Bi(cube);
		Ri(cube);
		Bi(cube);
		R(cube);
		Bi(cube);
		Ri(cube);
	}
	if (
		cube[3][3][1] == c2 &&
		cube[6][3][3] == c2 &&
		cube[4][1][3] == c2 &&
		cube[2][1][3] == c2)
	{
		Bi(cube);
		Bi(cube);
		R(cube);
		Bi(cube);
		Bi(cube);
		Ri(cube);
		Bi(cube);
		R(cube);
		Bi(cube);
		Ri(cube);
	}
	if (
		cube[2][3][3] == c2 &&
		cube[6][3][3] == c2 &&
		cube[4][1][3] == c2 &&
		cube[5][1][1] == c2)
	{
		B(cube);
		R(cube);
		Bi(cube);
		Bi(cube);
		Ri(cube);
		Bi(cube);
		R(cube);
		Bi(cube);
		Ri(cube);
	}

	///2
	if (
		cube[6][3][1] == c2 &&
		cube[2][3][1] == c2 &&
		cube[5][1][3] == c2)
	{
		R(cube);
		Bi(cube);
		Bi(cube);
		Ri(cube);
		Bi(cube);
		R(cube);
		Bi(cube);
		Ri(cube);
		B(cube);
		B(cube);
		R(cube);
		Bi(cube);
		Bi(cube);
		Ri(cube);
		Bi(cube);
		R(cube);
		Bi(cube);
		Ri(cube);
	}
	if (
		cube[6][3][1] == c2 &&
		cube[4][3][3] == c2 &&
		cube[3][1][1] == c2 &&
		cube[2][1][1] == c2)
	{
		Bi(cube);
		R(cube);
		Bi(cube);
		Bi(cube);
		Ri(cube);
		Bi(cube);
		R(cube);
		Bi(cube);
		Ri(cube);
		B(cube);
		B(cube);
		R(cube);
		Bi(cube);
		Bi(cube);
		Ri(cube);
		Bi(cube);
		R(cube);
		Bi(cube);
		Ri(cube);
	}
	if (
		cube[6][3][1] == c2 &&
		cube[4][3][3] == c2 &&
		cube[2][1][3] == c2 &&
		cube[5][1][3] == c2)
	{
		Bi(cube);
		Bi(cube);
		R(cube);
		Bi(cube);
		Bi(cube);
		Ri(cube);
		Bi(cube);
		R(cube);
		Bi(cube);
		Ri(cube);
		B(cube);
		B(cube);
		R(cube);
		Bi(cube);
		Bi(cube);
		Ri(cube);
		Bi(cube);
		R(cube);
		Bi(cube);
		Ri(cube);
	}
	if (
		cube[2][3][3] == c2 &&
		cube[3][1][1] == c2 &&
		cube[5][1][3] == c2 &&
		cube[4][3][3] == c2)
	{
		B(cube);
		R(cube);
		Bi(cube);
		Bi(cube);
		Ri(cube);
		Bi(cube);
		R(cube);
		Bi(cube);
		Ri(cube);
		B(cube);
		B(cube);
		R(cube);
		Bi(cube);
		Bi(cube);
		Ri(cube);
		Bi(cube);
		R(cube);
		Bi(cube);
		Ri(cube);
	}
	///3
	if (
		cube[2][3][3] == c2 &&
		cube[4][3][3] == c2 &&
		cube[2][1][3] == c2 &&
		cube[4][1][3] == c2)
	{
		R(cube);
		Bi(cube);
		Bi(cube);
		Ri(cube);
		Bi(cube);
		R(cube);
		Bi(cube);
		Ri(cube);
		B(cube);
		R(cube);
		Bi(cube);
		Bi(cube);
		Ri(cube);
		Bi(cube);
		R(cube);
		Bi(cube);
		Ri(cube);
		B(cube);
		B(cube);
		R(cube);
		Bi(cube);
		Bi(cube);
		Ri(cube);
		Bi(cube);
		R(cube);
		Bi(cube);
		Ri(cube);
	}
	if (
		cube[6][3][1] == c2 &&
		cube[6][3][3] == c2 &&
		cube[2][1][1] == c2 &&
		cube[2][1][3] == c2)
	{
		Bi(cube);
		R(cube);
		Bi(cube);
		Bi(cube);
		Ri(cube);
		Bi(cube);
		R(cube);
		Bi(cube);
		Ri(cube);
		Bi(cube);
		R(cube);
		Bi(cube);
		Bi(cube);
		Ri(cube);
		Bi(cube);
		R(cube);
		Bi(cube);
		Ri(cube);
		B(cube);
		B(cube);
		R(cube);
		Bi(cube);
		Bi(cube);
		Ri(cube);
		Bi(cube);
		R(cube);
		Bi(cube);
		Ri(cube);
	}
	if (
		cube[3][1][1] == c2 &&
		cube[3][3][1] == c2 &&
		cube[2][1][1] == c2 &&
		cube[2][3][1] == c2)
	{
		B(cube);
		B(cube);
		R(cube);
		Bi(cube);
		Bi(cube);
		Ri(cube);
		Bi(cube);
		R(cube);
		Bi(cube);
		Ri(cube);
		B(cube);
		R(cube);
		Bi(cube);
		Bi(cube);
		Ri(cube);
		Bi(cube);
		R(cube);
		Bi(cube);
		Ri(cube);
		B(cube);
		B(cube);
		R(cube);
		Bi(cube);
		Bi(cube);
		Ri(cube);
		Bi(cube);
		R(cube);
		Bi(cube);
		Ri(cube);
	}
	if (
		cube[5][1][1] == c2 &&
		cube[5][1][3] == c2 &&
		cube[2][3][1] == c2 &&
		cube[2][3][3] == c2)
	{
		Bi(cube);
		R(cube);
		Bi(cube);
		Bi(cube);
		Ri(cube);
		Bi(cube);
		R(cube);
		Bi(cube);
		Ri(cube);
		B(cube);
		R(cube);
		Bi(cube);
		Bi(cube);
		Ri(cube);
		Bi(cube);
		R(cube);
		Bi(cube);
		Ri(cube);
		B(cube);
		B(cube);
		R(cube);
		Bi(cube);
		Bi(cube);
		Ri(cube);
		Bi(cube);
		R(cube);
		Bi(cube);
		Ri(cube);
	}
	///4
	if (
		cube[5][1][1] == c2 &&
		cube[4][3][3] == c2 &&
		cube[2][1][1] == c2 &&
		cube[2][3][3] == c2)
	{
		R(cube);
		Bi(cube);
		Bi(cube);
		Ri(cube);
		Bi(cube);
		R(cube);
		Bi(cube);
		Ri(cube);
		R(cube);
		Bi(cube);
		Bi(cube);
		Ri(cube);
		Bi(cube);
		R(cube);
		Bi(cube);
		Ri(cube);
		B(cube);
		B(cube);
		R(cube);
		Bi(cube);
		Bi(cube);
		Ri(cube);
		Bi(cube);
		R(cube);
		Bi(cube);
		Ri(cube);
	}
	if (
		cube[2][1][3] == c2 &&
		cube[2][3][1] == c2 &&
		cube[4][1][3] == c2 &&
		cube[6][3][1] == c2)
	{
		B(cube);
		R(cube);
		Bi(cube);
		Bi(cube);
		Ri(cube);
		Bi(cube);
		R(cube);
		Bi(cube);
		Ri(cube);
		R(cube);
		Bi(cube);
		Bi(cube);
		Ri(cube);
		Bi(cube);
		R(cube);
		Bi(cube);
		Ri(cube);
		B(cube);
		B(cube);
		R(cube);
		Bi(cube);
		Bi(cube);
		Ri(cube);
		Bi(cube);
		R(cube);
		Bi(cube);
		Ri(cube);
	}
	if (
		cube[2][1][1] == c2 &&
		cube[2][3][3] == c2 &&
		cube[3][1][1] == c2 &&
		cube[6][3][3] == c2)
	{
		B(cube);
		B(cube);
		R(cube);
		Bi(cube);
		Bi(cube);
		Ri(cube);
		Bi(cube);
		R(cube);
		Bi(cube);
		Ri(cube);
		R(cube);
		Bi(cube);
		Bi(cube);
		Ri(cube);
		Bi(cube);
		R(cube);
		Bi(cube);
		Ri(cube);
		B(cube);
		B(cube);
		R(cube);
		Bi(cube);
		Bi(cube);
		Ri(cube);
		Bi(cube);
		R(cube);
		Bi(cube);
		Ri(cube);
	}
	if (
		cube[2][1][3] == c2 &&
		cube[2][3][1] == c2 &&
		cube[5][1][3] == c2 &&
		cube[3][3][1] == c2)
	{
		Bi(cube);
		R(cube);
		Bi(cube);
		Bi(cube);
		Ri(cube);
		Bi(cube);
		R(cube);
		Bi(cube);
		Ri(cube);
		R(cube);
		Bi(cube);
		Bi(cube);
		Ri(cube);
		Bi(cube);
		R(cube);
		Bi(cube);
		Ri(cube);
		B(cube);
		B(cube);
		R(cube);
		Bi(cube);
		Bi(cube);
		Ri(cube);
		Bi(cube);
		R(cube);
		Bi(cube);
		Ri(cube);
	}
	///5
	if (
		cube[5][1][1] == c2 &&
		cube[5][1][3] == c2 &&
		cube[6][3][1] == c2 &&
		cube[6][3][3] == c2)
	{
		R(cube);
		Bi(cube);
		Bi(cube);
		Ri(cube);
		Bi(cube);
		R(cube);
		Bi(cube);
		Ri(cube);
		R(cube);
		Bi(cube);
		Bi(cube);
		Ri(cube);
		Bi(cube);
		R(cube);
		Bi(cube);
		Ri(cube);
	}
	if (
		cube[4][1][3] == c2 &&
		cube[4][3][3] == c2 &&
		cube[3][1][1] == c2 &&
		cube[3][3][1] == c2)
	{
		B(cube);
		R(cube);
		Bi(cube);
		Bi(cube);
		Ri(cube);
		Bi(cube);
		R(cube);
		Bi(cube);
		Ri(cube);
		R(cube);
		Bi(cube);
		Bi(cube);
		Ri(cube);
		Bi(cube);
		R(cube);
		Bi(cube);
		Ri(cube);
	}

	///6
	if (
		cube[6][3][1] == c2 &&
		cube[6][3][3] == c2 &&
		cube[3][1][1] == c2 &&
		cube[4][1][3] == c2)
	{
		R(cube);
		Bi(cube);
		Bi(cube);
		Ri(cube);
		Bi(cube);
		R(cube);
		Bi(cube);
		Ri(cube);
		B(cube);
		R(cube);
		Bi(cube);
		Bi(cube);
		Ri(cube);
		Bi(cube);
		R(cube);
		Bi(cube);
		Ri(cube);
	}
	if (
		cube[3][1][1] == c2 &&
		cube[3][3][1] == c2 &&
		cube[5][1][3] == c2 &&
		cube[6][3][3] == c2)
	{
		B(cube);
		R(cube);
		Bi(cube);
		Bi(cube);
		Ri(cube);
		Bi(cube);
		R(cube);
		Bi(cube);
		Ri(cube);
		B(cube);
		R(cube);
		Bi(cube);
		Bi(cube);
		Ri(cube);
		Bi(cube);
		R(cube);
		Bi(cube);
		Ri(cube);
	}
	if (
		cube[5][1][1] == c2 &&
		cube[5][1][3] == c2 &&
		cube[3][3][1] == c2 &&
		cube[4][3][3] == c2)
	{
		B(cube);
		B(cube);
		R(cube);
		Bi(cube);
		Bi(cube);
		Ri(cube);
		Bi(cube);
		R(cube);
		Bi(cube);
		Ri(cube);
		B(cube);
		R(cube);
		Bi(cube);
		Bi(cube);
		Ri(cube);
		Bi(cube);
		R(cube);
		Bi(cube);
		Ri(cube);
	}
	if (
		cube[5][1][1] == c2 &&
		cube[4][1][3] == c2 &&
		cube[4][3][3] == c2 &&
		cube[6][3][1] == c2)
	{
		Bi(cube);
		R(cube);
		Bi(cube);
		Bi(cube);
		Ri(cube);
		Bi(cube);
		R(cube);
		Bi(cube);
		Ri(cube);
		B(cube);
		R(cube);
		Bi(cube);
		Bi(cube);
		Ri(cube);
		Bi(cube);
		R(cube);
		Bi(cube);
		Ri(cube);
	}
	///7
	if (
		cube[2][1][3] == c2 &&
		cube[2][3][3] == c2 &&
		cube[5][1][3] == c2 &&
		cube[6][3][3] == c2)
	{
		R(cube);
		Bi(cube);
		Bi(cube);
		Ri(cube);
		Bi(cube);
		R(cube);
		Bi(cube);
		Ri(cube);
		B(cube);
		B(cube);
		R(cube);
		Bi(cube);
		Bi(cube);
		Ri(cube);
		Bi(cube);
		R(cube);
		Bi(cube);
		Ri(cube);
		B(cube);
		R(cube);
		Bi(cube);
		Bi(cube);
		Ri(cube);
		Bi(cube);
		R(cube);
		Bi(cube);
		Ri(cube);
	}
	if (
		cube[2][1][1] == c2 &&
		cube[2][1][3] == c2 &&
		cube[4][3][3] == c2 &&
		cube[3][3][1] == c2)
	{
		B(cube);
		R(cube);
		Bi(cube);
		Bi(cube);
		Ri(cube);
		Bi(cube);
		R(cube);
		Bi(cube);
		Ri(cube);
		B(cube);
		B(cube);
		R(cube);
		Bi(cube);
		Bi(cube);
		Ri(cube);
		Bi(cube);
		R(cube);
		Bi(cube);
		Ri(cube);
		B(cube);
		R(cube);
		Bi(cube);
		Bi(cube);
		Ri(cube);
		Bi(cube);
		R(cube);
		Bi(cube);
		Ri(cube);
	}
	if (
		cube[2][1][1] == c2 &&
		cube[2][3][1] == c2 &&
		cube[5][1][1] == c2 &&
		cube[6][3][1] == c2)
	{
		B(cube);
		B(cube);
		R(cube);
		Bi(cube);
		Bi(cube);
		Ri(cube);
		Bi(cube);
		R(cube);
		Bi(cube);
		Ri(cube);
		B(cube);
		B(cube);
		R(cube);
		Bi(cube);
		Bi(cube);
		Ri(cube);
		Bi(cube);
		R(cube);
		Bi(cube);
		Ri(cube);
		B(cube);
		R(cube);
		Bi(cube);
		Bi(cube);
		Ri(cube);
		Bi(cube);
		R(cube);
		Bi(cube);
		Ri(cube);
	}
	if (
		cube[4][1][3] == c2 &&
		cube[3][1][1] == c2 &&
		cube[2][3][1] == c2 &&
		cube[2][3][3] == c2)
	{
		Bi(cube);
		R(cube);
		Bi(cube);
		Bi(cube);
		Ri(cube);
		Bi(cube);
		R(cube);
		Bi(cube);
		Ri(cube);
		B(cube);
		B(cube);
		R(cube);
		Bi(cube);
		Bi(cube);
		Ri(cube);
		Bi(cube);
		R(cube);
		Bi(cube);
		Ri(cube);
		B(cube);
		R(cube);
		Bi(cube);
		Bi(cube);
		Ri(cube);
		Bi(cube);
		R(cube);
		Bi(cube);
		Ri(cube);
	}
}

void topcorner(char cube[7][4][4])
{

	if (cube[5][1][1] != cube[5][1][3] &&
		cube[4][1][3] != cube[4][3][3] &&
		cube[3][1][1] != cube[3][3][1] &&
		cube[6][3][1] != cube[6][3][3])
	{
		R(cube);
		Di(cube);
		R(cube);
		U(cube);
		U(cube);
		Ri(cube);
		D(cube);
		R(cube);
		U(cube);
		U(cube);
		R(cube);
		R(cube);
	}
	topcorner1(cube);
}

void topcorner1(char cube[7][4][4])
{

	/////1
	if (cube[5][1][1] == cube[5][1][3] &&
		cube[4][1][3] != cube[4][3][3] &&
		cube[3][1][1] != cube[3][3][1] &&
		cube[6][3][1] != cube[6][3][3])
	{
		R(cube);
		Di(cube);
		R(cube);
		U(cube);
		U(cube);
		Ri(cube);
		D(cube);
		R(cube);
		U(cube);
		U(cube);
		R(cube);
		R(cube);
	}

	if (cube[5][1][1] != cube[5][1][3] &&
		cube[4][1][3] == cube[4][3][3] &&
		cube[3][1][1] != cube[3][3][1] &&
		cube[6][3][1] != cube[6][3][3])
	{
		B(cube);
		R(cube);
		Di(cube);
		R(cube);
		U(cube);
		U(cube);
		Ri(cube);
		D(cube);
		R(cube);
		U(cube);
		U(cube);
		R(cube);
		R(cube);
	}

	if (cube[5][1][1] != cube[5][1][3] &&
		cube[4][1][3] != cube[4][3][3] &&
		cube[3][1][1] == cube[3][3][1] &&
		cube[6][3][1] != cube[6][3][3])
	{
		Bi(cube);
		R(cube);
		Di(cube);
		R(cube);
		U(cube);
		U(cube);
		Ri(cube);
		D(cube);
		R(cube);
		U(cube);
		U(cube);
		R(cube);
		R(cube);
	}

	if (cube[5][1][1] != cube[5][1][3] &&
		cube[4][1][3] != cube[4][3][3] &&
		cube[3][1][1] != cube[3][3][1] &&
		cube[6][3][1] == cube[6][3][3])
	{
		B(cube);
		B(cube);
		R(cube);
		Di(cube);
		R(cube);
		U(cube);
		U(cube);
		Ri(cube);
		D(cube);
		R(cube);
		U(cube);
		U(cube);
		R(cube);
		R(cube);
	}
}

void topmid(char cube[7][4][4])
{
	if (cube[5][1][1] == cube[5][1][2] &&
		cube[4][1][3] == cube[4][2][3] &&
		cube[6][3][1] == cube[6][3][2] &&
		cube[3][1][1] == cube[3][2][1])
	{
		return final(cube);
	}

	if (cube[5][1][1] != cube[5][1][2] &&
		cube[4][1][3] != cube[4][2][3] &&
		cube[6][3][1] != cube[6][3][2] &&
		cube[3][1][1] != cube[3][2][1])
	{
		R(cube);
		Bi(cube);
		R(cube);
		B(cube);
		R(cube);
		B(cube);
		R(cube);
		Bi(cube);
		Ri(cube);
		Bi(cube);
		R(cube);
		R(cube);
	}

	if (cube[5][1][1] == cube[5][1][2] &&
		cube[4][1][3] != cube[4][2][3] &&
		cube[6][3][1] != cube[6][3][2] &&
		cube[3][1][1] != cube[3][2][1])
	{
		B(cube);
		B(cube);
	}

	if (cube[5][1][1] != cube[5][1][2] &&
		cube[4][1][3] == cube[4][2][3] &&
		cube[6][3][1] != cube[6][3][2] &&
		cube[3][1][1] != cube[3][2][1])
	{
		Bi(cube);
	}

	if (cube[5][1][1] != cube[5][1][2] &&
		cube[4][1][3] != cube[4][2][3] &&
		cube[6][3][1] != cube[6][3][2] &&
		cube[3][1][1] == cube[3][2][1])
	{
		B(cube);
	}

	R(cube);
	Bi(cube);
	R(cube);
	B(cube);
	R(cube);
	B(cube);
	R(cube);
	Bi(cube);
	Ri(cube);
	Bi(cube);
	R(cube);
	R(cube);

	topmid(cube);
}

void final(char cube[7][4][4])
{
	if (cube[4][1][3] == c5)
	{
		B(cube);
	}
	if (cube[6][3][1] == c5)
	{
		B(cube);
		B(cube);
	}
	if (cube[3][1][1] == c5)
	{
		Bi(cube);
	}
}

void R(char cube[7][4][4])
{
	char f1 = {'c'};
	char f2 = {'c'};
	char f3 = {'c'};
	char r1 = {'c'};
	char r2 = {'c'};
	f1 = cube[1][1][3];
	f2 = cube[1][2][3];
	f3 = cube[1][3][3];
	cube[1][1][3] = cube[6][1][3];
	cube[1][2][3] = cube[6][2][3];
	cube[1][3][3] = cube[6][3][3];
	cube[6][1][3] = cube[2][3][1];
	cube[6][2][3] = cube[2][2][1];
	cube[6][3][3] = cube[2][1][1];
	cube[2][3][1] = cube[5][1][3];
	cube[2][2][1] = cube[5][2][3];
	cube[2][1][1] = cube[5][3][3];
	cube[5][1][3] = f1;
	cube[5][2][3] = f2;
	cube[5][3][3] = f3;
	r1 = cube[4][1][1];
	cube[4][1][1] = cube[4][3][1];
	cube[4][3][1] = cube[4][3][3];
	cube[4][3][3] = cube[4][1][3];
	cube[4][1][3] = r1;
	r2 = cube[4][2][1];
	cube[4][2][1] = cube[4][3][2];
	cube[4][3][2] = cube[4][2][3];
	cube[4][2][3] = cube[4][1][2];
	cube[4][1][2] = r2;
	cout << "R"
		 << " ";
}

void Ri(char cube[7][4][4])
{
	char f1 = {'c'};
	char f2 = {'c'};
	char f3 = {'c'};
	char r1 = {'c'};
	char r2 = {'c'};
	f1 = cube[6][1][3];
	f2 = cube[6][2][3];
	f3 = cube[6][3][3];
	cube[6][1][3] = cube[1][1][3];
	cube[6][2][3] = cube[1][2][3];
	cube[6][3][3] = cube[1][3][3];
	cube[1][1][3] = cube[5][1][3];
	cube[1][2][3] = cube[5][2][3];
	cube[1][3][3] = cube[5][3][3];
	cube[5][1][3] = cube[2][3][1];
	cube[5][2][3] = cube[2][2][1];
	cube[5][3][3] = cube[2][1][1];
	cube[2][3][1] = f1;
	cube[2][2][1] = f2;
	cube[2][1][1] = f3;
	r1 = cube[4][3][1];
	cube[4][3][1] = cube[4][1][1];
	cube[4][1][1] = cube[4][1][3];
	cube[4][1][3] = cube[4][3][3];
	cube[4][3][3] = r1;
	r2 = cube[4][3][2];
	cube[4][3][2] = cube[4][2][1];
	cube[4][2][1] = cube[4][1][2];
	cube[4][1][2] = cube[4][2][3];
	cube[4][2][3] = r2;
	cout << "Ri"
		 << " ";
}

void Li(char cube[7][4][4])
{
	char f1 = {'c'};
	char f2 = {'c'};
	char f3 = {'c'};
	char r1 = {'c'};
	char r2 = {'c'};
	f1 = cube[1][1][1];
	f2 = cube[1][2][1];
	f3 = cube[1][3][1];
	cube[1][1][1] = cube[6][1][1];
	cube[1][2][1] = cube[6][2][1];
	cube[1][3][1] = cube[6][3][1];
	cube[6][1][1] = cube[2][3][3];
	cube[6][2][1] = cube[2][2][3];
	cube[6][3][1] = cube[2][1][3];
	cube[2][3][3] = cube[5][1][1];
	cube[2][2][3] = cube[5][2][1];
	cube[2][1][3] = cube[5][3][1];
	cube[5][1][1] = f1;
	cube[5][2][1] = f2;
	cube[5][3][1] = f3;
	r1 = cube[3][3][3];
	cube[3][3][3] = cube[3][3][1];
	cube[3][3][1] = cube[3][1][1];
	cube[3][1][1] = cube[3][1][3];
	cube[3][1][3] = r1;
	r2 = cube[3][2][1];
	cube[3][2][1] = cube[3][1][2];
	cube[3][1][2] = cube[3][2][3];
	cube[3][2][3] = cube[3][3][2];
	cube[3][3][2] = r2;
	cout << "Li"
		 << " ";
}

void L(char cube[7][4][4])
{
	char f1 = {'c'};
	char f2 = {'c'};
	char f3 = {'c'};
	char r1 = {'c'};
	char r2 = {'c'};
	f1 = cube[6][1][1];
	f2 = cube[6][2][1];
	f3 = cube[6][3][1];
	cube[6][1][1] = cube[1][1][1];
	cube[6][2][1] = cube[1][2][1];
	cube[6][3][1] = cube[1][3][1];
	cube[1][1][1] = cube[5][1][1];
	cube[1][2][1] = cube[5][2][1];
	cube[1][3][1] = cube[5][3][1];
	cube[5][1][1] = cube[2][3][3];
	cube[5][2][1] = cube[2][2][3];
	cube[5][3][1] = cube[2][1][3];
	cube[2][3][3] = f1;
	cube[2][2][3] = f2;
	cube[2][1][3] = f3;
	r1 = cube[3][3][1];
	cube[3][3][1] = cube[3][3][3];
	cube[3][3][3] = cube[3][1][3];
	cube[3][1][3] = cube[3][1][1];
	cube[3][1][1] = r1;
	r2 = cube[3][3][2];
	cube[3][3][2] = cube[3][2][3];
	cube[3][2][3] = cube[3][1][2];
	cube[3][1][2] = cube[3][2][1];
	cube[3][2][1] = r2;
	cout << "L"
		 << " ";
}

void U(char cube[7][4][4])
{
	char f1 = {'c'};
	char f2 = {'c'};
	char f3 = {'c'};
	char r1 = {'c'};
	char r2 = {'c'};
	f1 = cube[3][1][1];
	f2 = cube[3][1][2];
	f3 = cube[3][1][3];
	cube[3][1][1] = cube[1][1][1];
	cube[3][1][2] = cube[1][1][2];
	cube[3][1][3] = cube[1][1][3];
	cube[1][1][1] = cube[4][1][1];
	cube[1][1][2] = cube[4][1][2];
	cube[1][1][3] = cube[4][1][3];
	cube[4][1][1] = cube[2][1][1];
	cube[4][1][2] = cube[2][1][2];
	cube[4][1][3] = cube[2][1][3];
	cube[2][1][1] = f1;
	cube[2][1][2] = f2;
	cube[2][1][3] = f3;
	r1 = cube[5][1][1];
	cube[5][1][1] = cube[5][3][1];
	cube[5][3][1] = cube[5][3][3];
	cube[5][3][3] = cube[5][1][3];
	cube[5][1][3] = r1;
	r2 = cube[5][1][2];
	cube[5][1][2] = cube[5][2][1];
	cube[5][2][1] = cube[5][3][2];
	cube[5][3][2] = cube[5][2][3];
	cube[5][2][3] = r2;
	cout << "U"
		 << " ";
}

void Ui(char cube[7][4][4])
{
	char f1 = {'c'};
	char f2 = {'c'};
	char f3 = {'c'};
	char r1 = {'c'};
	char r2 = {'c'};
	f1 = cube[1][1][1];
	f2 = cube[1][1][2];
	f3 = cube[1][1][3];
	cube[1][1][1] = cube[3][1][1];
	cube[1][1][2] = cube[3][1][2];
	cube[1][1][3] = cube[3][1][3];
	cube[3][1][1] = cube[2][1][1];
	cube[3][1][2] = cube[2][1][2];
	cube[3][1][3] = cube[2][1][3];
	cube[2][1][1] = cube[4][1][1];
	cube[2][1][2] = cube[4][1][2];
	cube[2][1][3] = cube[4][1][3];
	cube[4][1][1] = f1;
	cube[4][1][2] = f2;
	cube[4][1][3] = f3;
	r1 = cube[5][3][1];
	cube[5][3][1] = cube[5][1][1];
	cube[5][1][1] = cube[5][1][3];
	cube[5][1][3] = cube[5][3][3];
	cube[5][3][3] = r1;
	r2 = cube[5][2][1];
	cube[5][2][1] = cube[5][1][2];
	cube[5][1][2] = cube[5][2][3];
	cube[5][2][3] = cube[5][3][2];
	cube[5][3][2] = r2;
	cout << "Ui"
		 << " ";
}

void D(char cube[7][4][4])
{
	char f1 = {'c'};
	char f2 = {'c'};
	char f3 = {'c'};
	char r1 = {'c'};
	char r2 = {'c'};
	f1 = cube[3][3][1];
	f2 = cube[3][3][2];
	f3 = cube[3][3][3];
	cube[3][3][1] = cube[2][3][1];
	cube[3][3][2] = cube[2][3][2];
	cube[3][3][3] = cube[2][3][3];
	cube[2][3][1] = cube[4][3][1];
	cube[2][3][2] = cube[4][3][2];
	cube[2][3][3] = cube[4][3][3];
	cube[4][3][1] = cube[1][3][1];
	cube[4][3][2] = cube[1][3][2];
	cube[4][3][3] = cube[1][3][3];
	cube[1][3][1] = f1;
	cube[1][3][2] = f2;
	cube[1][3][3] = f3;
	r1 = cube[6][1][1];
	cube[6][1][1] = cube[6][3][1];
	cube[6][3][1] = cube[6][3][3];
	cube[6][3][3] = cube[6][1][3];
	cube[6][1][3] = r1;
	r2 = cube[6][1][2];
	cube[6][1][2] = cube[6][2][1];
	cube[6][2][1] = cube[6][3][2];
	cube[6][3][2] = cube[6][2][3];
	cube[6][2][3] = r2;
	cout << "D"
		 << " ";
}

void Di(char cube[7][4][4])
{
	char f1 = {'c'};
	char f2 = {'c'};
	char f3 = {'c'};
	char r1 = {'c'};
	char r2 = {'c'};
	f1 = cube[4][3][1];
	f2 = cube[4][3][2];
	f3 = cube[4][3][3];
	cube[4][3][1] = cube[2][3][1];
	cube[4][3][2] = cube[2][3][2];
	cube[4][3][3] = cube[2][3][3];
	cube[2][3][1] = cube[3][3][1];
	cube[2][3][2] = cube[3][3][2];
	cube[2][3][3] = cube[3][3][3];
	cube[3][3][1] = cube[1][3][1];
	cube[3][3][2] = cube[1][3][2];
	cube[3][3][3] = cube[1][3][3];
	cube[1][3][1] = f1;
	cube[1][3][2] = f2;
	cube[1][3][3] = f3;
	r1 = cube[6][3][1];
	cube[6][3][1] = cube[6][1][1];
	cube[6][1][1] = cube[6][1][3];
	cube[6][1][3] = cube[6][3][3];
	cube[6][3][3] = r1;
	r2 = cube[6][2][1];
	cube[6][2][1] = cube[6][1][2];
	cube[6][1][2] = cube[6][2][3];
	cube[6][2][3] = cube[6][3][2];
	cube[6][3][2] = r2;
	cout << "Di"
		 << " ";
}

void B(char cube[7][4][4])
{
	char f1 = {'c'};
	char f2 = {'c'};
	char f3 = {'c'};
	char r1 = {'c'};
	char r2 = {'c'};
	f1 = cube[5][1][1];
	f2 = cube[5][1][2];
	f3 = cube[5][1][3];
	cube[5][1][1] = cube[4][1][3];
	cube[5][1][2] = cube[4][2][3];
	cube[5][1][3] = cube[4][3][3];
	cube[4][1][3] = cube[6][3][3];
	cube[4][2][3] = cube[6][3][2];
	cube[4][3][3] = cube[6][3][1];
	cube[6][3][3] = cube[3][3][1];
	cube[6][3][2] = cube[3][2][1];
	cube[6][3][1] = cube[3][1][1];
	cube[3][3][1] = f1;
	cube[3][2][1] = f2;
	cube[3][1][1] = f3;
	r1 = cube[2][1][1];
	cube[2][1][1] = cube[2][3][1];
	cube[2][3][1] = cube[2][3][3];
	cube[2][3][3] = cube[2][1][3];
	cube[2][1][3] = r1;
	r2 = cube[2][1][2];
	cube[2][1][2] = cube[2][2][1];
	cube[2][2][1] = cube[2][3][2];
	cube[2][3][2] = cube[2][2][3];
	cube[2][2][3] = r2;
	cout << "B"
		 << " ";
}

void Bi(char cube[7][4][4])
{
	char f1 = {'c'};
	char f2 = {'c'};
	char f3 = {'c'};
	char r1 = {'c'};
	char r2 = {'c'};
	f1 = cube[5][1][1];
	f2 = cube[5][1][2];
	f3 = cube[5][1][3];
	cube[5][1][1] = cube[3][3][1];
	cube[5][1][2] = cube[3][2][1];
	cube[5][1][3] = cube[3][1][1];
	cube[3][3][1] = cube[6][3][3];
	cube[3][2][1] = cube[6][3][2];
	cube[3][1][1] = cube[6][3][1];
	cube[6][3][3] = cube[4][1][3];
	cube[6][3][2] = cube[4][2][3];
	cube[6][3][1] = cube[4][3][3];
	cube[4][1][3] = f1;
	cube[4][2][3] = f2;
	cube[4][3][3] = f3;
	r1 = cube[2][3][1];
	cube[2][3][1] = cube[2][1][1];
	cube[2][1][1] = cube[2][1][3];
	cube[2][1][3] = cube[2][3][3];
	cube[2][3][3] = r1;
	r2 = cube[2][2][1];
	cube[2][2][1] = cube[2][1][2];
	cube[2][1][2] = cube[2][2][3];
	cube[2][2][3] = cube[2][3][2];
	cube[2][3][2] = r2;
	cout << "Bi"
		 << " ";
}

void F(char cube[7][4][4])
{
	char f1, f2, f3, r1, r2 = {'c'};
	f1 = cube[5][3][1];
	f2 = cube[5][3][2];
	f3 = cube[5][3][3];
	cube[5][3][1] = cube[3][3][3];
	cube[5][3][2] = cube[3][2][3];
	cube[5][3][3] = cube[3][1][3];
	cube[3][3][3] = cube[6][1][3];
	cube[3][2][3] = cube[6][1][2];
	cube[3][1][3] = cube[6][1][1];
	cube[6][1][3] = cube[4][1][1];
	cube[6][1][2] = cube[4][2][1];
	cube[6][1][1] = cube[4][3][1];
	cube[4][1][1] = f1;
	cube[4][2][1] = f2;
	cube[4][3][1] = f3;
	r1 = cube[1][1][1];
	cube[1][1][1] = cube[1][3][1];
	cube[1][3][1] = cube[1][3][3];
	cube[1][3][3] = cube[1][1][3];
	cube[1][1][3] = r1;
	r2 = cube[1][1][2];
	cube[1][1][2] = cube[1][2][1];
	cube[1][2][1] = cube[1][3][2];
	cube[1][3][2] = cube[1][2][3];
	cube[1][2][3] = r2;
	cout << "F"
		 << " ";
}

void Fi(char cube[7][4][4])
{
	char f1, f2, f3, r1, r2 = {'c'};
	f1 = cube[5][3][1];
	f2 = cube[5][3][2];
	f3 = cube[5][3][3];
	cube[5][3][1] = cube[4][1][1];
	cube[5][3][2] = cube[4][2][1];
	cube[5][3][3] = cube[4][3][1];
	cube[4][1][1] = cube[6][1][3];
	cube[4][2][1] = cube[6][1][2];
	cube[4][3][1] = cube[6][1][1];
	cube[6][1][3] = cube[3][3][3];
	cube[6][1][2] = cube[3][2][3];
	cube[6][1][1] = cube[3][1][3];
	cube[3][3][3] = f1;
	cube[3][2][3] = f2;
	cube[3][1][3] = f3;
	r1 = cube[1][3][1];
	cube[1][3][1] = cube[1][1][1];
	cube[1][1][1] = cube[1][1][3];
	cube[1][1][3] = cube[1][3][3];
	cube[1][3][3] = r1;
	r2 = cube[1][2][1];
	cube[1][2][1] = cube[1][1][2];
	cube[1][1][2] = cube[1][2][3];
	cube[1][2][3] = cube[1][3][2];
	cube[1][3][2] = r2;
	cout << "Fi"
		 << " ";
}
