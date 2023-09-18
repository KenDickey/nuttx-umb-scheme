/* io.h -- UMB Scheme, io interface.

UMB Scheme Interpreter  				$Revision: 3.2 $
Copyright (C) 1988, 1996 William R Campbell

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 1, or (at your option)
any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.

UMB Scheme was written by Bill Campbell with help from Karl Berry,
Barbara Dixey, Ira Gerstein, Mary Glaser, Kathy Hargreaves, Bill McCabe,
Long Nguyen, Susan Quina, Jeyashree Sivasubram, Bela Sohoni, John Tam 
and Thang Quoc Tran.

For additional information about UMB Scheme, contact the author:

	Bill Campbell
	Department of Mathematics and Computer Science
	University of Massachusetts at Boston
	Harbor Campus
	Boston, MA 02125

	Telephone: 617-287-6449		Internet: bill@cs.umb.edu

*/

/* The main output routines. */

Import	void	Output(/* String s */);
Import	void	Error_Output(/* String s */);
Import	void	Output_Char(/* Character c */);
Import	Integer	New_Left_Margin( /* Integer margin */ );
Import	void	Print_Type();

/* The main input routine. */

Import	void	Read(/* FILE *input */);

#define	Peek_Char(f)	((Character) ungetc( getc(f), f ))


/* Handling silence. */

Import	void	Set_Printing(/* Boolean */);
Import	Boolean Get_Printing_State();


Import	FILE *The_Standard_Input, *The_Standard_Output, *The_Standard_Error;


/* Miscellany. */

Import	Integer toint(/* Character */);