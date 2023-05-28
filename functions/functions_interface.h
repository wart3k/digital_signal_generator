#ifndef DIGITAL_SIGNAL_GENERATOR_FUNCTIONS_INTERFACE_H
#define DIGITAL_SIGNAL_GENERATOR_FUNCTIONS_INTERFACE_H

#include <cstdint>

class FunctionsInterface {
public:
    FunctionsInterface() = default;
    ~FunctionsInterface() = default;

    // Abstract method to set the amplitude of the function
    virtual void SetAmplitude(float amplitude) = 0;

    // Abstract method to set the offset of the function
    virtual void SetOffset(float offset) = 0;

    // Abstract method to set the samples per second of the function
    virtual void SetSamplesPerSecond(std::uint32_t sps) = 0;

    // Abstract method to set the frequency of the function
    virtual void SetFrequency(std::uint32_t f) = 0;

    // Abstract method to set the phase shift of the function
    virtual void SetPhaseShift(std::int16_t phase) = 0;

    // Abstract method to calculate the period of the function
    virtual float getPeriod() = 0;

protected:
    float amplitude_; // Amplitude of the function
    float offset_; // Offset of the function
    std::uint32_t samples_per_second_; // Samples per second of the function
    std::uint32_t frequency_; // Frequency of the function
    std::int16_t phase_shift_; // Phase shift of the function
};


#endif //DIGITAL_SIGNAL_GENERATOR_FUNCTIONS_INTERFACE_H