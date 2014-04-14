/*
 *  Copyright © 2013 mathdu07
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <SFML/UI/Event/KeyfieldSetEvent.h>

using namespace sf::ui;

KeyfieldSetEvent::KeyfieldSetEvent(KeyField* source, sf::Keyboard::Key key)
: ComponentEvent(source),
  m_key(key)
{

}

KeyfieldSetEvent::~KeyfieldSetEvent()
{

}

sf::Keyboard::Key sf::ui::KeyfieldSetEvent::getKey() const
{
    return m_key;
}
