/***********************************************************************
// IPC Workshop 2 p2: tester program
//
// File	main.c
// Version 1.0
// Date Winter 2022
// Author  Fardad Soleimanloo
// Description
//
// This file will be replaced by another tester program during the submission
//
// Revision History
// -----------------------------------------------------------
// Name            Date            Reason
//
/////////////////////////////////////////////////////////////////
***********************************************************************/
void rectangle(char leftTop, char top, char topRight,
               char right, char rightButtom, char buttom,
               char buttomLeft, char left, char fill,
               int width, int height);

int main(void) {
   rectangle('+', '-', '+', '|', '+', '-', '+', '|', ' ', 20, 8);
   rectangle('/', '-', '\\', '|', '/', '-', '\\', '|', 'X', 50, 14);
   return 0;
}