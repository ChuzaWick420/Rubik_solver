#include <iostream>
#include <string>

using namespace std;

//functions for rotations

void DAC(int& counter, string front[10], string back[10], string right[10], string left[10], string down[10], string frontRLD, string frontRMD, string leftRRD, string downRLU, string downRMU) {

	cout << counter << ". Rotate Down Anti-Clockwise" << endl << endl;

	counter = counter + 1;

	//spinning changes location

	//front of (down face)

	//spinning corner blocks

	downRLU = down[3];
	down[3] = down[9];
	down[9] = down[7];
	down[7] = down[1];
	down[1] = downRLU;

	//spinning mids blocks

	downRMU = down[6];
	down[6] = down[8];
	down[8] = down[4];
	down[4] = down[2];
	down[2] = downRMU;

	//other blocks that move along the front face

	//corners

	//top of front reference block

	frontRLD = right[7];
	right[7] = back[7];
	back[7] = left[7];
	left[7] = front[7];
	front[7] = frontRLD;

	//side of reference block

	leftRRD = front[9];
	front[9] = right[9];
	right[9] = back[9];
	back[9] = left[9];
	left[9] = leftRRD;

	//mids

	frontRMD = right[8];
	right[8] = back[8];
	back[8] = left[8];
	left[8] = front[8];
	front[8] = frontRMD;

	//functin is complete (needs testing)

}

void DC(int& counter, string front[10], string back[10], string right[10], string left[10], string down[10], string frontRLD, string frontRMD, string leftRRD, string downRLU, string downRMU) {

	cout << counter << ". Rotate Down Clockwise" << endl << endl;

	counter = counter + 1;

	//spinning changes location

	//front of (down face)

	//spinning corner blocks

	downRLU = down[7];
	down[7] = down[9];
	down[9] = down[3];
	down[3] = down[1];
	down[1] = downRLU;

	//spinning mid blocks

	downRMU = down[4];
	down[4] = down[8];
	down[8] = down[6];
	down[6] = down[2];
	down[2] = downRMU;

	//other blocks that move along the front face

	//corners

	//top of front reference block

	frontRLD = left[7];
	left[7] = back[7];
	back[7] = right[7];
	right[7] = front[7];
	front[7] = frontRLD;

	//side of reference block

	leftRRD = back[9];
	back[9] = right[9];
	right[9] = front[9];
	front[9] = left[9];
	left[9] = leftRRD;

	//mids

	frontRMD = left[8];
	left[8] = back[8];
	back[8] = right[8];
	right[8] = front[8];
	front[8] = frontRMD;

	//function is complete (needs testing)

}

void UAC(int& counter, string front[10], string back[10], string right[10], string left[10], string up[10], string backRRU, string backRMU, string leftRLU, string upRLU, string upRMU) {

	cout << counter << ". Rotate Up Anti-Clockwise" << endl << endl;

	counter = counter + 1;

	//spinning changes location

	//front (of up face)

	//spinning corner blocks

	upRLU = up[3];
	up[3] = up[9];
	up[9] = up[7];
	up[7] = up[1];
	up[1] = upRLU;

	//spinning mids blocks

	upRMU = up[6];
	up[6] = up[8];
	up[8] = up[4];
	up[4] = up[2];
	up[2] = upRMU;

	//other blocks that move along the front face

	//corners

	//top of front reference block

	backRRU = right[3];
	right[3] = front[3];
	front[3] = left[3];
	left[3] = back[3];
	back[3] = backRRU;

	//side of reference block

	leftRLU = back[1];
	back[1] = right[1];
	right[1] = front[1];
	front[1] = left[1];
	left[1] = leftRLU;

	//mids

	backRMU = right[2];
	right[2] = front[2];
	front[2] = left[2];
	left[2] = back[2];
	back[2] = backRMU;

	//function is complete !

}

void UC(int& counter, string front[10], string back[10], string right[10], string left[10], string up[10], string backRRU, string backRMU, string leftRLU, string upRLU, string upRMU) {

	cout << counter << ". Rotate Up Clockwise" << endl << endl;

	counter = counter + 1;

	//spinning changes location

	//front (of up face)

	//spinning corner blocks

	upRLU = up[7];
	up[7] = up[9];
	up[9] = up[3];
	up[3] = up[1];
	up[1] = upRLU;

	//spining mid blocks

	upRMU = up[4];
	up[4] = up[8];
	up[8] = up[6];
	up[6] = up[2];
	up[2] = upRMU;

	//other blocks that move along the front face

	//corners

	//top of front reference block

	backRRU = left[3];
	left[3] = front[3];
	front[3] = right[3];
	right[3] = back[3];
	back[3] = backRRU;

	//side of reference block

	leftRLU = front[1];
	front[1] = right[1];
	right[1] = back[1];
	back[1] = left[1];
	left[1] = leftRLU;

	//mids

	backRMU = left[2];
	left[2] = front[2];
	front[2] = right[2];
	right[2] = back[2];
	back[2] = backRMU;

	//function is complete !

}

void LAC(int& counter, string front[10], string back[10], string left[10], string up[10], string down[10], string leftRLU, string leftRMU, string backRRU, string upRLU, string upRLM) {

	cout << counter << ". Rotate Left Anti-Left Clockwise" << endl << endl;

	counter = counter + 1;

	//spinning changes location

	//front (of left face)

	//spinning corner blocks

	leftRLU = left[3];
	left[3] = left[9];
	left[9] = left[7];
	left[7] = left[1];
	left[1] = leftRLU;

	//mids

	leftRMU = left[6];
	left[6] = left[8];
	left[8] = left[4];
	left[4] = left[2];
	left[2] = leftRMU;

	//other blocks that move along the front face

	//corners

	//top of front reference block

	upRLU = front[1];
	front[1] = down[1];
	down[1] = back[9];
	back[9] = up[1];
	up[1] = upRLU;

	//side of reference block

	backRRU = up[7];
	up[7] = front[7];
	front[7] = down[7];
	down[7] = back[3];
	back[3] = backRRU;

	//mids

	upRLM = front[4];
	front[4] = down[4];
	down[4] = back[6];
	back[6] = up[4];
	up[4] = upRLM;

	//function is complete !
}

void LC(int& counter, string front[10], string back[10], string left[10], string up[10], string down[10], string leftRLU, string leftRMU, string backRRU, string upRLU, string upRLM) {

	cout << counter << ". Rotate Left Clockwise" << endl << endl;

	counter = counter + 1;

	//spinning changes location

	//front (of left face)

	//spinning corner blocks

	leftRLU = left[7];
	left[7] = left[9];
	left[9] = left[3];
	left[3] = left[1];
	left[1] = leftRLU;

	//spining mid blocks

	leftRMU = left[4];
	left[4] = left[8];
	left[8] = left[6];
	left[6] = left[2];
	left[2] = leftRMU;


	//spinning also changes side face blocks

	//corners

	//top of left reference block

	upRLU = back[9];
	back[9] = down[1];
	down[1] = front[1];
	front[1] = up[1];
	up[1] = upRLU;

	//side of left reference block

	backRRU = down[7];
	down[7] = front[7];
	front[7] = up[7];
	up[7] = back[3];
	back[3] = backRRU;

	//mids

	upRLM = back[6];
	back[6] = down[4];
	down[4] = front[4];
	front[4] = up[4];
	up[4] = upRLM;

	//function is complete !
}

void RAC(int& counter, string front[10], string back[10], string right[10], string up[10], string down[10], string frontRRU, string rightRLU, string rightRMU, string upRRM, string upRRD) {

	cout << counter << ". Rotate Right Anti-Clockwise" << endl << endl;

	counter = counter + 1;

	//spinning changes location

	//front (of right face)

		//spinning corner blocks

	rightRLU = right[3];
	right[3] = right[9];
	right[9] = right[7];
	right[7] = right[1];
	right[1] = rightRLU;

	//spining mid blocks

	rightRMU = right[6];
	right[6] = right[8];
	right[8] = right[4];
	right[4] = right[2];
	right[2] = rightRMU;

	//spinning also changes side face blocks

	//corners

	//top of right reference block

	upRRD = back[1];
	back[1] = down[9];
	down[9] = front[9];
	front[9] = up[9];
	up[9] = upRRD;

	//side of right reference block

	frontRRU = up[3];
	up[3] = back[7];
	back[7] = down[3];
	down[3] = front[3];
	front[3] = frontRRU;

	//mids

	upRRM = back[4];
	back[4] = down[6];
	down[6] = front[6];
	front[6] = up[6];
	up[6] = upRRM;

	//function is complete !

}

void RC(int& counter, string front[10], string back[10], string right[10], string up[10], string down[10], string frontRRU, string rightRLU, string rightRMU, string upRRM, string upRRD) {

	cout << counter << ". Rotate Right CLockwise" << endl << endl;

	counter = counter + 1;

	//spinning changes location

	//front (of right face)

		//spinning corner blocks

	rightRLU = right[7];
	right[7] = right[9];
	right[9] = right[3];
	right[3] = right[1];
	right[1] = rightRLU;

	//spining mid blocks

	rightRMU = right[4];
	right[4] = right[8];
	right[8] = right[6];
	right[6] = right[2];
	right[2] = rightRMU;

	//spinning also changes side face blocks

	//corners

	//top of right reference block

	upRRD = front[9];
	front[9] = down[9];
	down[9] = back[1];
	back[1] = up[9];
	up[9] = upRRD;

	//side of right reference block

	frontRRU = down[3];
	down[3] = back[7];
	back[7] = up[3];
	up[3] = front[3];
	front[3] = frontRRU;

	//mids 

	upRRM = front[6];
	front[6] = down[6];
	down[6] = back[4];
	back[4] = up[6];
	up[6] = upRRM;

	//function is complete !

}

void BAC(int& counter, string back[10], string right[10], string left[10], string up[10], string down[10], string backRLU, string backRMU, string upRMU, string rightRRU, string upRRU) {

	cout << counter << ". Rotate Back Anti-Clockwise" << endl << endl;

	counter = counter + 1;

	//spinning changes blocks postions

	//front face (of back side)

	//spinning corners

	backRLU = back[3];
	back[3] = back[9];
	back[9] = back[7];
	back[7] = back[1];
	back[1] = backRLU;

	//mids

	backRMU = back[6];
	back[6] = back[8];
	back[8] = back[4];
	back[4] = back[2];
	back[2] = backRMU;

	//spinning also chances side blocks

	//corner blocks

	//top of reference block

	upRRU = left[1];
	left[1] = down[7];
	down[7] = right[9];
	right[9] = up[3];
	up[3] = upRRU;

	//side of reference block

	rightRRU = up[1];
	up[1] = left[7];
	left[7] = down[9];
	down[9] = right[3];
	right[3] = rightRRU;

	//mids

	upRMU = left[4];
	left[4] = down[8];
	down[8] = right[6];
	right[6] = up[2];
	up[2] = upRMU;

	//functian is complete !

}

void BC(int& counter, string back[10], string right[10], string left[10], string up[10], string down[10], string backRLU, string backRMU, string upRMU, string rightRRU, string upRRU) {

	cout << counter << ". Rotate Back Clockwise" << endl << endl;

	counter = counter + 1;

	//spinning changes blocks postions

	//front face (of back side)

	//spinning corners

	backRLU = back[7];
	back[7] = back[9];
	back[9] = back[3];
	back[3] = back[1];
	back[1] = backRLU;

	//mids

	backRMU = back[4];
	back[4] = back[8];
	back[8] = back[6];
	back[6] = back[2];
	back[2] = backRMU;

	//spinning also chances side blocks

	//corner blocks

	//top of reference block

	upRRU = right[9];
	right[9] = down[7];
	down[7] = left[1];
	left[1] = up[3];
	up[3] = upRRU;

	//side of reference block

	rightRRU = down[9];
	down[9] = left[7];
	left[7] = up[1];
	up[1] = right[3];
	right[3] = rightRRU;

	//mids

	upRMU = right[6];
	right[6] = down[8];
	down[8] = left[4];
	left[4] = up[2];
	up[2] = upRMU;

	//function is complete !

}

void FAC(int& counter, string front[10], string right[10], string left[10], string up[10], string down[10], string frontRLU, string frontRMU, string leftRRU, string upRLD, string upRMD) {

	cout << counter << ". Rotate Front Anti-clockwise" << endl << endl;

	counter = counter + 1;

	//spinning changes locations

	//front face

		//spinning corner blocks

	frontRLU = front[3];
	front[3] = front[9];
	front[9] = front[7];
	front[7] = front[1];
	front[1] = frontRLU;

	//spining mid blocks

	frontRMU = front[6];
	front[6] = front[8];
	front[8] = front[4];
	front[4] = front[2];
	front[2] = frontRMU;

	//other blocks that move along the front face

	//corners

	//top of front reference block
	upRLD = right[1];
	right[1] = down[3];
	down[3] = left[9];
	left[9] = up[7];
	up[7] = upRLD;

	//side of front reference block

	leftRRU = up[9];
	up[9] = right[7];
	right[7] = down[1];
	down[1] = left[3];
	left[3] = leftRRU;

	//mids

	upRMD = right[4];
	right[4] = down[2];
	down[2] = left[6];
	left[6] = up[8];
	up[8] = upRMD;

	//function is complete
}

void FC(int& counter, string front[10], string right[10], string left[10], string up[10], string down[10], string frontRLU, string frontRMU, string leftRRU, string upRLD, string upRMD) {

	cout << counter << ". Rotate Front Clockwise" << endl << endl;

	counter = counter + 1;

	//spinning changes locations
											//front face
		// spinning corner blocks
	frontRLU = front[7];
	front[7] = front[9];
	front[9] = front[3];
	front[3] = front[1];
	front[1] = frontRLU;

	// spinning mid blocks
	frontRMU = front[4];
	front[4] = front[8];
	front[8] = front[6];
	front[6] = front[2];
	front[2] = frontRMU;

	//other blocks that move along the front face
	//corners

	//top of reference block
	upRLD = left[9];
	left[9] = down[3];
	down[3] = right[1];
	right[1] = up[7];
	up[7] = upRLD;

	//side of reference block
	leftRRU = down[1];
	down[1] = right[7];
	right[7] = up[9];
	up[9] = left[3];
	left[3] = leftRRU;

	//mids
	upRMD = left[6];
	left[6] = down[2];
	down[2] = right[4];
	right[4] = up[8];
	up[8] = upRMD;

	//Function is complete !
}

//Layer 1

//formulas for white cross

void fancy_front_and_up_switch(int& counter, string front[10], string back[10], string right[10], string left[10], string up[10], string down[10], string frontRLU, string frontRMU, string leftRRU, string upRLD, string upRMD, string backRRU, string backRMU, string leftRLU, string upRLU, string upRMU, string leftRMU, string upRLM) {

	FAC(counter, front, right, left, up, down, frontRLU, frontRMU, leftRRU, upRLD, upRMD);
	UC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);
	LAC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);
	UAC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);

}

void fancy_front_and_down_switch(int& counter, string front[10], string back[10], string right[10], string left[10], string up[10], string down[10], string frontRLU, string frontRMU, string leftRRU, string upRLD, string upRMD, string backRRU, string backRMU, string leftRLU, string upRLU, string upRMU, string leftRMU, string upRLM, string frontRLD, string frontRMD, string leftRRD, string downRLU, string downRMU, string frontRRU, string rightRLU, string rightRMU, string upRRM, string upRRD) {

	FAC(counter, front, right, left, up, down, frontRLU, frontRMU, leftRRU, upRLD, upRMD);
	DC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);
	RAC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);
	FC(counter, front, right, left, up, down, frontRLU, frontRMU, leftRRU, upRLD, upRMD);
	DAC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);

}

