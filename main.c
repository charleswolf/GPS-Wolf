/*
    GPS-Wolf
    Copyright (C) 2011  Charles Wolf

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program. If not, see <http://www.gnu.org/licenses/>.
*/


#define F_CPU 8000000UL /* 8 MHz Internal Oscillator */
#include <avr/io.h>
#include <util/delay.h>
#include <stdlib.h>
#include <avr/interrupt.h> 


//Global variables


//Interrupt handlers

ISR( TIMER1_OVF_vect )
{

}


ISR( TIMER1_COMPA_vect )
{

}
		

//Main
int main(void)
{ 


}

