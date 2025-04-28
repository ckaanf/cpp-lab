# cpp-lab
## opt.
### Google cpp guide
- [구글 cpp 가이드](https://google.github.io/styleguide/cppguide.html#Variable_Names)
## 1. cpp 기초
### 이름 공간 선언 X
```cpp
 using namespce std; 
와 같이 어떠한 이름 공간을 사용하겠다하고 선언하는 것은 권장되지 않음
새로운 함수가 계속 추가되고 cpp 라이브러리는 방대하므로
std::cin 식으로 사용하는 것을 권장
```

### 이름 없는 이름 공간
```cpp
#include <iostream>
namespace {
  int OnlyInThisFile() {}

  int only_in_this_file = 0;

  int main() {
    OnlyInThisFile();
    only_in_this_file = 3;
  }
}
```
### 레퍼런스의 배열과 배열의 레퍼런스
```cpp
int a,b;
int& arr[2] = {a,b}
=> 컴파일 에러
cpp rule 표준안 8.3.2/4를 보면
>There shall be no references to references, no arrays of references, and no pointers to references

레퍼런스의 레퍼런스,레퍼런스의 배열, 레퍼런스의 포인터는 존재할 수 없다.
```

### 레퍼런스를 리턴하는 함수
```cpp
int function() {
  int a = 2;
  return a;
}

int main() {
  int b = function();
  return 0;
}
```

function의 리턴 타입은 int&, 문제는 function() 안의 a는 함수의 리턴과 함께 사라짐
function이 레퍼런스를 리턴하면서 원래 참조하고 있던 변수가 사라져서 오류 발생
=> Dangling reference라고 부름

`따라서 레퍼런스를 리턴하는 함수에서 지역 변수의 레퍼런스를 리턴하지 않도록 조심`

### 외부 변수의 레퍼런스를 리턴
```cpp
int& function(int& a) {
  a = 5;
  return a;
}

int main() {
  int b = 2;
  int c = function(b);
  return 0
}
```

```cpp
int c = function(b);
```

위 문장은 그냥 c에 현재의 b값인 5를 대입하는 것과 동일
- 이러한 방식의 장점
  - c언어에서 엄청나게 큰 구조체가 있을 때 해당 구조체 변수를 그냥 리턴하면 전체복사가 발생해야해서 시간이 오래걸리지만, 포인터를 리턴한다면 포인터 주소 복사로 빠르게 끝남
  - 마찬가지로 레퍼런스를 리턴할 시 레퍼런스가 참조하는 타입의 크기와 상관없이 딱 한번의 주소값 복사로 전달이 끝남