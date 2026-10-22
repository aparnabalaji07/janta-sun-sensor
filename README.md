# Janta Power Sun Sensor

Embedded subteam repo for the Comet Robotics Corporate Projects partnership with Janta Power (Fall 2026).

## Description

We are building a clip-on calibration tool for Janta solar trackers. Two photodiodes compare how much light lands on the east and west sides. The panel rotates until both sides are equal, which means it is pointing straight at the sun. The panel angle at that moment is compared to the true sun position from latitude, longitude, and time. The difference shows how far off the tracker's home position is.

We test on a small rotating panel built by the mechanical team.

## Targets

- Accuracy within 5 degrees
- One axis (east to west)
- Hardware budget of $50

## How it works

1. Read sensor A and sensor B
2. Compute the ratio r = (B - A) / (A + B)
3. Use the calibration table to see which way the sun is and roughly how far
4. Rotate the panel toward the sun
5. Repeat until r is close to 0
6. Compare the panel angle to the computed sun position

The ratio does not change when overall brightness changes, like when a cloud passes. The zero point only needs both sensors to be equal, so it is the most reliable reading.

## Repo layout

- `firmware/sun_sensor/` ESP32 code
- `hardware/` schematics, parts list, housing notes
- `tests/` desktop tests for the math
- `test-data/` CSV files from tests
- `docs/` guides and the test report

## Team

- Aparna Balaji, embedded lead
- Austin Barriere, software
- Nitin Thota, software
- Paola Valdivia, hardware
- Bronson Farque, hardware

## Workflow

Every change starts from an issue, goes on its own branch, and gets merged through a pull request after one review. See CONTRIBUTING.md.
