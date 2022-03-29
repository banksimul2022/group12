
const db = require('../database');

const opintojakso = {
  getById: function(id, callback) {
    return db.query('select * from opintojakso where idOpintojakso=?', [id], callback);
  },
  getAll: function(callback) {
    return db.query('select * from opintojakso', callback);
  },
  add: function(opintojakso, callback) {
    return db.query(
      'insert into opintojakso (koodi,laajuus,nimi) values(?,?,?)',
      [opintojakso.koodi, opintojakso.laajuus, opintojakso.nimi],
      callback
    );
  },
  delete: function(id, callback) {
    return db.query('delete from opintojakso where idopintojakso=?', [id], callback);
  },
  update: function(idopintojakso, opintojakso, callback) {
    return db.query(
      'update opintojakso set koodi=?,laajuus=?,nimi=? where idopintojakso=?',
      [opintojakso.koodi, opintojakso.laajuus, opintojakso.nimi,idopintojakso],
      callback
    );
  }
};
module.exports = opintojakso;