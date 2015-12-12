#ifndef POSICIONPANTALLAPRUEBAS_HPP
#define POSICIONPANTALLAPRUEBAS_HPP
#include <UnitTest++.h>
#include <Posicion.hpp>
#include <stdlib.h>
#include <stdio.h>

SUITE(PosicionPantallaPruebas)
  {
    struct MyFixture
    {
        std::string testData;

        MyFixture() : testData("my test data")
        {
            printf("my setup" );
        }

        ~MyFixture()
        {
            printf("dest my setup" );
        }
    };

    TEST_FIXTURE(MyFixture, MyTestCase)
    {
        
    }
    
    TEST(debeTenerX)
    {
        PosicionPantalla p(2,2);
        //NaveEspacial * pw = new NaveEspacial(p);
        CHECK(false);
    }

    TEST(debeTenerY)
    {
        CHECK(false);
    }
  }

#endif // POSICIONPANTALLAPRUEBAS_HPP
