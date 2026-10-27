## Test 1 - Daytime
- Distance: 5 km
- Waiting: 10 minutes
- Nighttime: No
- Trip 2: 12000 MNT
- Trip 3: 15000 MNT
- Expected total: 11500 MNT
- Expected sorted fares: 11500, 12000, 15000
- Flowgorithm expected result: 11500 MNT
- C expected result: 11500 MNT

## Test 2 - Nighttime
- Distance: 5 km
- Waiting: 10 minutes
- Nighttime: Yes
- Trip 2: 12000 MNT
- Trip 3: 15000 MNT
- Expected total: 13800 MNT
- Expected sorted fares: 12000, 13800, 15000
- Flowgorithm expected result: 13800 MNT
- C expected result: 13800 MNT

## Test 3 - Boundary Value
- Distance: 0 km
- Waiting: 0 minutes
- Nighttime: No
- Trip 2: 1000 MNT
- Trip 3: 3000 MNT
- Expected total: 2000 MNT
- Expected sorted fares: 1000, 2000, 3000
- Flowgorithm expected result: 2000 MNT
- C expected result: 2000 MNT

## Test 4 - Invalid Distance
- Distance: -5, then 5
- Waiting: 10 minutes
- Nighttime: No
- Trip 2: 12000 MNT
- Trip 3: 15000 MNT
- Expected behavior: Reject -5 and ask again
- Expected total: 11500 MNT
- Expected sorted fares: 11500, 12000, 15000
- Flowgorithm expected result: 11500 MNT
- C expected result: 11500 MNT

## Test 5 - Invalid Waiting Time
- Distance: 5 km
- Waiting: -3, then 10 minutes
- Nighttime: Yes
- Trip 2: 12000 MNT
- Trip 3: 15000 MNT
- Expected behavior: Reject -3 and ask again
- Expected total: 13800 MNT
- Expected sorted fares: 12000, 13800, 15000
- Flowgorithm expected result: 13800 MNT
- C expected result: 13800 MNT

## Fare Table

| Distance (km) | Expected Fare (MNT) |
|---|---|
| 1 | 3500 |
| 2 | 5000 |
| 3 | 6500 |
| 4 | 8000 |
| 5 | 9500 |
| 6 | 11000 |
| 7 | 12500 |
| 8 | 14000 |
| 9 | 15500 |
| 10 | 17000 |