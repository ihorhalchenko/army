#include "../Spell.h"
#include "Prayer.h"

Prayer::Prayer() : Spell("Prayer", 30, Spell::TYPE_HEALING) {}
Prayer::~Prayer() {}