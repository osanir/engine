#!/bin/bash

g++ main.cpp sources/*.cpp -o game -lsfml-network -lsfml-graphics -lsfml-window -lsfml-system -lGL -lsfml-audio
./game
