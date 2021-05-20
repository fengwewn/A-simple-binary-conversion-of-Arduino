int calculation_cs(byte num) {
  /*
   * Enter the sum and return the CS value
   */
  /*
     need to add all the values,
     then reverse them,
     and finally add 1.

     The addition step is omitted here
     because it needs to be added before calling
  */
  byte fan;
  for (int i = 7 ; i != -1 ; i--) {
    int z = !bitRead(num, i);
    bitWrite(fan, i, z);
  }
  fan += 1;
  return fan;

}