void fancy_front_and_left_switch(int& counter, string front[10], string back[10], string right[10], string left[10], string up[10], string down[10], string frontRLU, string frontRMU, string leftRRU, string upRLD, string upRMD, string backRRU, string backRMU, string leftRLU, string upRLU, string upRMU, string leftRMU, string upRLM, string frontRLD, string frontRMD, string leftRRD, string downRLU, string downRMU, string frontRRU, string rightRLU, string rightRMU, string upRRM, string upRRD) {

	DC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);
	UAC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);
	FAC(counter, front, right, left, up, down, frontRLU, frontRMU, leftRRU, upRLD, upRMD);
	LC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);
	DAC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);
	LAC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);
	UC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);

}

//functions for white cross
void solve_white_up(int& counter, string front[10], string back[10], string right[10], string left[10], string up[10], string down[10], string backRMU, string backRRU, string frontRLU, string frontRMU, string leftRLU, string leftRMU, string leftRRU, string upRLD, string upRLM, string upRLU, string upRMD, string upRMU, string backRLU, string rightRRU, string upRRU, string frontRRU, string rightRLU, string rightRMU, string upRRD, string upRRM, string downRLU, string downRMU, string frontRLD, string frontRMD, string leftRRD, bool& white_up) {

	//for front side(white)
	if (white_up == false) {

		//front up
		if (front[2] == "white" && up[8] == "green") {

			//check

			if (front[2] == "white" && up[8] == "green") {
				white_up = true;
			}
		}
	}

	if (white_up == false) {

		//front right
		if (front[6] == "white" && right[4] == "green") {

			FAC(counter, front, right, left, up, down, frontRLU, frontRMU, leftRRU, upRLD, upRMD);

			//check

			if (front[2] == "white" && up[8] == "green") {
				white_up = true;
			}
		}
	}

	if (white_up == false) {

		//front down
		if (front[8] == "white" && down[2] == "green") {

			FAC(counter, front, right, left, up, down, frontRLU, frontRMU, leftRRU, upRLD, upRMD);
			FAC(counter, front, right, left, up, down, frontRLU, frontRMU, leftRRU, upRLD, upRMD);

			//check

			if (front[2] == "white" && up[8] == "green") {
				white_up = true;
			}
		}
	}

	if (white_up == false) {

		//front left
		if (front[4] == "white" && left[6] == "green") {

			FC(counter, front, right, left, up, down, frontRLU, frontRMU, leftRRU, upRLD, upRMD);

			//check

			if (front[2] == "white" && up[8] == "green") {
				white_up = true;
			}
		}
	}

	//for back side(yellow)
	if (white_up == false) {

		//back up
		if (back[2] == "white" && up[2] == "green") {

			UC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);
			UC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);

			//check

			if (front[2] == "white" && up[8] == "green") {
				white_up = true;
			}
		}
	}

	if (white_up == false) {

		//back right
		if (back[6] == "white" && left[4] == "green") {

			BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
			UC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);
			UC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);

			//check

			if (front[2] == "white" && up[8] == "green") {
				white_up = true;
			}
		}
	}

	if (white_up == false) {

		//back down
		if (back[8] == "white" && down[8] == "green") {

			BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
			BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
			UC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);
			UC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);

			//check

			if (front[2] == "white" && up[8] == "green") {
				white_up = true;
			}
		}
	}

	if (white_up == false) {

		//back left
		if (back[4] == "white" && right[6] == "green") {

			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
			UC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);
			UC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);

			//check

			if (front[2] == "white" && up[8] == "green") {
				white_up = true;
			}
		}
	}

	//for right side (orange)
	if (white_up == false) {

		//right up
		if (right[2] == "white" && up[6] == "green") {

			UC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);

			//check

			if (front[2] == "white" && up[8] == "green") {
				white_up = true;
			}
		}
	}

	if (white_up == false) {

		//if its present in right side
		if (right[6] == "white" && back[4] == "green") {

			RAC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);
			UC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);

			//after the rotation is done, verify that white is at upper front mid

			if (front[2] == "white" && up[8] == "green") {
				white_up = true;
			}

		}


	}

	if (white_up == false) {

		//if its present in right side
		if (right[8] == "white" && down[6] == "green") {

			RAC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);
			RAC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);
			UC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);

			//after the rotation is done, verify that white is at upper front mid

			if (front[2] == "white" && up[8] == "green") {
				white_up = true;
			}

		}


	}

	if (white_up == false) {

		//if its present in right side
		if (right[4] == "white" && front[6] == "green") {

			RC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);
			UC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);

			//after the rotation is done, verify that white is at upper front mid

			if (front[2] == "white" && up[8] == "green") {
				white_up = true;
			}

		}


	}

	//for left side(red)
	if (white_up == false) {

		//if its present in left side
		if (left[2] == "white" && up[4] == "green") {

			UAC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);

			//after the rotation is done, verify that white is at upper front mid

			if (front[2] == "white" && up[8] == "green") {
				white_up = true;
			}
		}

	}

	if (white_up == false) {

		//if its present in left side
		if (left[6] == "white" && front[4] == "green") {

			LAC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);
			UAC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);

			//after the rotation is done, verify that white is at upper front mid

			if (front[2] == "white" && up[8] == "green") {
				white_up = true;
			}
		}

	}

	if (white_up == false) {

		//if its present in left side
		if (left[8] == "white" && down[4] == "green") {

			LAC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);
			LAC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);
			UAC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);

			//after the rotation is done, verify that white is at upper front mid

			if (front[2] == "white" && up[8] == "green") {
				white_up = true;
			}
		}

	}

	if (white_up == false) {

		//if its present in left side
		if (left[4] == "white" && back[6] == "green") {

			LC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);
			UAC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);

			//after the rotation is done, verify that white is at upper front mid

			if (front[2] == "white" && up[8] == "green") {
				white_up = true;
			}
		}

	}

	//for upper side(green)
	if (white_up == false) {

		//if its present at upper side
		if (up[2] == "white" && back[2] == "green") {

			//to bring it at up[8] to apply a formula
			UC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);
			UC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);

			fancy_front_and_up_switch(counter, front, back, right, left, up, down, frontRLU, frontRMU, leftRRU, upRLD, upRMD, backRRU, backRMU, leftRLU, upRLU, upRMU, leftRMU, upRLM);

			//after the rotation is done, verify that white is at upper front mid

			if (front[2] == "white" && up[8] == "green") {
				white_up = true;
			}
		}

	}

	if (white_up == false) {

		if (up[6] == "white" && right[2] == "green") {

			//to bring it at up[8] to apply a formula
			UC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);

			fancy_front_and_up_switch(counter, front, back, right, left, up, down, frontRLU, frontRMU, leftRRU, upRLD, upRMD, backRRU, backRMU, leftRLU, upRLU, upRMU, leftRMU, upRLM);

			//after the rotation is done, verify that white is at upper front mid

			if (front[2] == "white" && up[8] == "green") {
				white_up = true;
			}
		}

	}

	if (white_up == false) {

		if (up[4] == "white" && left[2] == "green") {

			//to bring it at up[8] to apply a formula
			UAC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);

			fancy_front_and_up_switch(counter, front, back, right, left, up, down, frontRLU, frontRMU, leftRRU, upRLD, upRMD, backRRU, backRMU, leftRLU, upRLU, upRMU, leftRMU, upRLM);

			//after the rotation is done, verify that white is at upper front mid

			if (front[2] == "white" && up[8] == "green") {
				white_up = true;
			}
		}

	}

	if (white_up == false) {

		if (up[8] == "white" && front[2] == "green") {

			fancy_front_and_up_switch(counter, front, back, right, left, up, down, frontRLU, frontRMU, leftRRU, upRLD, upRMD, backRRU, backRMU, leftRLU, upRLU, upRMU, leftRMU, upRLM);

			//after the rotation is done, verify that white is at upper front mid

			if (front[2] == "white" && up[8] == "green") {
				white_up = true;
			}
		}

	}

	//for lower side(blue)
	if (white_up == false) {

		if (down[2] == "white" && front[8] == "green") {

			//if it is at down side

			FC(counter, front, right, left, up, down, frontRLU, frontRMU, leftRRU, upRLD, upRMD);
			FC(counter, front, right, left, up, down, frontRLU, frontRMU, leftRRU, upRLD, upRMD);

			fancy_front_and_up_switch(counter, front, back, right, left, up, down, frontRLU, frontRMU, leftRRU, upRLD, upRMD, backRRU, backRMU, leftRLU, upRLU, upRMU, leftRMU, upRLM);

			if (front[2] == "white" && up[8] == "green") {
				white_up = true;
			}

		}

	}

	if (white_up == false) {

		if (down[6] == "white" && right[8] == "green") {

			//if it is at down side
			RC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);
			RC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);

			UC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);

			fancy_front_and_up_switch(counter, front, back, right, left, up, down, frontRLU, frontRMU, leftRRU, upRLD, upRMD, backRRU, backRMU, leftRLU, upRLU, upRMU, leftRMU, upRLM);

			if (front[2] == "white" && up[8] == "green") {
				white_up = true;
			}

		}

	}

	if (white_up == false) {

		if (down[8] == "white" && back[8] == "green") {

			//if it is at down side
			DAC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);

			RC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);
			RC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);

			UC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);

			fancy_front_and_up_switch(counter, front, back, right, left, up, down, frontRLU, frontRMU, leftRRU, upRLD, upRMD, backRRU, backRMU, leftRLU, upRLU, upRMU, leftRMU, upRLM);

			if (front[2] == "white" && up[8] == "green") {
				white_up = true;
			}

		}

	}

	if (white_up == false) {

		if (down[4] == "white" && left[8] == "green") {

			//if it is at down side
			DAC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);
			DAC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);

			RC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);
			RC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);

			UC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);

			fancy_front_and_up_switch(counter, front, back, right, left, up, down, frontRLU, frontRMU, leftRRU, upRLD, upRMD, backRRU, backRMU, leftRLU, upRLU, upRMU, leftRMU, upRLM);

			if (front[2] == "white" && up[8] == "green") {
				white_up = true;
			}

		}

	}

}

void solve_white_left(int& counter, string front[10], string back[10], string right[10], string left[10], string up[10], string down[10], string backRMU, string backRRU, string frontRLU, string frontRMU, string leftRLU, string leftRMU, string leftRRU, string upRLD, string upRLM, string upRLU, string upRMD, string upRMU, string backRLU, string rightRRU, string upRRU, string frontRRU, string rightRLU, string rightRMU, string upRRD, string upRRM, string downRLU, string downRMU, string frontRLD, string frontRMD, string leftRRD, bool& white_left) {

	//for front side

	//because front[2] and front[8] are already occupied

	if (white_left == false) {

		//when at front side
		if (front[4] == "white" && left[6] == "red") {

			//if its already there
			if (front[4] == "white") {

				white_left = true;

			}

		}

	}

	if (white_left == false) {

		//when at front side
		if (front[6] == "white" && right[4] == "red") {

			//rotate
			RC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);
			RC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);

			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			LC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);
			LC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);

			if (front[4] == "white") {

				white_left = true;

			}

		}

	}

	//for back side
	if (white_left == false) {

		//if its present in back side
		if (back[2] == "white" && up[2] == "red") {

			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			LC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);
			LC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);

			//after the rotation is done, verify that white is at upper front mid

			if (front[4] == "white") {
				white_left = true;
			}
		}

	}

	if (white_left == false) {

		//if its present in back side
		if (back[6] == "white" && left[4] == "red") {

			LC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);
			LC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);

			//after the rotation is done, verify that white is at upper front mid

			if (front[4] == "white") {
				white_left = true;
			}
		}

	}

	if (white_left == false) {

		//if its present in back side
		if (back[8] == "white" && down[8] == "red") {

			BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			LC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);
			LC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);

			//after the rotation is done, verify that white is at upper front mid

			if (front[4] == "white") {
				white_left = true;
			}
		}

	}

	if (white_left == false) {

		//if its present in back side
		if (back[4] == "white" && right[6] == "red") {

			BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
			BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			LC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);
			LC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);

			//after the rotation is done, verify that white is at upper front mid

			if (front[4] == "white") {
				white_left = true;
			}
		}

	}

	//for right side
	if (white_left == false) {

		//if its present in right side
		if (right[2] == "white" && up[6] == "red") {

			RC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);

			BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
			BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			LC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);
			LC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);

			//formula
			fancy_front_and_left_switch(counter, front, back, right, left, up, down, frontRLU, frontRMU, leftRRU, upRLD, upRMD, backRRU, backRMU, leftRLU, upRLU, upRMU, leftRMU, upRLM, frontRLD, frontRMD, leftRRD, downRLU, downRMU, frontRRU, rightRLU, rightRMU, upRRM, upRRD);

			//after the rotation is done, verify that white is at upper front mid

			if (front[4] == "white") {
				white_left = true;
			}

		}


	}

	if (white_left == false) {

		//if its present in right side
		if (right[6] == "white" && back[4] == "red") {

			BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
			BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			LC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);
			LC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);

			//formula
			fancy_front_and_left_switch(counter, front, back, right, left, up, down, frontRLU, frontRMU, leftRRU, upRLD, upRMD, backRRU, backRMU, leftRLU, upRLU, upRMU, leftRMU, upRLM, frontRLD, frontRMD, leftRRD, downRLU, downRMU, frontRRU, rightRLU, rightRMU, upRRM, upRRD);

			//after the rotation is done, verify that white is at upper front mid

			if (front[4] == "white") {
				white_left = true;
			}

		}


	}

	if (white_left == false) {

		//if its present in right side
		if (right[8] == "white" && down[6] == "red") {

			RAC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);

			BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
			BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			LC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);
			LC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);

			//formula
			fancy_front_and_left_switch(counter, front, back, right, left, up, down, frontRLU, frontRMU, leftRRU, upRLD, upRMD, backRRU, backRMU, leftRLU, upRLU, upRMU, leftRMU, upRLM, frontRLD, frontRMD, leftRRD, downRLU, downRMU, frontRRU, rightRLU, rightRMU, upRRM, upRRD);

			//after the rotation is done, verify that white is at upper front mid

			if (front[4] == "white") {
				white_left = true;
			}

		}


	}

	if (white_left == false) {

		//if its present in right side
		if (right[4] == "white" && front[6] == "red") {

			RC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);
			RC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);

			BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
			BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			LC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);
			LC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);

			//formula
			fancy_front_and_left_switch(counter, front, back, right, left, up, down, frontRLU, frontRMU, leftRRU, upRLD, upRMD, backRRU, backRMU, leftRLU, upRLU, upRMU, leftRMU, upRLM, frontRLD, frontRMD, leftRRD, downRLU, downRMU, frontRRU, rightRLU, rightRMU, upRRM, upRRD);

			//after the rotation is done, verify that white is at upper front mid

			if (front[4] == "white") {
				white_left = true;
			}

		}


	}

	//for left side
	if (white_left == false) {

		//if its present in right side
		if (left[2] == "white" && up[4] == "red") {

			LC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);

			//formula
			fancy_front_and_left_switch(counter, front, back, right, left, up, down, frontRLU, frontRMU, leftRRU, upRLD, upRMD, backRRU, backRMU, leftRLU, upRLU, upRMU, leftRMU, upRLM, frontRLD, frontRMD, leftRRD, downRLU, downRMU, frontRRU, rightRLU, rightRMU, upRRM, upRRD);

			//after the rotation is done, verify that white is at upper front mid

			if (front[4] == "white") {
				white_left = true;
			}

		}


	}

	if (white_left == false) {

		//if its present in right side
		if (left[6] == "white" && front[4] == "red") {

			//formula
			fancy_front_and_left_switch(counter, front, back, right, left, up, down, frontRLU, frontRMU, leftRRU, upRLD, upRMD, backRRU, backRMU, leftRLU, upRLU, upRMU, leftRMU, upRLM, frontRLD, frontRMD, leftRRD, downRLU, downRMU, frontRRU, rightRLU, rightRMU, upRRM, upRRD);

			//after the rotation is done, verify that white is at upper front mid

			if (front[4] == "white") {
				white_left = true;
			}

		}


	}

	if (white_left == false) {

		//if its present in right side
		if (left[8] == "white" && down[4] == "red") {

			LAC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);

			//formula
			fancy_front_and_left_switch(counter, front, back, right, left, up, down, frontRLU, frontRMU, leftRRU, upRLD, upRMD, backRRU, backRMU, leftRLU, upRLU, upRMU, leftRMU, upRLM, frontRLD, frontRMD, leftRRD, downRLU, downRMU, frontRRU, rightRLU, rightRMU, upRRM, upRRD);

			//after the rotation is done, verify that white is at upper front mid

			if (front[4] == "white") {
				white_left = true;
			}

		}


	}

	if (white_left == false) {

		//if its present in right side
		if (left[4] == "white" && back[6] == "red") {

			LC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);
			LC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);

			//formula
			fancy_front_and_left_switch(counter, front, back, right, left, up, down, frontRLU, frontRMU, leftRRU, upRLD, upRMD, backRRU, backRMU, leftRLU, upRLU, upRMU, leftRMU, upRLM, frontRLD, frontRMD, leftRRD, downRLU, downRMU, frontRRU, rightRLU, rightRMU, upRRM, upRRD);

			//after the rotation is done, verify that white is at upper front mid

			if (front[4] == "white") {
				white_left = true;
			}

		}


	}

	//for up side
	if (white_left == false) {

		//if its present in up side
		if (up[2] == "white" && back[2] == "red") {

			UAC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);

			LC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);

			UC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);

			//after the rotation is done, verify that white is at upper front mid

			if (front[4] == "white") {
				white_left = true;
			}

		}


	}

	if (white_left == false) {

		//if its present in up side
		if (up[6] == "white" && right[2] == "red") {

			UAC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);
			UAC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);

			LC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);

			UC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);
			UC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);

			//after the rotation is done, verify that white is at upper front mid

			if (front[4] == "white") {
				white_left = true;
			}

		}


	}

	//up[8] is already solved

	if (white_left == false) {

		//if its present in up side
		if (up[4] == "white" && left[2] == "red") {

			LC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);

			//after the rotation is done, verify that white is at upper front mid

			if (front[4] == "white") {
				white_left = true;
			}

		}


	}

	//for down side

	//down[2] is already solved

	if (white_left == false) {

		//if its present in down side
		if (down[6] == "white" && right[8] == "red") {

			DC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);
			DC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);

			LAC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);

			DC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);
			DC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);

			//after the rotation is done, verify that white is at upper front mid

			if (front[4] == "white") {
				white_left = true;
			}

		}


	}

	if (white_left == false) {

		//if its present in down side
		if (down[8] == "white" && back[8] == "red") {

			DC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);

			LAC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);

			DAC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);

			//after the rotation is done, verify that white is at upper front mid

			if (front[4] == "white") {
				white_left = true;
			}

		}


	}

	if (white_left == false) {

		//if its present in down side
		if (down[4] == "white" && left[8] == "red") {

			LAC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);

			//after the rotation is done, verify that white is at upper front mid

			if (front[4] == "white") {
				white_left = true;
			}

		}


	}

}

