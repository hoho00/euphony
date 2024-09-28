#include "FFTModel.h"
#include <Definitions.h>

using namespace Euphony;

FFTModel::FFTModel(int fftSizeSrc)
: fftSize(fftSizeSrc)
{ }

int FFTModel::getFFTSize() const {
    return fftSize;
}

void FFTModel::setFFTSize(int fftSizeSrc) {
    fftSize = fftSizeSrc;
}

float FFTModel::makeAmplitudeSpectrum(float real, float im) const {
    return sqrtf(real * real + im * im ) / (float) (fftSize >> 1);
}

float FFTModel::makePhaseSpectrum(float real, float im) const {
    return atan(im/real);
}

Spectrums::Spectrums(float *pAmplitudeSpectrum, float *pPhaseSpectrum) :
amplitudeSpectrum(pAmplitudeSpectrum),
phaseSpectrum(pPhaseSpectrum)
{ }
