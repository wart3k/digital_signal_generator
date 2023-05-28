#include "triangle.h"

Triangle::Triangle(float amplitude, float offset, std::uint32_t samples_per_second, std::uint32_t frequency,
                   std::int16_t phase) {
    amplitude_ = amplitude;
    offset_ = offset;
    samples_per_second_ = samples_per_second;
    frequency_ = frequency;
    phase_shift_ = phase;
}

void Triangle::SetAmplitude(float amplitude) {

}

void Triangle::SetOffset(float offset) {

}

void Triangle::SetSamplesPerSecond(std::uint32_t sps) {

}

void Triangle::SetFrequency(std::uint32_t f) {

}

void Triangle::SetPhaseShift(std::int16_t phase) {

}

float Triangle::getPeriod() {
    return 0;
}