void solve_white_down(int& counter, string front[10], string back[10], string right[10], string left[10], string up[10], string down[10], string backRMU, string backRRU, string frontRLU, string frontRMU, string leftRLU, string leftRMU, string leftRRU, string upRLD, string upRLM, string upRLU, string upRMD, string upRMU, string backRLU, string rightRRU, string upRRU, string frontRRU, string rightRLU, string rightRMU, string upRRD, string upRRM, string downRLU, string downRMU, string frontRLD, string frontRMD, string leftRRD, bool& white_down) {

	//for front side(white)

	//front[2] is solved

	if (white_down == false) {

		//if its present in back side
		if (front[6] == "white" && right[4] == "blue") {

			RAC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);

			DAC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);

			fancy_front_and_down_switch(counter, front, back, right, left, up, down, frontRLU, frontRMU, leftRRU, upRLD, upRMD, backRRU, backRMU, leftRLU, upRLU, upRMU, leftRMU, upRLM, frontRLD, frontRMD, leftRRD, downRLU, downRMU, frontRRU, rightRLU, rightRMU, upRRM, upRRD);

			//check

			if (front[8] == "white") {
				white_down = true;
			}
		}

	}

	if (white_down == false) {

		//if its present in back side
		if (front[8] == "white" && down[2] == "blue") {

			//check

			if (front[8] == "white") {
				white_down = true;
			}
		}

	}

	if (white_down == false) {

		//if its present in back side
		if (front[4] == "white" && left[6] == "blue") {

			LC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);

			DC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);

			fancy_front_and_down_switch(counter, front, back, right, left, up, down, frontRLU, frontRMU, leftRRU, upRLD, upRMD, backRRU, backRMU, leftRLU, upRLU, upRMU, leftRMU, upRLM, frontRLD, frontRMD, leftRRD, downRLU, downRMU, frontRRU, rightRLU, rightRMU, upRRM, upRRD);

			//check

			if (front[8] == "white") {
				white_down = true;
			}
		}

	}

	//for back side(yellow)
	if (white_down == false) {

		//if its present in back side
		if (back[2] == "white" && up[2] == "blue") {

			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			DC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);
			DC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);

			//after the rotation is done, verify that white is at upper front mid

			if (front[8] == "white") {
				white_down = true;
			}
		}

	}

	if (white_down == false) {

		//if its present in back side
		if (back[6] == "white" && left[4] == "blue") {

			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			DC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);
			DC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);

			//after the rotation is done, verify that white is at upper front mid

			if (front[8] == "white") {
				white_down = true;
			}
		}

	}

	if (white_down == false) {

		//if its present in back side
		if (back[8] == "white" && down[8] == "blue") {

			DC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);
			DC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);

			//after the rotation is done, verify that white is at upper front mid

			if (front[8] == "white") {
				white_down = true;
			}
		}

	}

	if (white_down == false) {

		//if its present in back side
		if (back[4] == "white" && right[6] == "blue") {

			BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			DC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);
			DC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);

			//after the rotation is done, verify that white is at upper front mid

			if (front[8] == "white") {
				white_down = true;
			}
		}

	}

	//for right side (orange)
	if (white_down == false) {

		//if its present in right side
		if (right[2] == "white" && up[6] == "blue") {

			RAC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);
			RAC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);

			DAC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);

			//after the rotation is done, verify that white is at upper front mid

			if (front[8] == "white") {
				white_down = true;
			}

		}


	}

	if (white_down == false) {

		//if its present in right side
		if (right[6] == "white" && back[4] == "blue") {

			RC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);

			DAC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);

			//after the rotation is done, verify that white is at upper front mid

			if (front[8] == "white") {
				white_down = true;
			}

		}


	}

	if (white_down == false) {

		//if its present in right side
		if (right[8] == "white" && down[6] == "blue") {

			DAC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);

			//after the rotation is done, verify that white is at upper front mid

			if (front[8] == "white") {
				white_down = true;
			}

		}


	}

	if (white_down == false) {

		//if its present in right side
		if (right[4] == "white" && front[6] == "blue") {

			RAC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);

			DAC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);

			//after the rotation is done, verify that white is at upper front mid

			if (front[8] == "white") {
				white_down = true;
			}

		}


	}

	//for left side(red)
	if (white_down == false) {

		//if its present in left side
		if (left[2] == "white" && up[4] == "blue") {

			LC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);
			LC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);

			DC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);

			//after the rotation is done, verify that white is at upper front mid

			if (front[8] == "white") {
				white_down = true;
			}
		}

	}

	if (white_down == false) {

		//if its present in left side
		if (left[6] == "white" && front[4] == "blue") {

			LC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);

			DC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);

			//after the rotation is done, verify that white is at upper front mid

			if (front[8] == "white") {
				white_down = true;
			}
		}

	}

	if (white_down == false) {

		//if its present in left side
		if (left[8] == "white" && down[4] == "blue") {

			DC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);

			//after the rotation is done, verify that white is at upper front mid

			if (front[8] == "white") {
				white_down = true;
			}
		}

	}

	if (white_down == false) {

		//if its present in left side
		if (left[4] == "white" && back[6] == "blue") {

			LAC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);

			DC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);

			//after the rotation is done, verify that white is at upper front mid

			if (front[8] == "white") {
				white_down = true;
			}
		}

	}

	//for upper side(green)
	if (white_down == false) {

		//if its present at upper side
		if (up[2] == "white" && back[2] == "blue") {

			BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
			BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			DC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);
			DC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);

			fancy_front_and_down_switch(counter, front, back, right, left, up, down, frontRLU, frontRMU, leftRRU, upRLD, upRMD, backRRU, backRMU, leftRLU, upRLU, upRMU, leftRMU, upRLM, frontRLD, frontRMD, leftRRD, downRLU, downRMU, frontRRU, rightRLU, rightRMU, upRRM, upRRD);

			//after the rotation is done, verify that white is at upper front mid

			if (front[8] == "white") {
				white_down = true;
			}
		}

	}

	if (white_down == false) {

		if (up[6] == "white" && right[2] == "blue") {

			RAC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);
			RAC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);

			DAC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);

			fancy_front_and_down_switch(counter, front, back, right, left, up, down, frontRLU, frontRMU, leftRRU, upRLD, upRMD, backRRU, backRMU, leftRLU, upRLU, upRMU, leftRMU, upRLM, frontRLD, frontRMD, leftRRD, downRLU, downRMU, frontRRU, rightRLU, rightRMU, upRRM, upRRD);

			//after the rotation is done, verify that white is at upper front mid

			if (front[8] == "white") {
				white_down = true;
			}
		}

	}

	if (white_down == false) {

		if (up[4] == "white" && left[2] == "blue") {

			LC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);
			LC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);

			DC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);

			fancy_front_and_down_switch(counter, front, back, right, left, up, down, frontRLU, frontRMU, leftRRU, upRLD, upRMD, backRRU, backRMU, leftRLU, upRLU, upRMU, leftRMU, upRLM, frontRLD, frontRMD, leftRRD, downRLU, downRMU, frontRRU, rightRLU, rightRMU, upRRM, upRRD);

			//after the rotation is done, verify that white is at upper front mid

			if (front[8] == "white") {
				white_down = true;
			}
		}

	}

	//up[8] is already solved

	//for lower side(blue)
	if (white_down == false) {

		if (down[2] == "white" && front[8] == "blue") {

			fancy_front_and_down_switch(counter, front, back, right, left, up, down, frontRLU, frontRMU, leftRRU, upRLD, upRMD, backRRU, backRMU, leftRLU, upRLU, upRMU, leftRMU, upRLM, frontRLD, frontRMD, leftRRD, downRLU, downRMU, frontRRU, rightRLU, rightRMU, upRRM, upRRD);

			//if it is at down side

			if (front[8] == "white") {
				white_down = true;
			}

		}

	}

	if (white_down == false) {

		if (down[6] == "white" && right[8] == "blue") {

			//if it is at down side

			DAC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);

			fancy_front_and_down_switch(counter, front, back, right, left, up, down, frontRLU, frontRMU, leftRRU, upRLD, upRMD, backRRU, backRMU, leftRLU, upRLU, upRMU, leftRMU, upRLM, frontRLD, frontRMD, leftRRD, downRLU, downRMU, frontRRU, rightRLU, rightRMU, upRRM, upRRD);

			if (front[8] == "white") {
				white_down = true;
			}

		}

	}

	if (white_down == false) {

		if (down[8] == "white" && back[8] == "blue") {

			//if it is at down side

			DAC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);
			DAC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);

			fancy_front_and_down_switch(counter, front, back, right, left, up, down, frontRLU, frontRMU, leftRRU, upRLD, upRMD, backRRU, backRMU, leftRLU, upRLU, upRMU, leftRMU, upRLM, frontRLD, frontRMD, leftRRD, downRLU, downRMU, frontRRU, rightRLU, rightRMU, upRRM, upRRD);

			if (front[8] == "white") {
				white_down = true;
			}

		}

	}

	if (white_down == false) {

		if (down[4] == "white" && left[8] == "blue") {

			//if it is at down side

			DC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);

			fancy_front_and_down_switch(counter, front, back, right, left, up, down, frontRLU, frontRMU, leftRRU, upRLD, upRMD, backRRU, backRMU, leftRLU, upRLU, upRMU, leftRMU, upRLM, frontRLD, frontRMD, leftRRD, downRLU, downRMU, frontRRU, rightRLU, rightRMU, upRRM, upRRD);

			if (front[8] == "white") {
				white_down = true;
			}

		}

	}

}

