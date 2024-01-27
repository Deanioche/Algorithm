// change to /dev/stdin when submit
require('fs').readFile('dev/stdin', 'utf8', function (err, data) {
  let line = [];
  let _max = { num: 0, stu: Infinity };
  data
    .split('\n')
    .slice(1)
    .forEach(function (txt, index) {
      const [code, stu] = txt.split(' ').map(Number);
      if (stu) {
        line.push(stu);
        if (line.length >= _max.num) {
          if (line.length > _max.num) {
            _max.num = line.length;
            _max.stu = stu;
          } else {
            _max.stu = Math.min(_max.stu, stu);
          }
        }
      } else {
        line.shift();
      }
    });
  console.log(_max.num, _max.stu);
});
