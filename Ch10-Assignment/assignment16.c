/*
음원 사이트에 등록된 노래 정보를 관리하기 위한 프로그램을 작성하시오.
노래마다 곡명, 가수, 장르, 재생시간을 저장할 수 있게 SONG 구조체를 정의한다.
장르는 열거체와 열거 상수를 이용해서 나타내시오. SONG 구조체 배열을 선언하고 적절히 초기화한 다음 전체 노래 목록을 장르별로
출력하는 프로그램을 작성하시오.
*/

#include <stdio.h>
#include <string.h>

typedef enum {
    BALLAD,
    DANCE,
    HIPHOP,
    ROCK,
    POP
} GENRE;

typedef struct {
    char title[50];
    char artist[50];
    GENRE genre;
    int playTime;   // 재생시간(초)
} SONG;

// 열거형을 문자열로 변환하는 함수
const char* getGenreName(GENRE g) {
    switch (g) {
    case BALLAD: return "ballad";
    case DANCE:  return "dance";
    case HIPHOP: return "hiphop";
    case ROCK:   return "rock";
    case POP:    return "pop";
    default:     return "unknown";
    }
}

int main()
{
    SONG songs[] = {
        {"별 보러 가자", "박보검", BALLAD, 316},
        {"아이유 - Love Poem", "아이유", BALLAD, 242},
        {"Next Level", "aespa", DANCE, 221},
        {"그날들", "장범준", BALLAD, 298},
        {"Dynamite", "BTS", POP, 199},
        {"ON", "BTS", HIPHOP, 300},
    };

    int size = sizeof(songs) / sizeof(songs[0]);

    printf("제목                   아티스트              장르            재생시간\n");
    printf("---------------------------------------------------------------------\n");

    for (int i = 0; i < size; i++) {
        printf("%-20s %-20s %-10s %d초\n",
            songs[i].title,
            songs[i].artist,
            getGenreName(songs[i].genre),
            songs[i].playTime
        );
    }

    return 0;
}
