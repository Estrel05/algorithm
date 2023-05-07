import 'package:flutter/material.dart';

void main() {
  runApp(const MyApp());
}

class MyApp extends StatelessWidget {
  const MyApp({super.key});

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home: Scaffold(
        appBar: AppBar(title: Text('app')),
        body: Text('app'),
        bottomNavigationBar: BottomAppBar(
          height: 50,
          child: Row(
            mainAxisAlignment: MainAxisAlignment.spaceEvenly,
            children: [
              Icon(Icons.phone),
              Icon(Icons.message),
              Icon(Icons.contact_page),
            ],
          ),
        ),
      ),
    );
  }
}
/*
crtl + shift + R → extract, wrap
extract를 사용하여 위젯 재사용
SingleChildScrollView 좌우 스크롤
required 필요한 요소 정의
final 위젯 재사용 시 변경 값
circular 각 둥글게
only 특정 부분만 변경할 때
*/