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
		int max = 5;
		int rng;
		int guess;
		int counter = 0;
		int playagainint = 0;
		int zero = 0;
		std::cout << "Enter a number:" << std::endl;
		std::cin >> guess;
		std::srand(time(0));
		rng = (std::rand() % max) + 1;
		do {
			if (guess > rng) {
				std::cout << "Your number is too high" << std::endl;
				std::cout << "Enter another number:" << std::endl;
				std::cin >> guess;
			}
			else if (guess < rng) {
				std::cout << "Your number is too low" << std::endl;
				std::cout << "Enter another number" << std::endl;
				std::cin >> guess;
			}
			if (counter == 0 && guess == rng) {
				counter--;
			}
			counter++;
			
			
		} while (rng != guess);
		std::cout << "Congratulation you guessed the right number!" << std::endl;
		std::cout << "Amount of guesses:" << counter + 1 << std::endl;
		if (i > 9 && highscore[9] > counter + 1) {
			highscore[9] = counter + 1;
		}
		else if (i < 9) {
			highscore[i] = counter + 1;
		}
		std::sort(highscore.begin(), highscore.end());
		std::cout << "----------Highscores----------" << std::endl;
		if (highscore[1] > 0) {
			std::cout << highscore[1] << std::endl;
		}
		if (highscore[2] > 0) {
			std::cout << highscore[2] << std::endl;
		}
		if (highscore[3] > 0) {
			std::cout << highscore[3] << std::endl;
		}
		if (highscore[3] > 0) {
			std::cout << highscore[3] << std::endl;
		}
		if (highscore[4] > 0) {
			std::cout << highscore[4] << std::endl;
		}
		if (highscore[5] > 0) {
			std::cout << highscore[5] << std::endl;
		}
		if (highscore[6] > 0) {
			std::cout << highscore[6] << std::endl;
		}
		if (highscore[7] > 0) {
			std::cout << highscore[7] << std::endl;
		}
		if (highscore[8] > 0) {
			std::cout << highscore[8] << std::endl;
		}
		if (highscore[9] > 0) {
			std::cout << highscore[9] << std::endl;
		}
		i++;
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