void solve_white_right(int& counter, string front[10], string back[10], string right[10], string left[10], string up[10], string down[10], string backRMU, string backRRU, string frontRLU, string frontRMU, string leftRLU, string leftRMU, string leftRRU, string upRLD, string upRLM, string upRLU, string upRMD, string upRMU, string backRLU, string rightRRU, string upRRU, string frontRRU, string rightRLU, string rightRMU, string upRRD, string upRRM, string downRLU, string downRMU, string frontRLD, string frontRMD, string leftRRD, bool& white_right) {

	//for front side

	//because front[2] and front[8] and front[4] are already occupied
	if (white_right == false) {

		//when at front side
		if (front[6] == "white" && right[4] == "orange") {

			if (front[6] == "white") {

				white_right = true;

			}

		}

	}

	//for back side(yellow)
	if (white_right == false) {

		//if its present in back side
		if (back[2] == "white" && up[2] == "orange") {

			BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			RC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);
			RC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);

			//after the rotation is done, verify that white is at upper front mid

			if (front[6] == "white") {
				white_right = true;
			}
		}

	}

	if (white_right == false) {

		//if its present in back side
		if (back[6] == "white" && left[4] == "orange") {

			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			RC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);
			RC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);

			//after the rotation is done, verify that white is at upper front mid

			if (front[6] == "white") {
				white_right = true;
			}
		}

	}

	if (white_right == false) {

		//if its present in back side
		if (back[8] == "white" && down[8] == "orange") {

			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			RC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);
			RC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);

			//after the rotation is done, verify that white is at upper front mid

			if (front[6] == "white") {
				white_right = true;
			}
		}

	}

	if (white_right == false) {

		//if its present in back side
		if (back[4] == "white" && right[6] == "orange") {

			RC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);
			RC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);

			//after the rotation is done, verify that white is at upper front mid

			if (front[6] == "white") {
				white_right = true;
			}
		}

	}

	//for left side(red)
	if (white_right == false) {

		//if its present in left side
		if (left[2] == "white" && up[4] == "orange") {

			FAC(counter, front, right, left, up, down, frontRLU, frontRMU, leftRRU, upRLD, upRMD);

			UAC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);

			FC(counter, front, right, left, up, down, frontRLU, frontRMU, leftRRU, upRLD, upRMD);

			//after the rotation is done, verify that white is at upper front mid

			if (front[6] == "white") {
				white_right = true;
			}

		}


	}

	if (white_right == false) {

		//if its present in right side
		if (left[4] == "white" && back[6] == "orange") {

			FAC(counter, front, right, left, up, down, frontRLU, frontRMU, leftRRU, upRLD, upRMD);
			FAC(counter, front, right, left, up, down, frontRLU, frontRMU, leftRRU, upRLD, upRMD);

			LC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);

			FC(counter, front, right, left, up, down, frontRLU, frontRMU, leftRRU, upRLD, upRMD);

			UAC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);

			FC(counter, front, right, left, up, down, frontRLU, frontRMU, leftRRU, upRLD, upRMD);

			//after the rotation is done, verify that white is at upper front mid

			if (front[6] == "white") {
				white_right = true;
			}

		}


	}

	if (white_right == false) {

		//if its present in right side
		if (left[8] == "white" && down[4] == "orange") {

			FAC(counter, front, right, left, up, down, frontRLU, frontRMU, leftRRU, upRLD, upRMD);
			FAC(counter, front, right, left, up, down, frontRLU, frontRMU, leftRRU, upRLD, upRMD);

			LC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);
			LC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);

			FC(counter, front, right, left, up, down, frontRLU, frontRMU, leftRRU, upRLD, upRMD);

			UAC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);

			FC(counter, front, right, left, up, down, frontRLU, frontRMU, leftRRU, upRLD, upRMD);

			//after the rotation is done, verify that white is at upper front mid

			if (front[6] == "white") {
				white_right = true;
			}

		}


	}

	//left[6] is already occupied and solved

	//for right side(orange)
	if (white_right == false) {

		//if its present in right side
		if (right[2] == "white" && up[6] == "orange") {

			FAC(counter, front, right, left, up, down, frontRLU, frontRMU, leftRRU, upRLD, upRMD);

			UC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);

			FC(counter, front, right, left, up, down, frontRLU, frontRMU, leftRRU, upRLD, upRMD);

			//after the rotation is done, verify that white is at upper front mid

			if (front[6] == "white") {
				white_right = true;
			}

		}


	}

	if (white_right == false) {

		//if its present in right side
		if (right[4] == "white" && front[6] == "orange") {

			RC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);

			FAC(counter, front, right, left, up, down, frontRLU, frontRMU, leftRRU, upRLD, upRMD);

			UC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);

			FC(counter, front, right, left, up, down, frontRLU, frontRMU, leftRRU, upRLD, upRMD);

			//after the rotation is done, verify that white is at upper front mid

			if (front[6] == "white") {
				white_right = true;
			}

		}


	}

	if (white_right == false) {

		//if its present in right side
		if (right[8] == "white" && down[6] == "orange") {

			RC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);
			RC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);

			FAC(counter, front, right, left, up, down, frontRLU, frontRMU, leftRRU, upRLD, upRMD);

			UC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);

			FC(counter, front, right, left, up, down, frontRLU, frontRMU, leftRRU, upRLD, upRMD);

			//after the rotation is done, verify that white is at upper front mid

			if (front[6] == "white") {
				white_right = true;
			}

		}


	}

	if (white_right == false) {

		//if its present in right side
		if (right[6] == "white" && back[4] == "orange") {

			RAC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);

			FAC(counter, front, right, left, up, down, frontRLU, frontRMU, leftRRU, upRLD, upRMD);

			UC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);

			FC(counter, front, right, left, up, down, frontRLU, frontRMU, leftRRU, upRLD, upRMD);

			//after the rotation is done, verify that white is at upper front mid

			if (front[6] == "white") {
				white_right = true;
			}

		}


	}

	//for up side
	if (white_right == false) {

		//if its present in up side
		if (up[2] == "white" && back[2] == "orange") {

			BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			RAC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);

			FAC(counter, front, right, left, up, down, frontRLU, frontRMU, leftRRU, upRLD, upRMD);

			UC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);

			FC(counter, front, right, left, up, down, frontRLU, frontRMU, leftRRU, upRLD, upRMD);

			//after the rotation is done, verify that white is at upper front mid

			if (front[6] == "white") {
				white_right = true;
			}

		}

	}

	if (white_right == false) {

		//if its present in up side
		if (up[6] == "white" && right[2] == "orange") {

			RAC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);

			//after the rotation is done, verify that white is at upper front mid

			if (front[6] == "white") {
				white_right = true;
			}

		}


	}

	//up[8] is already solved

	if (white_right == false) {

		//if its present in up side
		if (up[4] == "white" && left[2] == "orange") {

			FAC(counter, front, right, left, up, down, frontRLU, frontRMU, leftRRU, upRLD, upRMD);

			UC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);

			FC(counter, front, right, left, up, down, frontRLU, frontRMU, leftRRU, upRLD, upRMD);

			BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			RAC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);

			FAC(counter, front, right, left, up, down, frontRLU, frontRMU, leftRRU, upRLD, upRMD);

			UC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);

			FC(counter, front, right, left, up, down, frontRLU, frontRMU, leftRRU, upRLD, upRMD);

			//after the rotation is done, verify that white is at upper front mid

			if (front[6] == "white") {
				white_right = true;
			}

		}


	}

	//for down side

	//down[2] is already solved

	if (white_right == false) {

		//if its present in down side
		if (down[6] == "white" && right[8] == "orange") {

			RC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);

			//after the rotation is done, verify that white is at upper front mid

			if (front[6] == "white") {
				white_right = true;
			}

		}


	}

	if (white_right == false) {

		//if its present in down side
		if (down[8] == "white" && back[8] == "orange") {

			FC(counter, front, right, left, up, down, frontRLU, frontRMU, leftRRU, upRLD, upRMD);

			DAC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);

			FAC(counter, front, right, left, up, down, frontRLU, frontRMU, leftRRU, upRLD, upRMD);

			RC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);

			//after the rotation is done, verify that white is at upper front mid

			if (front[6] == "white") {
				white_right = true;
			}

		}


	}

	if (white_right == false) {

		//if its present in down side
		if (down[4] == "white" && left[8] == "orange") {

			FC(counter, front, right, left, up, down, frontRLU, frontRMU, leftRRU, upRLD, upRMD);

			DAC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);
			DAC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);

			FAC(counter, front, right, left, up, down, frontRLU, frontRMU, leftRRU, upRLD, upRMD);

			RC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);

			//after the rotation is done, verify that white is at upper front mid

			if (front[6] == "white") {
				white_right = true;
			}

		}


	}

}

void make_white_cross(int& counter, string front[10], string back[10], string right[10], string left[10], string up[10], string down[10], string frontRRU, string rightRLU, string rightRMU, string upRRM, string backRRU, string backRMU, string leftRLU, string upRLU, string upRRD, string upRMU, string leftRMU, string upRLM, string frontRLD, string frontRMD, string leftRRD, string downRLU, string downRMU, string backRLU, string rightRRU, string upRRU, string frontRLU, string frontRMU, string leftRRU, string upRLD, string upRMD, bool& white_up, bool& white_down, bool& white_right, bool& white_left, bool& white_cross) {

	//initially cross is not made so we will change its value to TRUE once it is solved
	//also, to stop the loop from continous checking and solving

	if (white_cross == false) {

		//solution

		if (white_up == false) {

			//solution 

			solve_white_up(counter, front, back, right, left, up, down, backRMU, backRRU, frontRLU, frontRMU, leftRLU, leftRMU, leftRRU, upRLD, upRLM, upRLU, upRMD, upRMU, backRLU, rightRRU, upRRU, frontRRU, rightRLU, rightRMU, upRRD, upRRM, downRLU, downRMU, frontRLD, frontRMD, leftRRD, white_up);

		}

		if (white_down == false) {

			//solution 

			solve_white_down(counter, front, back, right, left, up, down, backRMU, backRRU, frontRLU, frontRMU, leftRLU, leftRMU, leftRRU, upRLD, upRLM, upRLU, upRMD, upRMU, backRLU, rightRRU, upRRU, frontRRU, rightRLU, rightRMU, upRRD, upRRM, downRLU, downRMU, frontRLD, frontRMD, leftRRD, white_down);

		}

		if (white_left == false) {

			//solution 

			solve_white_left(counter, front, back, right, left, up, down, backRMU, backRRU, frontRLU, frontRMU, leftRLU, leftRMU, leftRRU, upRLD, upRLM, upRLU, upRMD, upRMU, backRLU, rightRRU, upRRU, frontRRU, rightRLU, rightRMU, upRRD, upRRM, downRLU, downRMU, frontRLD, frontRMD, leftRRD, white_left);

		}

		if (white_right == false) {

			//solution 

			solve_white_right(counter, front, back, right, left, up, down, backRMU, backRRU, frontRLU, frontRMU, leftRLU, leftRMU, leftRRU, upRLD, upRLM, upRLU, upRMD, upRMU, backRLU, rightRRU, upRRU, frontRRU, rightRLU, rightRMU, upRRD, upRRM, downRLU, downRMU, frontRLD, frontRMD, leftRRD, white_right);

		}

	}

	//when 4 blocks are with white centre, cross has been made
	if (white_up == true && white_down == true && white_left == true && white_right == true) {

		cout << "White Cross is made" << endl << endl;

		white_cross = true;

	}
}

//formulas for Layer 1 corners
void formula_white_up_left(int& counter, string front[10], string back[10], string right[10], string left[10], string up[10], string down[10], string backRLU, string backRMU, string backRRU, string leftRLU, string rightRRU, string upRLU, string upRMU, string upRRU, bool& white_up_left) {

	while (white_up_left == false) {

		UC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);

		BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

		UAC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);

		BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

		if (front[1] == "white" && up[7] == "green" && left[3] == "red") {

			white_up_left = true;

		}

	}

}

void formula_white_up_right(int& counter, string front[10], string back[10], string right[10], string left[10], string up[10], string down[10], string frontRRU, string rightRLU, string rightRMU, string upRRM, string upRRD, string backRLU, string backRMU, string upRMU, string rightRRU, string upRRU, bool& white_up_right) {

	while (white_up_right == false) {

		RC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);

		BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

		RAC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);

		BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

		if (front[3] == "white" && up[9] == "green" && right[1] == "orange") {

			white_up_right = true;

		}

	}

}

void formula_white_down_left(int& counter, string front[10], string back[10], string right[10], string left[10], string up[10], string down[10], string leftRLU, string leftRMU, string backRRU, string upRLU, string upRLM, string backRLU, string backRMU, string upRMU, string rightRRU, string upRRU, bool& white_down_left) {

	while (white_down_left == false) {

		LC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);

		BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

		LAC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);

		BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

		if (front[7] == "white" && down[1] == "blue" && left[9] == "red") {

			white_down_left = true;

		}

	}

}

void formula_white_down_right(int& counter, string front[10], string back[10], string right[10], string left[10], string up[10], string down[10], string downRLU, string downRMU, string backRLU, string frontRLD, string backRMU, string frontRMD, string leftRRD, string rightRRU, string upRMU, string upRRU, bool& white_down_right) {

	while (white_down_right == false) {

		DC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);

		BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

		DAC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);

		BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

		if (front[9] == "white" && down[3] == "blue" && right[7] == "orange") {

			white_down_right = true;

		}

	}

}

//functions for Layer 1 corners
void solve_white_up_left(int& counter, string front[10], string back[10], string right[10], string left[10], string up[10], string down[10], string backRMU, string backRRU, string frontRLU, string frontRMU, string leftRLU, string leftRMU, string leftRRU, string upRLD, string upRLM, string upRLU, string upRMD, string upRMU, string backRLU, string rightRRU, string upRRU, string frontRRU, string rightRLU, string rightRMU, string upRRD, string upRRM, string downRLU, string downRMU, string frontRLD, string frontRMD, string leftRRD, bool& white_up_left) {

	//front side

	//if the block is at "up left" side

	//if white is at front[1]
	if (white_up_left == false) {

		//if already solved
		if (front[1] == "white" && up[7] == "green" && left[3] == "red") {

			white_up_left = true;

		}

	}

	//if white is at left[3]
	if (white_up_left == false) {

		//if already solved
		if (front[1] == "green" && up[7] == "red" && left[3] == "white") {

			//repeat the formula until it's at its place and verify
			formula_white_up_left(counter, front, back, right, left, up, down, backRLU, backRMU, backRRU, leftRLU, rightRRU, upRLU, upRMU, upRRU, white_up_left);

		}

	}

	//if white is at up[7]
	if (white_up_left == false) {

		//if already solved
		if (front[1] == "red" && up[7] == "white" && left[3] == "green") {

			//repeat the formula until it's at its place
			formula_white_up_left(counter, front, back, right, left, up, down, backRLU, backRMU, backRRU, leftRLU, rightRRU, upRLU, upRMU, upRRU, white_up_left);

		}

	}

	//if the block is at "up right" side

	//if white is at front[3]
	if (white_up_left == false) {

		if (front[3] == "white" && up[9] == "red" && right[1] == "green") {

			RC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);

			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			RAC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);

			//repeat the formula until it's at its place
			formula_white_up_left(counter, front, back, right, left, up, down, backRLU, backRMU, backRRU, leftRLU, rightRRU, upRLU, upRMU, upRRU, white_up_left);

		}
	}

	//if white is at up[9]
	if (white_up_left == false) {

		if (front[3] == "green" && up[9] == "white" && right[1] == "red") {

			RC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);

			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			RAC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);

			//repeat the formula until it's at its place
			formula_white_up_left(counter, front, back, right, left, up, down, backRLU, backRMU, backRRU, leftRLU, rightRRU, upRLU, upRMU, upRRU, white_up_left);

		}
	}

	//if white is at right[1]
	if (white_up_left == false) {

		if (front[3] == "red" && up[9] == "green" && right[1] == "white") {

			RC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);

			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			RAC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);

			//repeat the formula until it's at its place
			formula_white_up_left(counter, front, back, right, left, up, down, backRLU, backRMU, backRRU, leftRLU, rightRRU, upRLU, upRMU, upRRU, white_up_left);

		}
	}

	//if the block is at "down left" side

	//if white is at front[7]
	if (white_up_left == false) {

		if (front[7] == "white" && down[1] == "red" && left[9] == "green") {

			DAC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);

			BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			DC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);

			//repeat the formula until it's at its place
			formula_white_up_left(counter, front, back, right, left, up, down, backRLU, backRMU, backRRU, leftRLU, rightRRU, upRLU, upRMU, upRRU, white_up_left);

		}
	}

	//if white is at down[1]
	if (white_up_left == false) {

		if (front[7] == "green" && down[1] == "white" && left[9] == "red") {

			DAC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);

			BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			DC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);

			//repeat the formula until it's at its place
			formula_white_up_left(counter, front, back, right, left, up, down, backRLU, backRMU, backRRU, leftRLU, rightRRU, upRLU, upRMU, upRRU, white_up_left);

		}
	}

	//if white is at left[9]
	if (white_up_left == false) {

		if (front[7] == "red" && down[1] == "green" && left[9] == "white") {

			DAC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);

			BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			DC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);

			//repeat the formula until it's at its place
			formula_white_up_left(counter, front, back, right, left, up, down, backRLU, backRMU, backRRU, leftRLU, rightRRU, upRLU, upRMU, upRRU, white_up_left);

		}
	}

	//if the block is at "down right" side

	//works perfect

	//if white is at front[9]
	if (white_up_left == false) {

		if (front[9] == "white" && down[3] == "green" && right[7] == "red") {

			RAC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);

			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			RC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);

			//repeat the formula until it's at its place
			formula_white_up_left(counter, front, back, right, left, up, down, backRLU, backRMU, backRRU, leftRLU, rightRRU, upRLU, upRMU, upRRU, white_up_left);

		}
	}

	//if white is at down[3]
	if (white_up_left == false) {

		if (front[9] == "red" && down[3] == "white" && right[7] == "green") {

			RAC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);

			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			RC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);

			//repeat the formula until it's at its place
			formula_white_up_left(counter, front, back, right, left, up, down, backRLU, backRMU, backRRU, leftRLU, rightRRU, upRLU, upRMU, upRRU, white_up_left);

		}
	}

	//if white is at right[7]
	if (white_up_left == false) {

		if (front[9] == "green" && down[3] == "red" && right[7] == "white") {

			RAC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);

			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			RC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);

			//repeat the formula until it's at its place
			formula_white_up_left(counter, front, back, right, left, up, down, backRLU, backRMU, backRRU, leftRLU, rightRRU, upRLU, upRMU, upRRU, white_up_left);

		}
	}

	//back side

	//if the block is at "up left" side

	//if white is at back[3]
	if (white_up_left == false) {

		if (back[3] == "white" && up[1] == "red" && left[1] == "green") {

			//if its in position, apply formula
			formula_white_up_left(counter, front, back, right, left, up, down, backRLU, backRMU, backRRU, leftRLU, rightRRU, upRLU, upRMU, upRRU, white_up_left);

		}

	}

	//if white is at up[1]
	if (white_up_left == false) {

		if (back[3] == "green" && up[1] == "white" && left[1] == "red") {

			//if its in position, apply formula
			formula_white_up_left(counter, front, back, right, left, up, down, backRLU, backRMU, backRRU, leftRLU, rightRRU, upRLU, upRMU, upRRU, white_up_left);

		}

	}

	//if white is at left[1]
	if (white_up_left == false) {

		if (back[3] == "red" && up[1] == "green" && left[1] == "white") {

			//if its in position, apply formula
			formula_white_up_left(counter, front, back, right, left, up, down, backRLU, backRMU, backRRU, leftRLU, rightRRU, upRLU, upRMU, upRRU, white_up_left);

		}

	}

	//if the block is at "up right" side

	 //if white is at right[3]
	if (white_up_left == false) {

		if (back[1] == "green" && up[3] == "red" && right[3] == "white") {

			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			//if its in position, apply formula
			formula_white_up_left(counter, front, back, right, left, up, down, backRLU, backRMU, backRRU, leftRLU, rightRRU, upRLU, upRMU, upRRU, white_up_left);

		}

	}

	//if white is at up[3]
	if (white_up_left == false) {

		if (back[1] == "red" && up[3] == "white" && right[3] == "green") {

			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			//if its in position, apply formula
			formula_white_up_left(counter, front, back, right, left, up, down, backRLU, backRMU, backRRU, leftRLU, rightRRU, upRLU, upRMU, upRRU, white_up_left);

		}

	}

	//if white is at back[1]
	if (white_up_left == false) {

		if (back[1] == "white" && up[3] == "green" && right[3] == "red") {

			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			//if its in position, apply formula
			formula_white_up_left(counter, front, back, right, left, up, down, backRLU, backRMU, backRRU, leftRLU, rightRRU, upRLU, upRMU, upRRU, white_up_left);

		}

	}

	//if the block is at "down right" side

	//if white is at back[7]
	if (white_up_left == false) {

		if (back[7] == "white" && down[9] == "red" && right[9] == "green") {

			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			//if its in position, apply formula
			formula_white_up_left(counter, front, back, right, left, up, down, backRLU, backRMU, backRRU, leftRLU, rightRRU, upRLU, upRMU, upRRU, white_up_left);

		}

	}

	//if white is at down[9]
	if (white_up_left == false) {

		if (back[7] == "green" && down[9] == "white" && right[9] == "red") {

			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			//if its in position, apply formula
			formula_white_up_left(counter, front, back, right, left, up, down, backRLU, backRMU, backRRU, leftRLU, rightRRU, upRLU, upRMU, upRRU, white_up_left);

		}

	}

	//if white is at right[9]
	if (white_up_left == false) {

		if (back[7] == "red" && down[9] == "green" && right[9] == "white") {

			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			//if its in position, apply formula
			formula_white_up_left(counter, front, back, right, left, up, down, backRLU, backRMU, backRRU, leftRLU, rightRRU, upRLU, upRMU, upRRU, white_up_left);

		}

	}

	//if the block is at "down left" side

	//if white is at back[9]
	if (white_up_left == false) {

		if (back[9] == "white" && down[7] == "green" && left[7] == "red") {

			BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			//if its in position, apply formula
			formula_white_up_left(counter, front, back, right, left, up, down, backRLU, backRMU, backRRU, leftRLU, rightRRU, upRLU, upRMU, upRRU, white_up_left);

		}

	}

	//if white is at down[7]
	if (white_up_left == false) {

		if (back[9] == "red" && down[7] == "white" && left[7] == "green") {

			BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			//if its in position, apply formula
			formula_white_up_left(counter, front, back, right, left, up, down, backRLU, backRMU, backRRU, leftRLU, rightRRU, upRLU, upRMU, upRRU, white_up_left);

		}

	}

	//if white is at left[7]
	if (white_up_left == false) {

		if (back[9] == "green" && down[7] == "red" && left[7] == "white") {

			BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			//if its in position, apply formula
			formula_white_up_left(counter, front, back, right, left, up, down, backRLU, backRMU, backRRU, leftRLU, rightRRU, upRLU, upRMU, upRRU, white_up_left);

		}

	}
}

