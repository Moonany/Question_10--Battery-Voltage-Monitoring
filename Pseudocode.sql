BEGIN
  DECLARE voltage AS DOUBLE

  PRINT "Enter battery voltage reading (V): "
  INPUT voltage

  WHILE voltage >= 12 DO
    PRINT "Battery voltage normal: ", voltage, " V"
    PRINT "Enter next battery voltage reading (V): "
    INPUT voltage
  END WHILE

  PRINT "Battery voltage low. Recharge required."

END