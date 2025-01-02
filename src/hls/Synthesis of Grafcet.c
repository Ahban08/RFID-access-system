#include<stdio.h>
int X0 = 1, X1 = 0, X10 = 1, X11 = 0, X110 = 1, X111 = 0, X112 = 0, X12 = 0, X13 = 0, X130 = 1, X131 = 0, X132 = 0, X14 = 0, X15 = 0, X16 = 0, X2 = 0, X20 = 1, X21 = 0, X22 = 0, X23 = 0, X24 = 0;
void grafcet0();
void datapath0();
void action();
void Read RFID();
void grafcet1();
void datapath1();
void Manage DB();
void grafcet2();
void datapath2();
void action();
void Read RFID();
void grafcet11();
void datapath11();
void Check DB();
void Generate information();
void grafcet13();
void datapath13();
void Display information();
void Delay();
void Show error();
void action();
void RFID Reader emits electromagnetic waves();
void Transmit data();
void action();
void Filter data();
void Generate text();
void action();
void Search data();
void OP Edit();
void Save();
void Create();
void main()
{
printf("X0 = %d,X1 = %d,X2 = %d\n",X0 ,X1 ,X2 );
while(1)
{
datapath0();
grafcet0();
printf("X0 = %d,X1 = %d,X2 = %d\n",X0 ,X1 ,X2 );
}
}
void grafcet0()
{

	if(X0 == 1)
	{
		if(RFID Tag touch = 1)
		{
			X0 = 0;
			X1 = 1;
		}
		else if( Operation = 1)
		{
			X0 = 0;
			X2 = 1;
		}
		return;
	}

	if((X1 == 1)&& (X2 == 1))
	{
		X1 = 0;
		X2 = 0;
		X0 = 1;
		return;
	}

}
void grafcet1()
{

	if((X10 == 1) && (=1))
	{
		X10 = 0;
		X11 = 1;
		return;
	}

	if((X11 == 1) && (Get UID = 1))
	{
		X11 = 0;
		X12 = 1;
		return;
	}

	if(X12 == 1)
	{
		if(Find = 1)
		{
			X12 = 0;
			X13 = 1;
		}
		else if( Find = 0)
		{
			X12 = 0;
			X16 = 1;
		}
		return;
	}

	if((X13 == 1) && (Output information = 1))
	{
		X13 = 0;
		X14 = 1;
		return;
	}

	if(X14 == 1 && (Display = 1))
	{
		X14 = 0;
		X15 = 1;
		return;
	}

	if(X16 == 1 && (Display = 1))
	{
		X16 = 0;
		X15 = 1;
		return;
	}


	if((X15 == 1) && (=1))
	{
		X15 = 0;
		X10 = 1;
		return;
	}

}
void grafcet11()
{

	if((X110 == 1) && (=1))
	{
		X110 = 0;
		X111 = 1;
		return;
	}

	if((X111 == 1) && (Detect RFID tag = 1))
	{
		X111 = 0;
		X112 = 1;
		return;
	}

	if((X112 == 1) && (= 1))
	{
		X112 = 0;
		X110 = 1;
		return;
	}

}
void grafcet13()
{

	if((X130 == 1) && (=1))
	{
		X130 = 0;
		X131 = 1;
		return;
	}

	if((X131 == 1) && (Data = 1))
	{
		X131 = 0;
		X132 = 1;
		return;
	}

	if((X132 == 1) && (=1))
	{
		X132 = 0;
		X130 = 1;
		return;
	}

}
void grafcet2()
{

	if((X20 == 1) && (=1))
	{
		X20 = 0;
		X21 = 1;
		return;
	}

	if(X21 == 1)
	{
		if(Search = 1)
		{
			X21 = 0;
			X22 = 1;
		}
		else if( Search = 0)
		{
			X21 = 0;
			X24 = 1;
		}
		return;
	}

	if(X22 == 1 && (=1))
	{
		X22 = 0;
		X23 = 1;
		return;
	}

	if(X24 == 1 && (=1))
	{
		X24 = 0;
		X23 = 1;
		return;
	}


	if((X23 == 1) && (=1))
	{
		X23 = 0;
		X20 = 1;
		return;
	}

}
void datapath0()
{
if(X0 == 1)
action();
if(X1 == 1)
Read RFID();
if(X2 == 1)
Manage DB();
}
void datapath1()
{
if(X10 == 1)
action();
if(X11 == 1)
Read RFID();
if(X12 == 1)
Check DB();
if(X13 == 1)
Generate information();
if(X14 == 1)
Display information();
if(X15 == 1)
Delay();
if(X16 == 1)
Show error();
}
void datapath11()
{
if(X110 == 1)
action();
if(X111 == 1)
RFID Reader emits electromagnetic waves();
if(X112 == 1)
Transmit data();
}
void datapath13()
{
if(X130 == 1)
action();
if(X131 == 1)
Filter data();
if(X132 == 1)
Generate text();
}
void datapath2()
{
if(X20 == 1)
action();
if(X21 == 1)
Search data();
if(X22 == 1)
OP Edit();
if(X23 == 1)
Save();
if(X24 == 1)
Create();
}
void action()
{
printf("action activate !!\n");
}
void Read RFID()
{
printf("Read RFID activate !!\n");
datapath1();
grafcet1();
printf("X10 = %d,X11 = %d,X12 = %d,X13 = %d,X14 = %d,X15 = %d,X16 = %d\n",X10 ,X11 ,X12 ,X13 ,X14 ,X15 ,X16 );
}
void Manage DB()
{
printf("Manage DB activate !!\n");
datapath2();
grafcet2();
printf("X20 = %d,X21 = %d,X22 = %d,X23 = %d,X24 = %d\n",X20 ,X21 ,X22 ,X23 ,X24 );
}
void action()
{
printf("action activate !!\n");
}
void Read RFID()
{
printf("Read RFID activate !!\n");
datapath11();
grafcet11();
printf("X110 = %d,X111 = %d,X112 = %d\n",X110 ,X111 ,X112 );
}
void Check DB()
{
printf("Check DB activate !!\n");
}
void Generate information()
{
printf("Generate information activate !!\n");
datapath13();
grafcet13();
printf("X130 = %d,X131 = %d,X132 = %d\n",X130 ,X131 ,X132 );
}
void Display information()
{
printf("Display information activate !!\n");
}
void Delay()
{
printf("Delay activate !!\n");
}
void Show error()
{
printf("Show error activate !!\n");
}
void action()
{
printf("action activate !!\n");
}
void RFID Reader emits electromagnetic waves()
{
printf("RFID Reader emits electromagnetic waves activate !!\n");
}
void Transmit data()
{
printf("Transmit data activate !!\n");
}
void action()
{
printf("action activate !!\n");
}
void Filter data()
{
printf("Filter data activate !!\n");
}
void Generate text()
{
printf("Generate text activate !!\n");
}
void action()
{
printf("action activate !!\n");
}
void Search data()
{
printf("Search data activate !!\n");
}
void OP Edit()
{
printf("OP Edit activate !!\n");
}
void Save()
{
printf("Save activate !!\n");
}
void Create()
{
printf("Create activate !!\n");
}
