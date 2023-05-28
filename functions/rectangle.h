#ifndef DIGITAL_SIGNAL_GENERATOR_RECTANGLE_H
#define DIGITAL_SIGNAL_GENERATOR_RECTANGLE_H

#include "functions_interface.h"

class Rectangle : public FunctionsInterface {
    Rectangle(float amplitude, float offset, std::uint32_t samples_per_second, std::uint32_t frequency, std::int16_t phase);
    ~Rectangle() = default;

    // Abstract method to set the amplitude of the function
    void SetAmplitude(float amplitude) override;

    // Abstract method to set the offset of the function
    void SetOffset(float offset) override;

    // Abstract method to set the samples per second of the function
    void SetSamplesPerSecond(std::uint32_t sps) override;

    // Abstract method to set the frequency of the function
    void SetFrequency(std::uint32_t f) override;

    // Abstract method to set the phase shift of the function
    void SetPhaseShift(std::int16_t phase) override;

    // Abstract method to calculate the period of the function
    float getPeriod() override;

private:
    float amplitude_; // Amplitude of the function
    float offset_; // Offset of the function
    std::uint32_t samples_per_second_; // Samples per second of the function
    std::uint32_t frequency_; // Frequency of the function
    std::int16_t phase_shift_; // Phase shift of the function
};


#endif //DIGITAL_SIGNAL_GENERATOR_RECTANGLE_H
