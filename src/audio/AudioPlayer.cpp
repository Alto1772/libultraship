#include "AudioPlayer.h"
#include "spdlog/spdlog.h"

namespace Ship {
AudioPlayer::AudioPlayer() : mInitialized(false) {
    mSampleRate = 44100;
};

AudioPlayer::~AudioPlayer() {
    SPDLOG_TRACE("destruct audio player");
}

bool AudioPlayer::Init(void) {
    mInitialized = DoInit();
    return IsInitialized();
}

bool AudioPlayer::IsInitialized(void) {
    return mInitialized;
}

int AudioPlayer::GetSampleRate() const {
    return mSampleRate;
}

int AudioPlayer::SetSampleRate(int sampleRate) {
    mSampleRate = sampleRate;
}

} // namespace Ship