void solve_white_up_right(int& counter, string front[10], string back[10], string right[10], string left[10], string up[10], string down[10], string backRMU, string backRRU, string frontRLU, string frontRMU, string leftRLU, string leftRMU, string leftRRU, string upRLD, string upRLM, string upRLU, string upRMD, string upRMU, string backRLU, string rightRRU, string upRRU, string frontRRU, string rightRLU, string rightRMU, string upRRD, string upRRM, string downRLU, string downRMU, string frontRLD, string frontRMD, string leftRRD, bool& white_up_right) {

	//front side

	//if the block is at "up left" side

	//if white is at front[1]
	if (white_up_right == false) {

		if (front[1] == "white" && up[7] == "orange" && left[3] == "green") {

			LAC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);

			BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			LC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);

			//repeat the formula until it's at its place and verify
			formula_white_up_right(counter, front, back, right, left, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD, backRLU, backRMU, upRMU, rightRRU, upRRU, white_up_right);

		}
	}

	//if white is at left[3]
	if (white_up_right == false) {

		if (front[1] == "orange" && up[7] == "green" && left[3] == "white") {

			LAC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);

			BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			LC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);

			//repeat the formula until it's at its place and verify
			formula_white_up_right(counter, front, back, right, left, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD, backRLU, backRMU, upRMU, rightRRU, upRRU, white_up_right);

		}
	}

	//if white is at up[7]
	if (white_up_right == false) {

		if (front[1] == "green" && up[7] == "white" && left[3] == "orange") {

			LAC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);

			BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			LC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);

			//repeat the formula until it's at its place and verify
			formula_white_up_right(counter, front, back, right, left, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD, backRLU, backRMU, upRMU, rightRRU, upRRU, white_up_right);

		}
	}

	//if the block is at "up right" side

	//if white is at front[3]
	if (white_up_right == false) {

		if (front[3] == "white" && up[9] == "green" && right[1] == "orange") {

			white_up_right = true;

		}
	}

	//if white is at up[9]
	if (white_up_right == false) {

		if (front[3] == "orange" && up[9] == "white" && right[1] == "green") {

			//repeat the formula until it's at its place and verify
			formula_white_up_right(counter, front, back, right, left, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD, backRLU, backRMU, upRMU, rightRRU, upRRU, white_up_right);

		}
	}

	//if white is at right[1]
	if (white_up_right == false) {

		if (front[3] == "green" && up[9] == "orange" && right[1] == "white") {

			//repeat the formula until it's at its place and verify
			formula_white_up_right(counter, front, back, right, left, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD, backRLU, backRMU, upRMU, rightRRU, upRRU, white_up_right);

		}
	}

	//if the block is at "down left" side

	//if white is at front[7]
	if (white_up_right == false) {

		if (front[7] == "white" && down[1] == "green" && left[9] == "orange") {

			LC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);

			BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
			BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			LAC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);

			//repeat the formula until it's at its place and verify
			formula_white_up_right(counter, front, back, right, left, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD, backRLU, backRMU, upRMU, rightRRU, upRRU, white_up_right);

		}
	}

	//if white is at down[1]
	if (white_up_right == false) {

		if (front[7] == "orange" && down[1] == "white" && left[9] == "green") {

			LC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);

			BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
			BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			LAC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);

			//repeat the formula until it's at its place and verify
			formula_white_up_right(counter, front, back, right, left, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD, backRLU, backRMU, upRMU, rightRRU, upRRU, white_up_right);

		}
	}

	//works perfect

	//if white is at left[9]
	if (white_up_right == false) {

		if (front[7] == "green" && down[1] == "orange" && left[9] == "white") {

			LC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);

			BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
			BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			LAC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);

			//repeat the formula until it's at its place and verify
			formula_white_up_right(counter, front, back, right, left, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD, backRLU, backRMU, upRMU, rightRRU, upRRU, white_up_right);

		}
	}

	//if the block is at "down right" side

	//if white is at front[9]
	if (white_up_right == false) {

		if (front[9] == "white" && down[3] == "orange" && right[7] == "green") {

			DC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);

			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			DAC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);

			//repeat the formula until it's at its place and verify
			formula_white_up_right(counter, front, back, right, left, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD, backRLU, backRMU, upRMU, rightRRU, upRRU, white_up_right);

		}
	}

	//if white is at down[3]
	if (white_up_right == false) {

		if (front[9] == "green" && down[3] == "white" && right[7] == "orange") {

			DC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);

			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			DAC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);

			//repeat the formula until it's at its place and verify
			formula_white_up_right(counter, front, back, right, left, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD, backRLU, backRMU, upRMU, rightRRU, upRRU, white_up_right);

		}
	}

	//if white is at right[7]
	if (white_up_right == false) {

		if (front[9] == "orange" && down[3] == "green" && right[7] == "white") {

			DC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);

			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			DAC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);

			//repeat the formula until it's at its place and verify
			formula_white_up_right(counter, front, back, right, left, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD, backRLU, backRMU, upRMU, rightRRU, upRRU, white_up_right);

		}
	}

	//back side

	//if the block is at "up left" side

	//if white is at back[3]
	if (white_up_right == false) {

		if (back[3] == "white" && up[1] == "green" && left[1] == "orange") {

			BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			//repeat the formula until it's at its place and verify
			formula_white_up_right(counter, front, back, right, left, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD, backRLU, backRMU, upRMU, rightRRU, upRRU, white_up_right);

		}

	}

	//if white is at up[1]
	if (white_up_right == false) {

		if (back[3] == "orange" && up[1] == "white" && left[1] == "green") {

			BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			//repeat the formula until it's at its place and verify
			formula_white_up_right(counter, front, back, right, left, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD, backRLU, backRMU, upRMU, rightRRU, upRRU, white_up_right);

		}

	}

	//if white is at left[1]
	if (white_up_right == false) {

		if (back[3] == "green" && up[1] == "orange" && left[1] == "white") {

			BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			//repeat the formula until it's at its place and verify
			formula_white_up_right(counter, front, back, right, left, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD, backRLU, backRMU, upRMU, rightRRU, upRRU, white_up_right);

		}

	}

	//if the block is at "up right" side

	 //if white is at right[3]
	if (white_up_right == false) {

		if (back[1] == "orange" && up[3] == "green" && right[3] == "white") {

			//repeat the formula until it's at its place and verify
			formula_white_up_right(counter, front, back, right, left, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD, backRLU, backRMU, upRMU, rightRRU, upRRU, white_up_right);

		}

	}

	//if white is at up[3]
	if (white_up_right == false) {

		if (back[1] == "green" && up[3] == "white" && right[3] == "orange") {

			//repeat the formula until it's at its place and verify
			formula_white_up_right(counter, front, back, right, left, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD, backRLU, backRMU, upRMU, rightRRU, upRRU, white_up_right);

		}

	}

	//if white is at back[1]
	if (white_up_right == false) {

		if (back[1] == "white" && up[3] == "orange" && right[3] == "green") {

			//repeat the formula until it's at its place and verify
			formula_white_up_right(counter, front, back, right, left, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD, backRLU, backRMU, upRMU, rightRRU, upRRU, white_up_right);

		}

	}

	//if the block is at "down right" side

	//if white is at back[7]
	if (white_up_right == false) {

		if (back[7] == "white" && down[9] == "green" && right[9] == "orange") {

			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			//repeat the formula until it's at its place and verify
			formula_white_up_right(counter, front, back, right, left, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD, backRLU, backRMU, upRMU, rightRRU, upRRU, white_up_right);

		}

	}

	//if white is at down[9]
	if (white_up_right == false) {

		if (back[7] == "orange" && down[9] == "white" && right[9] == "green") {

			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			//repeat the formula until it's at its place and verify
			formula_white_up_right(counter, front, back, right, left, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD, backRLU, backRMU, upRMU, rightRRU, upRRU, white_up_right);

		}

	}

	//if white is at right[9]
	if (white_up_right == false) {

		if (back[7] == "green" && down[9] == "orange" && right[9] == "white") {

			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			//repeat the formula until it's at its place and verify
			formula_white_up_right(counter, front, back, right, left, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD, backRLU, backRMU, upRMU, rightRRU, upRRU, white_up_right);

		}

	}

	//if the block is at "down left" side

	//if white is at back[9]
	if (white_up_right == false) {

		if (back[9] == "white" && down[7] == "orange" && left[7] == "green") {

			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			//repeat the formula until it's at its place and verify
			formula_white_up_right(counter, front, back, right, left, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD, backRLU, backRMU, upRMU, rightRRU, upRRU, white_up_right);

		}

	}

	//if white is at down[7]
	if (white_up_right == false) {

		if (back[9] == "green" && down[7] == "white" && left[7] == "orange") {

			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			//repeat the formula until it's at its place and verify
			formula_white_up_right(counter, front, back, right, left, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD, backRLU, backRMU, upRMU, rightRRU, upRRU, white_up_right);

		}

	}

	//if white is at left[7]
	if (white_up_right == false) {

		if (back[9] == "orange" && down[7] == "green" && left[7] == "white") {

			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			//repeat the formula until it's at its place and verify
			formula_white_up_right(counter, front, back, right, left, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD, backRLU, backRMU, upRMU, rightRRU, upRRU, white_up_right);

		}

	}
}

