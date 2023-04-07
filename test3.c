#include <CppUTest/CommandLineTestRunner.h>
#include <CppUTest/TestHarness.h>
#include <iostream>
using namespace std;

#include "FrontBoek.h"

TEST_GROUP(boekengroep)
{
   void setup()  {
        cout<<"De boekentest"<<endl;
   }

   void teardown() {
        cout<<"Einde boekentest"<<endl;
   }
};

TEST(boekengroep, front)
{
   FrontBoek fb1("L&B","lab");
   STRCMP_EQUAL("L&B",fb1.naamSchrijver().c_str());
}


int main(int argc, char *argv[])
{
    CommandLineTestRunner::RunAllTests(argc, argv);
    return 0;
}
