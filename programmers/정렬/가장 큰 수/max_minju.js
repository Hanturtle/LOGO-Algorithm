function solution(numbers) {
  let answer = '';

  answer = numbers
    .map((c) => c + '')
    .sort((a, b) => b + a - (a + b))
    .join('');
  console.log(answer[0]);

  if (answer[0] == '0') return '0'; // 전부 0인경우 예외

  return answer;
}