void solve_white_down_left(int& counter, string front[10], string back[10], string right[10], string left[10], string up[10], string down[10], string backRMU, string backRRU, string frontRLU, string frontRMU, string leftRLU, string leftRMU, string leftRRU, string upRLD, string upRLM, string upRLU, string upRMD, string upRMU, string backRLU, string rightRRU, string upRRU, string frontRRU, string rightRLU, string rightRMU, string upRRD, string upRRM, string downRLU, string downRMU, string frontRLD, string frontRMD, string leftRRD, bool& white_down_left) {

	//front side

	//if the block is at "up left" side

	//if white is at front[1]
	if (white_down_left == false) {

		if (front[1] == "white" && up[7] == "red" && left[3] == "blue") {

			UC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);

			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			UAC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);

			//repeat the formula until it's at its place and verify
			formula_white_down_left(counter, front, back, right, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM, backRLU, backRMU, upRMU, rightRRU, upRRU, white_down_left);

		}
	}

	//if white is at left[3]
	if (white_down_left == false) {

		if (front[1] == "red" && up[7] == "blue" && left[3] == "white") {

			UC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);

			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			UAC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);

			//repeat the formula until it's at its place and verify
			formula_white_down_left(counter, front, back, right, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM, backRLU, backRMU, upRMU, rightRRU, upRRU, white_down_left);

		}
	}

	//if white is at up[7]
	if (white_down_left == false) {

		if (front[1] == "blue" && up[7] == "white" && left[3] == "red") {

			UC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);

			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			UAC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);

			//repeat the formula until it's at its place and verify
			formula_white_down_left(counter, front, back, right, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM, backRLU, backRMU, upRMU, rightRRU, upRRU, white_down_left);

		}
	}

	//if the block is at "up right" side

	//if white is at front[3]
	if (white_down_left == false) {

		if (front[3] == "white" && up[9] == "blue" && right[1] == "red") {

			UAC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);

			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			UC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);

			//repeat the formula until it's at its place and verify
			formula_white_down_left(counter, front, back, right, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM, backRLU, backRMU, upRMU, rightRRU, upRRU, white_down_left);

		}
	}

	//if white is at up[9]
	if (white_down_left == false) {

		if (front[3] == "red" && up[9] == "white" && right[1] == "blue") {

			UAC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);

			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			UC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);

			//repeat the formula until it's at its place and verify
			formula_white_down_left(counter, front, back, right, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM, backRLU, backRMU, upRMU, rightRRU, upRRU, white_down_left);

		}
	}

	//if white is at right[1]
	if (white_down_left == false) {

		if (front[3] == "blue" && up[9] == "red" && right[1] == "white") {

			UAC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);

			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			UC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);

			//repeat the formula until it's at its place and verify
			formula_white_down_left(counter, front, back, right, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM, backRLU, backRMU, upRMU, rightRRU, upRRU, white_down_left);

		}
	}

	//if the block is at "down left" side

	//if white is at front[7]
	if (white_down_left == false) {

		if (front[7] == "white" && down[1] == "blue" && left[9] == "red") {

			white_down_left = true;
		}
	}

	//if white is at down[1]
	if (white_down_left == false) {

		if (front[7] == "red" && down[1] == "white" && left[9] == "blue") {

			//repeat the formula until it's at its place and verify
			formula_white_down_left(counter, front, back, right, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM, backRLU, backRMU, upRMU, rightRRU, upRRU, white_down_left);

		}
	}

	//works perfect

	//if white is at left[9]
	if (white_down_left == false) {

		if (front[7] == "blue" && down[1] == "red" && left[9] == "white") {

			//repeat the formula until it's at its place and verify
			formula_white_down_left(counter, front, back, right, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM, backRLU, backRMU, upRMU, rightRRU, upRRU, white_down_left);

		}
	}

	//if the block is at "down right" side

	//if white is at front[9]
	if (white_down_left == false) {

		if (front[9] == "white" && down[3] == "red" && right[7] == "blue") {

			RAC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);

			BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			RC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);

			//repeat the formula until it's at its place and verify
			formula_white_down_left(counter, front, back, right, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM, backRLU, backRMU, upRMU, rightRRU, upRRU, white_down_left);

		}
	}

	//if white is at down[3]
	if (white_down_left == false) {

		if (front[9] == "blue" && down[3] == "white" && right[7] == "red") {

			RAC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);

			BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			RC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);

			//repeat the formula until it's at its place and verify
			formula_white_down_left(counter, front, back, right, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM, backRLU, backRMU, upRMU, rightRRU, upRRU, white_down_left);

		}
	}

	//if white is at right[7]
	if (white_down_left == false) {

		if (front[9] == "red" && down[3] == "blue" && right[7] == "white") {

			RAC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);

			BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			RC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);

			//repeat the formula until it's at its place and verify
			formula_white_down_left(counter, front, back, right, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM, backRLU, backRMU, upRMU, rightRRU, upRRU, white_down_left);

		}
	}

	//back side

	//if the block is at "up left" side

	//if white is at back[3]
	if (white_down_left == false) {

		if (back[3] == "white" && up[1] == "blue" && left[1] == "red") {

			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			//repeat the formula until it's at its place and verify
			formula_white_down_left(counter, front, back, right, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM, backRLU, backRMU, upRMU, rightRRU, upRRU, white_down_left);

		}

	}

	//if white is at up[1]
	if (white_down_left == false) {

		if (back[3] == "red" && up[1] == "white" && left[1] == "blue") {

			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			//repeat the formula until it's at its place and verify
			formula_white_down_left(counter, front, back, right, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM, backRLU, backRMU, upRMU, rightRRU, upRRU, white_down_left);

		}

	}

	//if white is at left[1]
	if (white_down_left == false) {

		if (back[3] == "blue" && up[1] == "red" && left[1] == "white") {

			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			//repeat the formula until it's at its place and verify
			formula_white_down_left(counter, front, back, right, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM, backRLU, backRMU, upRMU, rightRRU, upRRU, white_down_left);

		}

	}

	//if the block is at "up right" side

	 //if white is at right[3]
	if (white_down_left == false) {

		if (back[1] == "red" && up[3] == "blue" && right[3] == "white") {

			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			//repeat the formula until it's at its place and verify
			formula_white_down_left(counter, front, back, right, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM, backRLU, backRMU, upRMU, rightRRU, upRRU, white_down_left);

		}

	}

	//if white is at up[3]
	if (white_down_left == false) {

		if (back[1] == "blue" && up[3] == "white" && right[3] == "red") {

			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			//repeat the formula until it's at its place and verify
			formula_white_down_left(counter, front, back, right, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM, backRLU, backRMU, upRMU, rightRRU, upRRU, white_down_left);

		}

	}

	//if white is at back[1]
	if (white_down_left == false) {

		if (back[1] == "white" && up[3] == "red" && right[3] == "blue") {

			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			//repeat the formula until it's at its place and verify
			formula_white_down_left(counter, front, back, right, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM, backRLU, backRMU, upRMU, rightRRU, upRRU, white_down_left);

		}

	}

	//if the block is at "down right" side

	//if white is at back[7]
	if (white_down_left == false) {

		if (back[7] == "white" && down[9] == "blue" && right[9] == "red") {

			BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			//repeat the formula until it's at its place and verify
			formula_white_down_left(counter, front, back, right, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM, backRLU, backRMU, upRMU, rightRRU, upRRU, white_down_left);

		}

	}

	//if white is at down[9]
	if (white_down_left == false) {

		if (back[7] == "red" && down[9] == "white" && right[9] == "blue") {

			BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			//repeat the formula until it's at its place and verify
			formula_white_down_left(counter, front, back, right, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM, backRLU, backRMU, upRMU, rightRRU, upRRU, white_down_left);

		}

	}

	//if white is at right[9]
	if (white_down_left == false) {

		if (back[7] == "blue" && down[9] == "red" && right[9] == "white") {

			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			//repeat the formula until it's at its place and verify
			formula_white_down_left(counter, front, back, right, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM, backRLU, backRMU, upRMU, rightRRU, upRRU, white_down_left);

		}

	}

	//if the block is at "down left" side

	//if white is at back[9]
	if (white_down_left == false) {

		if (back[9] == "white" && down[7] == "red" && left[7] == "blue") {

			//repeat the formula until it's at its place and verify
			formula_white_down_left(counter, front, back, right, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM, backRLU, backRMU, upRMU, rightRRU, upRRU, white_down_left);

		}

	}

	//if white is at down[7]
	if (white_down_left == false) {

		if (back[9] == "blue" && down[7] == "white" && left[7] == "red") {

			//repeat the formula until it's at its place and verify
			formula_white_down_left(counter, front, back, right, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM, backRLU, backRMU, upRMU, rightRRU, upRRU, white_down_left);

		}

	}

	//if white is at left[7]
	if (white_down_left == false) {

		if (back[9] == "red" && down[7] == "blue" && left[7] == "white") {

			//repeat the formula until it's at its place and verify
			formula_white_down_left(counter, front, back, right, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM, backRLU, backRMU, upRMU, rightRRU, upRRU, white_down_left);

		}

	}
}

void solve_white_down_right(int& counter, string front[10], string back[10], string right[10], string left[10], string up[10], string down[10], string backRMU, string backRRU, string frontRLU, string frontRMU, string leftRLU, string leftRMU, string leftRRU, string upRLD, string upRLM, string upRLU, string upRMD, string upRMU, string backRLU, string rightRRU, string upRRU, string frontRRU, string rightRLU, string rightRMU, string upRRD, string upRRM, string downRLU, string downRMU, string frontRLD, string frontRMD, string leftRRD, bool& white_down_right) {

	//front side

	//if the block is at "up left" side

	//if white is at front[1]
	if (white_down_right == false) {

		if (front[1] == "white" && up[7] == "blue" && left[3] == "orange") {

			LAC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);

			BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
			BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			LC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);

			//repeat the formula until it's at its place and verify
			formula_white_down_right(counter, front, back, right, left, up, down, downRLU, downRMU, backRLU, frontRLD, backRMU, frontRMD, leftRRD, rightRRU, upRMU, upRRU, white_down_right);

		}
	}

	//if white is at left[3]
	if (white_down_right == false) {

		if (front[1] == "blue" && up[7] == "orange" && left[3] == "white") {

			LAC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);

			BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
			BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			LC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);

			//repeat the formula until it's at its place and verify
			formula_white_down_right(counter, front, back, right, left, up, down, downRLU, downRMU, backRLU, frontRLD, backRMU, frontRMD, leftRRD, rightRRU, upRMU, upRRU, white_down_right);


		}
	}

	//if white is at up[7]
	if (white_down_right == false) {

		if (front[1] == "orange" && up[7] == "white" && left[3] == "blue") {

			LAC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);

			BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
			BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			LC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);

			//repeat the formula until it's at its place and verify
			formula_white_down_right(counter, front, back, right, left, up, down, downRLU, downRMU, backRLU, frontRLD, backRMU, frontRMD, leftRRD, rightRRU, upRMU, upRRU, white_down_right);


		}
	}

	//if the block is at "up right" side

	//if white is at front[3]
	if (white_down_right == false) {

		if (front[3] == "white" && up[9] == "orange" && right[1] == "blue") {

			UAC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);

			BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			UC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);

			//repeat the formula until it's at its place and verify
			formula_white_down_right(counter, front, back, right, left, up, down, downRLU, downRMU, backRLU, frontRLD, backRMU, frontRMD, leftRRD, rightRRU, upRMU, upRRU, white_down_right);

		}
	}

	//if white is at up[9]
	if (white_down_right == false) {

		if (front[3] == "blue" && up[9] == "white" && right[1] == "orange") {

			UAC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);

			BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			UC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);

			//repeat the formula until it's at its place and verify
			formula_white_down_right(counter, front, back, right, left, up, down, downRLU, downRMU, backRLU, frontRLD, backRMU, frontRMD, leftRRD, rightRRU, upRMU, upRRU, white_down_right);

		}
	}

	//if white is at right[1]
	if (white_down_right == false) {

		if (front[3] == "orange" && up[9] == "blue" && right[1] == "white") {

			UAC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);

			BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			UC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);

			//repeat the formula until it's at its place and verify
			formula_white_down_right(counter, front, back, right, left, up, down, downRLU, downRMU, backRLU, frontRLD, backRMU, frontRMD, leftRRD, rightRRU, upRMU, upRRU, white_down_right);

		}
	}

	//if the block is at "down left" side

	//if white is at front[7]
	if (white_down_right == false) {

		if (front[7] == "white" && down[1] == "orange" && left[9] == "blue") {

			LC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);

			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			LAC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);

			//repeat the formula until it's at its place and verify
			formula_white_down_right(counter, front, back, right, left, up, down, downRLU, downRMU, backRLU, frontRLD, backRMU, frontRMD, leftRRD, rightRRU, upRMU, upRRU, white_down_right);

		}
	}

	//if white is at down[1]
	if (white_down_right == false) {

		if (front[7] == "blue" && down[1] == "white" && left[9] == "orange") {

			LC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);

			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			LAC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);

			//repeat the formula until it's at its place and verify
			formula_white_down_right(counter, front, back, right, left, up, down, downRLU, downRMU, backRLU, frontRLD, backRMU, frontRMD, leftRRD, rightRRU, upRMU, upRRU, white_down_right);

		}
	}

	//if white is at left[9]
	if (white_down_right == false) {

		if (front[7] == "orange" && down[1] == "blue" && left[9] == "white") {

			LC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);

			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			LAC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);

			//repeat the formula until it's at its place and verify
			formula_white_down_right(counter, front, back, right, left, up, down, downRLU, downRMU, backRLU, frontRLD, backRMU, frontRMD, leftRRD, rightRRU, upRMU, upRRU, white_down_right);

		}
	}

	//if the block is at "down right" side

	//if white is at front[9]
	if (white_down_right == false) {

		if (front[9] == "white" && down[3] == "blue" && right[7] == "orange") {

			white_down_right = true;

		}
	}

	//if white is at down[3]
	if (white_down_right == false) {

		if (front[9] == "orange" && down[3] == "white" && right[7] == "blue") {

			//repeat the formula until it's at its place and verify
			formula_white_down_right(counter, front, back, right, left, up, down, downRLU, downRMU, backRLU, frontRLD, backRMU, frontRMD, leftRRD, rightRRU, upRMU, upRRU, white_down_right);

		}
	}

	//if white is at right[7]
	if (white_down_right == false) {

		if (front[9] == "blue" && down[3] == "orange" && right[7] == "white") {

			//repeat the formula until it's at its place and verify
			formula_white_down_right(counter, front, back, right, left, up, down, downRLU, downRMU, backRLU, frontRLD, backRMU, frontRMD, leftRRD, rightRRU, upRMU, upRRU, white_down_right);

		}
	}

	//back side

	//if the block is at "up left" side

	//if white is at back[3]
	if (white_down_right == false) {

		if (back[3] == "white" && up[1] == "orange" && left[1] == "blue") {

			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			//repeat the formula until it's at its place and verify
			formula_white_down_right(counter, front, back, right, left, up, down, downRLU, downRMU, backRLU, frontRLD, backRMU, frontRMD, leftRRD, rightRRU, upRMU, upRRU, white_down_right);

		}

	}

	//if white is at up[1]
	if (white_down_right == false) {

		if (back[3] == "blue" && up[1] == "white" && left[1] == "orange") {

			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			//repeat the formula until it's at its place and verify
			formula_white_down_right(counter, front, back, right, left, up, down, downRLU, downRMU, backRLU, frontRLD, backRMU, frontRMD, leftRRD, rightRRU, upRMU, upRRU, white_down_right);

		}

	}

	//if white is at left[1]
	if (white_down_right == false) {

		if (back[3] == "orange" && up[1] == "blue" && left[1] == "white") {

			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			//repeat the formula until it's at its place and verify
			formula_white_down_right(counter, front, back, right, left, up, down, downRLU, downRMU, backRLU, frontRLD, backRMU, frontRMD, leftRRD, rightRRU, upRMU, upRRU, white_down_right);

		}

	}

	//if the block is at "up right" side

	 //if white is at right[3]
	if (white_down_right == false) {

		if (back[1] == "blue" && up[3] == "orange" && right[3] == "white") {

			BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			//repeat the formula until it's at its place and verify
			formula_white_down_right(counter, front, back, right, left, up, down, downRLU, downRMU, backRLU, frontRLD, backRMU, frontRMD, leftRRD, rightRRU, upRMU, upRRU, white_down_right);

		}

	}

	//if white is at up[3]
	if (white_down_right == false) {

		if (back[1] == "orange" && up[3] == "white" && right[3] == "blue") {

			BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			//repeat the formula until it's at its place and verify
			formula_white_down_right(counter, front, back, right, left, up, down, downRLU, downRMU, backRLU, frontRLD, backRMU, frontRMD, leftRRD, rightRRU, upRMU, upRRU, white_down_right);

		}

	}

	//if white is at back[1]
	if (white_down_right == false) {

		if (back[1] == "white" && up[3] == "blue" && right[3] == "orange") {

			BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			//repeat the formula until it's at its place and verify
			formula_white_down_right(counter, front, back, right, left, up, down, downRLU, downRMU, backRLU, frontRLD, backRMU, frontRMD, leftRRD, rightRRU, upRMU, upRRU, white_down_right);

		}

	}

	//if the block is at "down right" side

	//if white is at back[7]
	if (white_down_right == false) {

		if (back[7] == "white" && down[9] == "orange" && right[9] == "blue") {

			//repeat the formula until it's at its place and verify
			formula_white_down_right(counter, front, back, right, left, up, down, downRLU, downRMU, backRLU, frontRLD, backRMU, frontRMD, leftRRD, rightRRU, upRMU, upRRU, white_down_right);

		}

	}

	//if white is at down[9]
	if (white_down_right == false) {

		if (back[7] == "blue" && down[9] == "white" && right[9] == "orange") {

			//repeat the formula until it's at its place and verify
			formula_white_down_right(counter, front, back, right, left, up, down, downRLU, downRMU, backRLU, frontRLD, backRMU, frontRMD, leftRRD, rightRRU, upRMU, upRRU, white_down_right);

		}

	}

	//if white is at right[9]
	if (white_down_right == false) {

		if (back[7] == "orange" && down[9] == "blue" && right[9] == "white") {

			//repeat the formula until it's at its place and verify
			formula_white_down_right(counter, front, back, right, left, up, down, downRLU, downRMU, backRLU, frontRLD, backRMU, frontRMD, leftRRD, rightRRU, upRMU, upRRU, white_down_right);

		}

	}

	//if the block is at "down left" side

	//if white is at back[9]
	if (white_down_right == false) {

		if (back[9] == "white" && down[7] == "blue" && left[7] == "orange") {

			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			//repeat the formula until it's at its place and verify
			formula_white_down_right(counter, front, back, right, left, up, down, downRLU, downRMU, backRLU, frontRLD, backRMU, frontRMD, leftRRD, rightRRU, upRMU, upRRU, white_down_right);

		}

	}

	//if white is at down[7]
	if (white_down_right == false) {

		if (back[9] == "orange" && down[7] == "white" && left[7] == "blue") {

			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			//repeat the formula until it's at its place and verify
			formula_white_down_right(counter, front, back, right, left, up, down, downRLU, downRMU, backRLU, frontRLD, backRMU, frontRMD, leftRRD, rightRRU, upRMU, upRRU, white_down_right);

		}

	}

	//if white is at left[7]
	if (white_down_right == false) {

		if (back[9] == "blue" && down[7] == "orange" && left[7] == "white") {

			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			//repeat the formula until it's at its place and verify
			formula_white_down_right(counter, front, back, right, left, up, down, downRLU, downRMU, backRLU, frontRLD, backRMU, frontRMD, leftRRD, rightRRU, upRMU, upRRU, white_down_right);

		}

	}
}

