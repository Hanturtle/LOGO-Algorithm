function solution(citations) {
  //많이 인용된 순으로 정렬한 후,피인용수가 논문수와 같아지거나 피인용수가 논문수보다 작아지기 시작하는 숫자가 바로 나의 h가 됩니다.
  let answer = 0;
  let number = 0;
  const sortArr = citations.sort((a, b) => {
    return b - a;
  });

  sortArr.forEach((citation) => {
    if (citation === number || citation < number) return (answer = number);
    number++;
    if (number === citations.length) return (answer = number);
  });

  return answer;
}
