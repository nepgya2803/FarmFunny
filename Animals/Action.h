#ifdef ACTION_H
#define ACTION_H

namespace Animals
{
    class Action
    {
        public:
            virtual string Sound();
            virtual string Eat();
            virtual string Reproduce();
    }
} // namespace Animals

#endif