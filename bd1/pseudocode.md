# Taxi Fare Calculator Pseudocode

START

1. Declare variables:
   - зай, нийт (Real)
   - хүлээлт (Integer)
   - шөнө (Boolean)
   - үнэ1, үнэ2, үнэ3, түр (Real)

2. Get distance:
   DO
      Display "Enter distance (km)"
      Input zai
   WHILE zai < 0

3. Get waiting time:
   DO
      Display "Enter waiting time"
      Input хүлээлт
   WHILE хүлээлт < 0

4. Input шөнө (True or False)

5. Calculate total fare:
   нийт = 2000 + (зай * 1500)
          + (хүлээлт * 200)

6. IF шөнө = True THEN
      нийт = нийт * 1.20
   END IF

7. Display нийт

8. CALL Хүснэгт()

9. Set үнэ1 = нийт

10. Get additional fares:
    DO
       Input үнэ2
       Input үнэ3
    WHILE үнэ2 < 0 OR үнэ3 < 0

11. Sort the three fares:

    IF үнэ1 > үнэ2 THEN
       түр = үнэ1
       үнэ1 = үнэ2
       үнэ2 = түр
    END IF

    IF үнэ1 > үнэ3 THEN
       түр = үнэ1
       үнэ1 = үнэ3
       үнэ3 = түр
    END IF

    IF үнэ2 > үнэ3 THEN
       түр = үнэ2
       үнэ2 = үнэ3
       үнэ3 = түр
    END IF

12. Display:
    - Cheapest fare: үнэ1
    - Middle fare: үнэ2
    - Most expensive fare: үнэ3

END

## Хүснэгт

START

1. Declare км (Integer)
2. Declare хүснэгтийнТөлбөр (Real)

3. FOR км = 1 TO 10
      хүснэгтийнТөлбөр = 2000 + (км * 1500)
      Display км and хүснэгтийнТөлбөр
   END FOR

END
