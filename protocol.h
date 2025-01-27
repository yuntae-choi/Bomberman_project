#pragma once

struct LOGIN_packet { // 로그인 요청 패킷
	int type; // 패킷 타입
	int size; // 패킷 사이즈
	int ID; // 플레이어 아이디
};

struct LOGIN_OK_packet {// 로그인 허락 패킷
	int type; // 패킷 타입
	int size; // 패킷 사이즈
	int x, y; // 플레이어 좌표
	int name; //플레이어 닉네임
	int level; // 플레이어 레벨
	int Exp; // 플레이어 경험치
	int map[]; // 맵 정보
};

struct INIT_PLAYER_packet { // 플레이어 생성 패킷
	int type; // 패킷 타입
	int size; // 패킷 사이즈
	int ID; // 플레이어 아이디
	int x, y; // 플레이어 좌표
	int condition; // 플레이어 상태
};

struct PLAYER_CONDITION_packet { // 플레이어 상태 패킷
	int type; // 패킷 타입
	int size; // 패킷 사이즈
	int ID; // 플레이어 아이디
	int x, y; // 플레이어 좌표
	int condition; // 플레이어 상태
};

struct PLAYER_BUF_packet {// 플레이어 버프 패킷
	int type; // 패킷 타입
	int size; // 패킷 사이즈
	int ID; // 플레이어 아이디
	int power; // 폭탄 위력
};

struct GET_ITEM_packet {// 아이템 획득 요청 피킷
	int type; // 패킷 타입
	int size; // 패킷 사이즈
	int ID; // 플레이어 아이디
	int item_index; // 아이템 인덱스
};

struct MOVE_PLAYER_packet { // 플레이어 이동 패킷
	int type; // 패킷 타입
	int size; // 패킷 사이즈
	int ID; // 플레이어 아이디
	int dir; // 이동 방향
};
struct MOVE_OK_packet { // 플레이어 이동 확인 패킷
	int type; // 패킷 타입
	int size; // 패킷 사이즈
	int ID; // 플레이어 아이디
	int x, y; // 플레이어 좌표
};

struct INIT_OBECT_packet { // 오브젝트 생성 패킷
	int type; // 패킷 타입
	int size; // 패킷 사이즈
	int ob_type; // 오브젝트 타입
	int x, y; // 오브젝트 좌표
};

struct INIT_BOMB_packet {// 폭탄 생성 패킷
	int type; // 패킷 타입
	int size; // 패킷 사이즈
	int power; // 폭탄 위력
	int x, y; // 오브젝트 좌표
};


struct DELETE_OBJECT_packet { // 오브젝트 제거 패킷
	int type; // 패킷 타입
	int size; // 패킷 사이즈
	int ob_type; // 오브젝트 타입
	int index; // 오브젝트 인덱스 번호
};

struct CHANGE_HEART_packet { // 플레이어 체력 변경 정보 패킷
	int type; // 패킷 사이즈
	int size; // 패킷 사이즈
	int ID;// 플레이어 아이디
	bool hp_decrease; // "0-체력 변화X"
};