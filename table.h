/*
    This file is part of extract-polygons.

    extract-polygons is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    extract-polygons is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with extract-polygons.  If not, see <http://www.gnu.org/licenses/>.
*/

struct hashtable *table_init();
void table_set(struct hashtable *array, int id);
int table_get(struct hashtable *array, int id);
void table_destruct(struct hashtable *table);
