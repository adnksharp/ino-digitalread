byte Input = 2;
bool Change = false;

void setup()
{
    Serial.begin(9600);
    pinMode(Input, INPUT);
}

void loop()
{
    if (digitalRead(Input) == HIGH)
    {
        while (digitalRead(Input) == HIGH)
        {
            if (Change == false)
            {
                Change = true;
                Serial.println("Entrada digital: HIGH");
            }
        }
        Change = false;
        Serial.println("Entrada digital: LOW");
    }
}