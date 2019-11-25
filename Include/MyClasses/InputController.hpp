#pragma once
#include <SFML/Graphics.hpp>

class InputController 
{
public:

    InputController();
    ~InputController();

    void updateKeysValues();
    void updateMouseValues();
    void updateMouseAndKeyValues();

    int getMouseDeltaX() const;
    int getMouseDeltaY() const;
    float getKeyW() const;
    float getKeyS() const;
    float getKeyA() const;
    float getKeyD() const;
    bool getKeyE() const;
    bool getKeyQ() const;
    bool getKeyShift() const;
    bool getKeySpace() const;
    bool getKeyESC() const;
    bool getKeyEMERGENCY_EXIT() const;

private:

    sf::Clock timer;
    float deltaTime;

    float normalizedInput(float, bool);
    void updateDeltaTime();

    int mouseDeltaX;
    int mouseDeltaY;
    float W;
    float S;
    float A;
    float D;
    
    bool E;
    bool Q;

    bool Shift;
    bool Space;
    bool ESC;
    bool EMERGENCY_EXIT;
};