void make_layer_1(int& counter, string front[10], string back[10], string right[10], string left[10], string up[10], string down[10], string frontRRU, string rightRLU, string rightRMU, string upRRM, string backRRU, string backRMU, string leftRLU, string upRLU, string upRRD, string upRMU, string leftRMU, string upRLM, string frontRLD, string frontRMD, string leftRRD, string downRLU, string downRMU, string backRLU, string rightRRU, string upRRU, string frontRLU, string frontRMU, string leftRRU, string upRLD, string upRMD, bool& white_up, bool& white_down, bool& white_right, bool& white_left, bool& white_cross, bool& white_up_right, bool& white_up_left, bool& white_down_right, bool& white_down_left, bool& white_layer) {

	if (white_cross == true) {

		solve_white_up_left(counter, front, back, right, left, up, down, backRMU, backRRU, frontRLU, frontRMU, leftRLU, leftRMU, leftRRU, upRLD, upRLM, upRLU, upRMD, upRMU, backRLU, rightRRU, upRRU, frontRRU, rightRLU, rightRMU, upRRD, upRRM, downRLU, downRMU, frontRLD, frontRMD, leftRRD, white_up_left);
		solve_white_up_right(counter, front, back, right, left, up, down, backRMU, backRRU, frontRLU, frontRMU, leftRLU, leftRMU, leftRRU, upRLD, upRLM, upRLU, upRMD, upRMU, backRLU, rightRRU, upRRU, frontRRU, rightRLU, rightRMU, upRRD, upRRM, downRLU, downRMU, frontRLD, frontRMD, leftRRD, white_up_right);
		solve_white_down_left(counter, front, back, right, left, up, down, backRMU, backRRU, frontRLU, frontRMU, leftRLU, leftRMU, leftRRU, upRLD, upRLM, upRLU, upRMD, upRMU, backRLU, rightRRU, upRRU, frontRRU, rightRLU, rightRMU, upRRD, upRRM, downRLU, downRMU, frontRLD, frontRMD, leftRRD, white_down_left);
		solve_white_down_right(counter, front, back, right, left, up, down, backRMU, backRRU, frontRLU, frontRMU, leftRLU, leftRMU, leftRRU, upRLD, upRLM, upRLU, upRMD, upRMU, backRLU, rightRRU, upRRU, frontRRU, rightRLU, rightRMU, upRRD, upRRM, downRLU, downRMU, frontRLD, frontRMD, leftRRD, white_down_right);

		//when all 4 pieces at their correct corners, Layer 1 will be made
		if (white_up_right == true && white_up_left == true && white_down_left == true && white_down_right == true) {

			white_layer = true;

			cout << "Layer 1 is made" << endl << endl;
		}

	}

}

//Layer 2

void check_Layer_2(int& counter, string front[10], string back[10], string right[10], string left[10], string up[10], string down[10], string backRLU, string backRMU, string rightRRU, string upRMU, string upRRU, int& check, bool& layer_2, bool& is_at_down, bool& is_at_left, bool& is_at_right, bool& is_at_up) {

	//resets the value so function can be run again

	is_at_up = false;
	is_at_right = false;
	is_at_left = false;
	is_at_down = false;

	if (layer_2 == false) {

		for (check; check < 5; check++) {

			//if the block is green

			if (up[2] == up[5] && back[2] != "yellow") {

				is_at_up = true;
				is_at_down = false;
				is_at_left = false;
				is_at_right = false;

			}

			//if the block is orange

			if (right[6] == right[5] && back[4] != "yellow") {

				is_at_up = false;
				is_at_down = false;
				is_at_left = false;
				is_at_right = true;

			}

			//if the block is red

			if (left[4] == left[5] && back[6] != "yellow") {

				is_at_up = false;
				is_at_down = false;
				is_at_left = true;
				is_at_right = false;

			}

			//if the block is blue

			if (down[8] == down[5] && back[8] != "yellow") {

				is_at_up = false;
				is_at_down = true;
				is_at_left = false;
				is_at_right = false;

			}

			//if no one is matching, rotate and check
			if (is_at_up == false && is_at_right == false && is_at_left == false && is_at_down == false) {

				BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			}
		}

	}

	check = 1;
}

void make_Layer_2(int& counter, string front[10], string back[10], string right[10], string left[10], string up[10], string down[10], string backRLU, string backRMU, string rightRRU, string backRRU, string downRLU, string downRMU, string frontRLD, string frontRMD, string leftRRD, string upRMU, string upRRU, string frontRRU, string leftRLU, string rightRLU, string rightRMU, string leftRMU, string upRLM, string upRLU, string upRRD, string upRRM, bool& at_position, bool& is_present, bool& is_at_up, bool& is_at_right, bool& is_at_down, bool& is_at_left, bool& layer_2, int& check) {

	//initial check if layer 2 was made
	if (up[4] == up[6] && right[2] == right[8] && left[2] == left[8] && down[4] == down[6]) {

		layer_2 = true;

		is_at_up = true;
		is_at_right = true;
		is_at_left = true;
		is_at_down = true;

		cout << "Layer 2 is made" << endl << endl;

	}

	//if layer 2 is not made yet and block(s) are not at their position

	while (layer_2 == false) {

		//reset value to use it again
		is_present = false;

		//while if there is no validity, repeat the following process

		if (is_present == false) {
			//When atleast 1 block is not stuck

			if (back[2] != "yellow" && up[2] != "yellow") {

				is_present = true;

			}

			if (back[4] != "yellow" && right[6] != "yellow") {

				is_present = true;

			}

			if (back[8] != "yellow" && down[8] != "yellow") {

				is_present = true;

			}

			if (back[6] != "yellow" && left[4] != "yellow") {

				is_present = true;

			}

			//when a valid block is present
			if (is_present == true) {

				//check which 1 does it matches with

				check_Layer_2(counter, front, back, right, left, up, down, backRLU, backRMU, rightRRU, upRMU, upRRU, check, layer_2, is_at_down, is_at_left, is_at_right, is_at_up);

			}

			//if not present, means all blocks are stuck so apply formula according to condition

			if (up[5] != up[6]) {

				if (is_present == false) {

					RC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);

					BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

					RAC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);

					BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

					UAC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);

					BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

					UC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);

					is_present = true;

				}

			}

			if (up[5] != up[4]) {

				if (is_present == false) {

					LAC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);

					BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

					LC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);

					BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

					UC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);

					BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

					UAC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);

					is_present = true;
				}

			}

			if (down[5] != down[6]) {

				if (is_present == false) {

					RAC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);

					BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

					RC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);

					BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

					DC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);

					BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

					DAC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);

					is_present = true;

				}

			}

			if (down[5] != down[4]) {

				if (is_present == false) {

					LC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);

					BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

					LAC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);

					BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

					DAC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);

					BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

					DC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);

					is_present = true;

				}

			}

		}

		//when any random block is aligned, time to solve it

		//repeat checking and solving until layer 2 is made

			//if its green block

		if (is_at_up == true) {

			//there can be two possibilities

			//if the upper block is with red

			if (up[2] == "green" && back[2] == "red") {

				BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

				LAC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);

				BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

				LC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);

				BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

				UC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);

				BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

				UAC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);

				//after solution, check
				check_Layer_2(counter, front, back, right, left, up, down, backRLU, backRMU, rightRRU, upRMU, upRRU, check, layer_2, is_at_down, is_at_left, is_at_right, is_at_up);

			}

			//if the upper block is with orange

			if (up[2] == "green" && back[2] == "orange") {

				BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

				RC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);

				BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

				RAC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);

				BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

				UAC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);

				BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

				UC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);

				//after solution, check
				check_Layer_2(counter, front, back, right, left, up, down, backRLU, backRMU, rightRRU, upRMU, upRRU, check, layer_2, is_at_down, is_at_left, is_at_right, is_at_up);

			}

		}

		//if its blue block

		if (is_at_down == true) {

			//there can be two possibilities

			//if the upper block is with red

			if (down[8] == "blue" && back[8] == "red") {

				BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

				LC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);

				BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

				LAC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);

				BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

				DAC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);

				BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

				DC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);

				//after solution, check
				check_Layer_2(counter, front, back, right, left, up, down, backRLU, backRMU, rightRRU, upRMU, upRRU, check, layer_2, is_at_down, is_at_left, is_at_right, is_at_up);

			}

			//if the upper block is with orange

			if (down[8] == "blue" && back[8] == "orange") {

				BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

				RAC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);

				BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

				RC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);

				BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

				DC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);

				BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

				DAC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);

				//after solution, check
				check_Layer_2(counter, front, back, right, left, up, down, backRLU, backRMU, rightRRU, upRMU, upRRU, check, layer_2, is_at_down, is_at_left, is_at_right, is_at_up);

			}

		}

		//if its orange block

		if (is_at_right == true) {

			//there can be two possibilities

			//if the upper block is with green

			if (right[6] == "orange" && back[4] == "green") {

				BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

				UAC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);

				BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

				UC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);

				BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

				RC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);

				BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

				RAC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);

				//after solution, check
				check_Layer_2(counter, front, back, right, left, up, down, backRLU, backRMU, rightRRU, upRMU, upRRU, check, layer_2, is_at_down, is_at_left, is_at_right, is_at_up);

			}

			//if the upper block is with blue

			if (right[6] == "orange" && back[4] == "blue") {

				BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

				DC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);

				BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

				DAC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);

				BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

				RAC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);

				BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

				RC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);

				//after solution, check
				check_Layer_2(counter, front, back, right, left, up, down, backRLU, backRMU, rightRRU, upRMU, upRRU, check, layer_2, is_at_down, is_at_left, is_at_right, is_at_up);

			}

		}

		//if its red block

		if (is_at_left == true) {

			//there can be two possibilities

			//if the upper block is with blue

			if (left[4] == "red" && back[6] == "blue") {

				BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

				DAC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);
				
				BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
				
				DC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);
				
				BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
				
				LC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);
				
				BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
				
				LAC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);

				//after solution, check
				check_Layer_2(counter, front, back, right, left, up, down, backRLU, backRMU, rightRRU, upRMU, upRRU, check, layer_2, is_at_down, is_at_left, is_at_right, is_at_up);

			}

			//if the upper block is with green

			if (left[4] == "red" && back[6] == "green") {

				BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

				UC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);

				BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

				UAC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);

				BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

				LAC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);

				BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

				LC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);

				//after solution, check
				check_Layer_2(counter, front, back, right, left, up, down, backRLU, backRMU, rightRRU, upRMU, upRRU, check, layer_2, is_at_down, is_at_left, is_at_right, is_at_up);

			}

		}

		//after solution, check and officially announce completion of Layer 2

		if (up[4] == up[6] && right[2] == right[8] && left[2] == left[8] && down[4] == down[6]) {

			layer_2 = true;

			is_at_up = true;
			is_at_right = true;
			is_at_left = true;
			is_at_down = true;

			cout << "Layer 2 is made" << endl << endl;

		}

	}

	//reset the veriables so they can be used in Layer 3 later on

	at_position = false;
	is_present = false;
	is_at_up = false;
	is_at_right = false;
	is_at_left = false;
	is_at_down = false;
}

//Layer 3

void make_yellow_cross(int& counter, string front[10], string back[10], string right[10], string left[10], string up[10], string down[10], string backRLU, string backRMU, string upRMU, string rightRRU, string upRRU, string backRRU, string frontRRU, string leftRLU, string rightRLU, string rightRMU, string upRLU, string upRRD, string upRRM, string downRLU, string downRMU, string frontRLD, string frontRMD, string leftRMU, string leftRRD, string upRLM, bool& yellow_cross) {

	//check if yellow cross is made already mistakenly
	if (back[2] == "yellow" && back[4] == "yellow" && back[6] == "yellow" && back[8] == "yellow") {

		yellow_cross = true;

		cout << "Yellow Cross is made" << endl << endl;
	}

	if (yellow_cross == false) {

		//check

		//if any is yellow

		if (back[2] == "yellow" || back[4] == "yellow" || back[6] == "yellow" || back[8] == "yellow") {

			//then spin it to back[4]

			while (back[4] != "yellow") {

				BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			}

			//when it reaches the place, apply a formula

			UC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);

			RC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);

			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			RAC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);

			BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			UAC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);

			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			//check again

			if (back[2] == "yellow" && back[4] == "yellow" && back[6] == "yellow" && back[8] == "yellow") {

				yellow_cross = true;

				cout << "Yellow Cross is made" << endl << endl;
			}

			//if not, then it means there should be L and then apply formula for L

			else {

				DC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);

				BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

				LC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);

				BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

				LAC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);

				DAC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);

			}

		}

		yellow_cross = true;

	}

}

