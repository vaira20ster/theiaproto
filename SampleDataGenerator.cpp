#include <iostream>
#include <windows.h>
#include <fstream>



using namespace std;



int main()

{

    ofstream myFile;

    myFile.open("C:\\Renesas\\C Compile Demo\\SampleData.csv");

    myFile << "Number(a)" << "," << "a + a" << "," <<"a x a" << endl;

    for(int i = 0; i < 10; i++)

    {

        myFile << i << "," << i+i << "," << i*i << endl;

    }
    myFile.close();
    Sleep(1000);
    std::cout << " The file SampleData.csv has been generated successfully." << std::endl;
}
