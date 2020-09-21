#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>

int i = 0;
bool playagain = true;
std::vector<int> highscore(10);



int main() {
	do {
		int difficulty;
		int max = 0;
		std::cout << "Choose difficulty:" << std::endl;
		std::cout << "1 = easy (1-5)  2 = medium (1-10)  3 = hard(1-30)" << std::endl;
		std::cin >> difficulty;
		if (difficulty == 1) {
			max = 5;
		}
		else if (difficulty == 2) {
			max = 10;
		}
		else if (difficulty == 3) {
			max = 30;
		}
		else {
			std::cout << "invalid input";
		}
		
		int rng;
		int guess;
		int counter = 0;
		int playagainint = 0;
		std::cout << "Enter a number:" << std::endl;
		std::srand(time(0));
		rng = (std::rand() % max) + 1;
		while (true){
			std::cin >> guess;
			counter++;
			if (guess > rng) {
				std::cout << "Your number is too high" << std::endl;
				std::cout << "Enter another number:" << std::endl;
				
			}
			else if (guess < rng) {
				std::cout << "Your number is too low" << std::endl;
				std::cout << "Enter another number:" << std::endl;
				
			}
			else {
				break;
			}
		}
		std::cout << "Congratulation you guessed the right number!" << std::endl;
		std::cout << "Amount of guesses:" << counter << std::endl;
		if (counter > highscore[1]) {
			std::cout << "Congratulation you beat the highscore!" << std::endl;
		}
		else if (counter = highscore[1]) {
			std::cout << "Congratulation you got equal to the highscore!" << std::endl;
		}
		highscore.insert(highscore.begin(), counter);
		std::sort(highscore.begin(), highscore.end());
		highscore.pop_back();
		if (i > 9 && highscore[9] > counter) {
			highscore[9] = counter;
		}
		else if (i < 9) {
			highscore[i] = counter;
		}
		std::sort(highscore.begin(), highscore.end());
		std::cout << "----------Highscores----------" << std::endl;
		
		for (int j = 0; j < 10; j++) {
			if (highscore[j] > 0) {
				std::cout <<highscore[j] << std::endl;
			}
		}
		std::cout << "Would you like to play again?" << std::endl;
		std::cout << "For yes enter: 1    For no enter: 2" << std::endl;
		std::cin >> playagainint;
		if (playagainint == 1) {
			playagain = true;
		}
		else if (playagain == 2) {
			playagain = false;
		}
		else {
			std::cout << "invalid input" << std::endl;
			playagain = false;
		}

	} while (playagain == true);



	return 0;
}