void set_position(int& counter, string front[10], string back[10], string right[10], string left[10], string up[10], string down[10], string leftRLU, string backRRU, string frontRLU, string frontRMU, string leftRRU, string upRLD, string leftRMU, string upRLU, string upRLM, string upRMD, string backRLU, string backRMU, string rightRRU, string upRMU, string upRRU, string frontRRU, string rightRLU, string rightRMU, string upRRD, string upRRM, string downRLU, string frontRLD, string frontRMD, string leftRRD, string downRMU, bool& at_position, bool& up_right, bool& up_left, bool& down_right, bool& down_left, bool& right_solved, bool& left_solved, bool& up_solved, bool& down_solved, bool& fish, int& check, bool& white_layer) {

	if (back[3] != "yellow") {

		//there is ONLY yellow cross so we apply formula at specified place to make fish

		//reset check's value to re use it
		check = 1;

		for (check; check <= 5; check++) {

			//reusing it for time being

			at_position = false;

			if (back[3] == "green" && left[1] == "orange") {

				at_position = true;

			}

			if (up[1] == "green" && back[3] == "orange") {

				at_position = true;

			}

			if (up[1] == "orange" && left[1] == "green") {

				at_position = true;

			}

			//if 'at position' is still false, it means the block isn't at desired position

			if (at_position == false) {

				BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			}

		}

		while (back[3] != "yellow") {

			LC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);

			FC(counter, front, right, left, up, down, frontRLU, frontRMU, leftRRU, upRLD, upRMD);

			LAC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);

			FAC(counter, front, right, left, up, down, frontRLU, frontRMU, leftRRU, upRLD, upRMD);

		}

		//after fish is made, take it to other side to complete white layer back

		BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

		//repeat formula until white is fixed back

		white_layer = false;

		while (white_layer == false) {

			LC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);

			FC(counter, front, right, left, up, down, frontRLU, frontRMU, leftRRU, upRLD, upRMD);

			LAC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);

			FAC(counter, front, right, left, up, down, frontRLU, frontRMU, leftRRU, upRLD, upRMD);

			if (front[1] == "white" && front[3] == "white" && front[7] == "white" && front[9] == "white") {

				white_layer = true;

			}

		}

	}

	//if any yellow matches, fish is made

	if (back[3] == "yellow" && up[1] == "orange" && left[1] == "green") {

		BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

		fish = true;

	}

	if (back[1] == "yellow" && up[3] == "green" && right[3] == "orange") {

		fish = true;

	}

	//if fish is made and matched
	if (fish == true) {

		//resetting value
		check = 1;

		//if the matching block is at up right

		//if the next block is at up left position
		if (up[1] == "orange" || left[1] == "orange" || back[3] == "orange") {

			BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			for (check; check <= 3; check++) {

				RC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);
				BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
				RAC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);
				BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			}

			check = 1;

			for (check; check <= 2; check++) {

				UAC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);
				BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
				UC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);
				BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			}

			UAC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);
			BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
			UC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);

			check = 1;

			right_solved = true;
			left_solved = false;
			up_solved = false;
			down_solved = false;
		}

		//if the next block is at down right position
		if (back[7] == "orange" || down[9] == "orange" || right[9] == "orange") {

			right_solved = true;
			left_solved = false;
			up_solved = false;
			down_solved = false;

		}

		//if the next block is at down left position
		if (down[7] == "orange" || left[7] == "orange" || back[9] == "orange") {

			for (check; check <= 3; check++) {

				LC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);
				BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
				LAC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);
				BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			}

			check = 1;

			for (check; check <= 2; check++) {

				DAC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);
				BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
				DC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);
				BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			}

			DAC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);
			BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
			DC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);

			check = 1;

			right_solved = true;
			left_solved = false;
			up_solved = false;
			down_solved = false;

		}

		//solving the other side

		//if the next block is at up left position
		if (up[1] == "blue" || left[1] == "blue" || back[3] == "blue") {

			for (check; check <= 3; check++) {

				LC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);
				BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
				LAC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);
				BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			}

			check = 1;

			for (check; check <= 2; check++) {

				DAC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);
				BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
				DC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);
				BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			}

			DAC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);
			BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
			DC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);

			check = 1;

			right_solved = true;
			left_solved = true;
			up_solved = false;
			down_solved = false;
			at_position = true;

		}

		//if the next block is at down left position
		if (down[7] == "blue" || left[7] == "blue" || back[9] == "blue") {

			right_solved = true;
			left_solved = true;
			up_solved = false;
			down_solved = false;
			at_position = true;

		}

	}

	cout << "Blocks are at position" << endl << endl;

}

void make_Layer_3(int& counter, string front[10], string back[10], string right[10], string left[10], string up[10], string down[10], string backRLU, string backRMU, string upRMU, string rightRRU, string upRRU, string leftRLU, string leftRMU, string backRRU, string upRLU, string upRLM, string frontRLU, string frontRMU, string leftRRU, string upRLD, string upRMD, bool& layer_3) {

	//1stly, check if yellow layer is already made accidently
	if (back[1] == "yellow" && back[3] == "yellow" && back[7] == "yellow" && back[9] == "yellow") {

		layer_3 = true;

		cout << "Layer 3 is made" << endl << endl;

	}

	while (layer_3 == false) {

		//spin back side to bring the piece at place

		while (up[1] != "yellow" && left[1] != "yellow") {

			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

		}

		//apply formula until piece is at yellow's layer
		while (back[3] != "yellow") {

			//formula
			LC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);

			FC(counter, front, right, left, up, down, frontRLU, frontRMU, leftRRU, upRLD, upRMD);

			LAC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);

			FAC(counter, front, right, left, up, down, frontRLU, frontRMU, leftRRU, upRLD, upRMD);

		}

		//check and announce

		if (back[1] == "yellow" && back[3] == "yellow" && back[7] == "yellow" && back[9] == "yellow") {

			layer_3 = true;

			cout << "Layer 3 is made" << endl << endl;

		}

	}

}

//Final Step!

void make_cube(int& counter, string front[10], string back[10], string right[10], string left[10], string up[10], string down[10], string leftRMU, string upRLM,  string backRLU, string backRMU, string upRMU, string rightRRU, string upRRU, string frontRLD, string frontRMD, string leftRRD, string downRLU, string backRRU, string leftRLU, string upRLU, string downRMU, string frontRRU, string rightRLU, string rightRMU, string upRRM, string upRRD, bool& cube, int& check) {

	//spin to bring at required position

	while (up[1] != "green" && up[3] != "green") {

		BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

	}

	//checks

	//if red layer is complete
	if (left[5] == left[4]) {

		//resets value
		check = 1;

		if (up[2] == "blue") {

			DAC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);
			BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
			DC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);
			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			UC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);
			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
			UAC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);
			BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			for (check; check <= 5; check++) {

				DAC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);
				BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
				DC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);
				BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			}

			check = 1;

			for (check; check <= 5; check++) {

				UC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);
				BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
				UAC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);
				BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			}

		}

		if (up[2] != "blue") {

			UC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);
			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
			UAC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);
			BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			DAC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);
			BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
			DC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);
			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			for (check; check <= 5; check++) {

				UC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);
				BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
				UAC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);
				BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			}

			check = 1;

			for (check; check <= 5; check++) {

				DAC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);
				BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
				DC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);
				BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			}

		}

	}

	//if orange layer is complete
	if (right[5] == right[6]) {

		//resets value
		check = 1;

		if (up[2] == "blue") {

			DC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);
			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
			DAC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);
			BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			UAC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);
			BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
			UC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);
			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			for (check; check <= 5; check++) {

				DC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);
				BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
				DAC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);
				BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			}

			check = 1;

			for (check; check <= 5; check++) {

				UAC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);
				BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
				UC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);
				BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			}

		}

		if (up[2] != "blue") {

			UAC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);
			BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
			UC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);
			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			DC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);
			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
			DAC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);
			BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			for (check; check <= 5; check++) {

				UAC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);
				BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
				UC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);
				BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			}

			check = 1;

			for (check; check <= 5; check++) {

				DC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);
				BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
				DAC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);
				BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			}

		}

	}

	//if blue layer is complete
	if (down[5] == down[8]) {

		//resets value
		check = 1;

		if (left[4] == "orange") {

			RAC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);
			BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
			RC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);
			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			LC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);
			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
			LAC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);
			BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			for (check; check <= 5; check++) {

				RAC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);
				BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
				RC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);
				BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			}

			check = 1;

			for (check; check <= 5; check++) {

				LC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);
				BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
				LAC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);
				BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			}

		}

		if (left[4] != "orange") {

			LC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);
			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
			LAC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);
			BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			RAC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);
			BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
			RC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);
			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);


			for (check; check <= 5; check++) {

				LC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);
				BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
				LAC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);
				BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			}

			check = 1;

			for (check; check <= 5; check++) {

				RAC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);
				BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
				RC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);
				BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			}

		}

	}

	//if green layer is complete
	if (up[5] == up[2]) {

		//resets value
		check = 1;

		if (left[4] == "orange") {

			RC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);
			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
			RAC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);
			BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
			
			LAC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);
			BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
			LC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);
			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			for (check; check <= 5; check++) {

				RC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);
				BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
				RAC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);
				BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			}

			check = 1;

			for (check; check <= 5; check++) {

				LAC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);
				BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
				LC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);
				BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			}

		}

		if (left[4] != "orange") {

			LAC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);
			BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
			LC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);
			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
			
			RC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);
			BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
			RAC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);
			BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
			
			for (check; check <= 5; check++) {

				LAC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);
				BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
				LC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);
				BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			}

			check = 1;

			for (check; check <= 5; check++) {

				RC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);
				BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
				RAC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);
				BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

			}

		}

	}

	cube = true;

	cout << "Your Rubik's cube is complete :3" << endl;

}

//Functions for input

string change_input_face(int e, string input_face[10], string front[10], string back[10], string right[10], string left[10], string up[10], string down[10], int i) {

	// when 1 face is done, switch to next one (for input purpose)

	if (e == 1) {
		front[i] = input_face[i];
	}

	if (e == 2) {
		back[i] = input_face[i];
	}

	if (e == 3) {
		right[i] = input_face[i];
	}

	if (e == 4) {
		left[i] = input_face[i];
	}

	if (e == 5) {
		up[i] = input_face[i];
	}

	if (e == 6) {
		down[i] = input_face[i];
	}

	return input_face[i];
}

string display_changed_face(int e, string face) {

	// when 1 face is done, switch to next one (for display purpose)

	if (e == 1) {
		face = "Front";
	}

	if (e == 2) {
		face = "Back";
	}

	if (e == 3) {
		face = "Right";
	}

	if (e == 4) {
		face = "Left";
	}

	if (e == 5) {
		face = "Up";
	}

	if (e == 6) {
		face = "Down";
	}

	return face;
}

void tell_face(string face) {

	cout << "Current face: " << face << endl;

}

//main

int main() {

	// for counting while printing

	int counter = 1;
	//need reference faces

	//front faces

	//block 1
//----------------------

	//f1
	string frontRLU;

	//b1
	string backRLU;

	//r1
	string rightRLU;

	//l1
	string leftRLU;

	//u1
	string upRLU;

	//d1
	string downRLU;

	//-----------------------

		//block 2
	//-----------------------

		//f2
	string frontRMU;

	//b2
	string backRMU;

	//r2
	string rightRMU;

	//l2
	string leftRMU;

	//u2
	string upRMU;

	//d2
	string downRMU;

	//---------------------

		//block 3
	//---------------------

		//f3
	string frontRRU;

	//b3
	string backRRU;

	//r3
	string rightRRU;

	//l3
	string leftRRU;

	//u3
	string upRRU;

	//---------------------

		//block 4
	//---------------------

		//u4
	string upRLM;

	//---------------------

		//block 6
	//---------------------

		//u6
	string upRRM;

	//---------------------

		//block 7
	//---------------------

		//f7
	string frontRLD;

	//u7
	string upRLD;

	//---------------------

		//block 8
	//---------------------

		//f8
	string frontRMD;

	//u8
	string upRMD;

	//---------------------

		//block 9
	//---------------------

		//l9
	string leftRRD;

	//u9
	string upRRD;

	//---------------------

		//faces
	string face = "Front";

	string front[10];
	string back[10];
	string right[10];
	string left[10];
	string up[10];
	string down[10];

	int block;

	string input_face[10];

	cout << "Before starting, tell us about the condition of cube" << endl;

	tell_face(face);

	cout << "Please consider face with WHITE centre as Front face" << endl << endl;
	cout << "Tell us condition about Cube" << endl;

	for (int e = 1; e < 7; e++) {

		//reseting value of i
		int i = 1;

		//set/change colours
		string newface = display_changed_face(e, face);
		face = newface;

		//inputs colours in front face
		for (i = 1; i < 10; i++) {

			block = i;

			cout << "Enter colour at position " << face << " " << block << ": ";

			cin >> input_face[i];

			//change input face after 1 face is done
			change_input_face(e, input_face, front, back, right, left, up, down, i);

		}

	}

	//inputting part is done here

	//checking if input is correct

	if (front[5] != "White" && front[5] != "white") {

		cout << endl << "You have inputted the front face wrong, re-open the program" << endl;

		return 0;

	}

	//solving the cube

	//to check through each step

	//main tasks
	bool white_cross = false;
	bool white_layer = false;
	bool layer_2 = false;
	bool yellow_cross = false;
	bool layer_3 = false;

	bool cube = false;

	//sub tasks

	//making a white cross
	bool white_up = false;
	bool white_down = false;
	bool white_right = false;
	bool white_left = false;

	//Making Layer 1
	bool white_up_left = false;
	bool white_up_right = false;
	bool white_down_right = false;
	bool white_down_left = false;

	//variable for Layer 2 + 3
	bool at_position = false;

	//Layer 2 specific
	int check = 1;
	bool is_present = false;
	bool is_at_up = false;
	bool is_at_right = false;
	bool is_at_left = false;
	bool is_at_down = false;

	//Layer 3 specific
	bool right_solved = false;
	bool left_solved = false;
	bool up_solved = false;
	bool down_solved = false;
	bool fish = false;

	bool up_right = false;
	bool up_left = false;
	bool down_right = false;
	bool down_left = false;

	//For calling functions

	//	FC(counter, front, right, left, up, down, frontRLU, frontRMU, leftRRU, upRLD, upRMD);
	//	FAC(counter, front, right, left, up, down, frontRLU, frontRMU, leftRRU, upRLD, upRMD);

	//	BC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);
	//	BAC(counter, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU);

	//	RC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);
	//	RAC(counter, front, back, right, up, down, frontRRU, rightRLU, rightRMU, upRRM, upRRD);

	//	LC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);
	//	LAC(counter, front, back, left, up, down, leftRLU, leftRMU, backRRU, upRLU, upRLM);

	//	UC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);
	//	UAC(counter, front, back, right, left, up, backRRU, backRMU, leftRLU, upRLU, upRMU);

	//	DC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);
	//	DAC(counter, front, back, right, left, down, frontRLD, frontRMD, leftRRD, downRLU, downRMU);

	//Step 1: making white cross
	make_white_cross(counter, front, back, right, left, up, down, frontRRU, rightRLU, rightRMU, upRRM, backRRU, backRMU, leftRLU, upRLU, upRRD, upRMU, leftRMU, upRLM, frontRLD, frontRMD, leftRRD, downRLU, downRMU, backRLU, rightRRU, upRRU, frontRLU, frontRMU, leftRRU, upRLD, upRMD, white_up, white_down, white_right, white_left, white_cross);

	//Step 2: making white layer
	make_layer_1(counter, front, back, right, left, up, down, frontRRU, rightRLU, rightRMU, upRRM, backRRU, backRMU, leftRLU, upRLU, upRRD, upRMU, leftRMU, upRLM, frontRLD, frontRMD, leftRRD, downRLU, downRMU, backRLU, rightRRU, upRRU, frontRLU, frontRMU, leftRRU, upRLD, upRMD, white_up, white_down, white_right, white_left, white_cross, white_up_right, white_up_left, white_down_right, white_down_left, white_layer);

	//Step 3: making Layer 2
	make_Layer_2(counter, front, back, right, left, up, down, backRLU, backRMU, rightRRU, backRRU, downRLU, downRMU, frontRLD, frontRMD, leftRRD, upRMU, upRRU, frontRRU, leftRLU, rightRLU, rightRMU, leftRMU, upRLM, upRLU, upRRD, upRRM, at_position, is_present, is_at_up, is_at_right, is_at_down, is_at_left, layer_2, check);

	//Step 4: making yellow cross
	make_yellow_cross(counter, front, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU, backRRU, frontRRU, leftRLU, rightRLU, rightRMU, upRLU, upRRD, upRRM, downRLU, downRMU, frontRLD, frontRMD, leftRMU, leftRRD, upRLM, yellow_cross);

	//Step 5: fix positions
	set_position(counter, front, back, right, left, up, down, leftRLU, backRRU, frontRLU, frontRMU, leftRRU, upRLD, leftRMU, upRLU, upRLM, upRMD, backRLU, backRMU, rightRRU, upRMU, upRRU, frontRRU, rightRLU, rightRMU, upRRD, upRRM, downRLU, frontRLD, frontRMD, leftRRD, downRMU, at_position, up_right, up_left, down_right, down_left, right_solved, left_solved, up_solved, down_solved, fish, check, white_layer);

	//Step 6: making yellow Layer
	make_Layer_3(counter, front, back, right, left, up, down, backRLU, backRMU, upRMU, rightRRU, upRRU, leftRLU, leftRMU, backRRU, upRLU, upRLM, frontRLU, frontRMU, leftRRU, upRLD, upRMD, layer_3);

	//Step 7: Finishing touches
	make_cube(counter, front, back, right, left, up, down, leftRMU, upRLM, backRLU, backRMU, upRMU, rightRRU, upRRU, frontRLD, frontRMD, leftRRD, downRLU, backRRU, leftRLU, upRLU, downRMU, frontRRU, rightRLU, rightRMU, upRRM, upRRD, cube, check);

	return 0;
}