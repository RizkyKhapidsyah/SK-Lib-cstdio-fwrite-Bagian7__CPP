#pragma warning(disable:4996)

#include <cstdio>
#include <cstring>
#include <conio.h>

/*
	Source by AlphaCodingSkills (https://www.alphacodingskills.com)
	Modified For Learn by RK
	I.D.E : VS2022
*/

int main() {
	char c[] = "Halo Manusia!";
	char buffer[100];

	//buka file dalam mode tulis dan baca
	FILE* pFile = fopen("test.txt", "w+");

	//menulis data ke file
	fwrite(c, strlen(c) + 1, 1, pFile);

	//cari ke awal file
	fseek(pFile, 0, SEEK_SET);

	//membaca dan menampilkan data
	fread(buffer, strlen(c) + 1, 1, pFile);
	printf("%s\n", buffer);

	//menutup file
	fclose(pFile);

	_getch();
	return 0;
}