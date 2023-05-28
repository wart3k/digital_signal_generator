#include "sinus.h"

Sinus::Sinus(float amplitude, float offset, std::uint32_t samples_per_second, std::uint32_t frequency,
             std::int16_t phase) {
    amplitude_ = amplitude;
    offset_ = offset;
    samples_per_second_ = samples_per_second;
    frequency_ = frequency;
    phase_shift_ = phase;
}

void Sinus::SetAmplitude(float amplitude) {

}

void Sinus::SetOffset(float offset) {

}

void Sinus::SetSamplesPerSecond(std::uint32_t sps) {

}

void Sinus::SetFrequency(std::uint32_t f) {

}

void Sinus::SetPhaseShift(std::int16_t phase) {

}

float Sinus::getPeriod() {
    return 0;
}
