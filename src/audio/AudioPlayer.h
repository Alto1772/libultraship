#pragma once
#include "stdint.h"
#include "stddef.h"
#include <string>

namespace Ship {
class AudioPlayer {

  public:
    AudioPlayer();
    ~AudioPlayer();

    bool Init(void);
    virtual int Buffered(void) = 0;
    virtual int GetDesiredBuffered(void) = 0;
    virtual void Play(const uint8_t* buf, size_t len) = 0;

    bool IsInitialized(void);

    constexpr int GetSampleRate() const {
        return 44100;
    }

  protected:
    virtual bool DoInit(void) = 0;

  private:
    bool mInitialized;
};
} // namespace Ship

#ifdef _WIN32
#include "WasapiAudioPlayer.h"
#endif

#include "SDLAudioPlayer.h"
