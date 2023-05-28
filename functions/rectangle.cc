//
// Created by WART3K on 29.05.2023.
//

#include "rectangle.h"

Rectangle::Rectangle(float amplitude, float offset, std::uint32_t samples_per_second, std::uint32_t frequency,
                     std::int16_t phase) {
    amplitude_ = amplitude;
    offset_ = offset;
    samples_per_second_ = samples_per_second;
    frequency_ = frequency;
    phase_shift_ = phase;
}

void Rectangle::SetAmplitude(float amplitude) {

}

void Rectangle::SetOffset(float offset) {

}

void Rectangle::SetSamplesPerSecond(std::uint32_t sps) {

}

void Rectangle::SetFrequency(std::uint32_t f) {

}

void Rectangle::SetPhaseShift(std::int16_t phase) {

}

float Rectangle::getPeriod() {
    return 0;
}
